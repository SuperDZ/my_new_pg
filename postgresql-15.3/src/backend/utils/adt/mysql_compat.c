/*-------------------------------------------------------------------------
 *
 * mysql_compat.c
 *	  MySQL compatibility helpers.
 *
 * Portions Copyright (c) 1996-2022, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * IDENTIFICATION
 *	  src/backend/utils/adt/mysql_compat.c
 *
 *-------------------------------------------------------------------------
 */

#include "postgres.h"

#include <ctype.h>
#include <math.h>

#include "catalog/pg_type.h"
#include "fmgr.h"
#include "utils/builtins.h"
#include "utils/lsyscache.h"
#include "utils/numeric.h"
#include "utils/varbit.h"

PG_FUNCTION_INFO_V1(mysql_to_int8);
PG_FUNCTION_INFO_V1(mysql_u64);

static int64
mysql_parse_int64_prefix(const char *str)
{
	const unsigned char *ptr = (const unsigned char *) str;
	const unsigned char *start;
	bool		neg = false;
	uint64		acc = 0;
	uint64		limit;

	while (*ptr && isspace(*ptr))
		ptr++;

	if (*ptr == '-' || *ptr == '+')
	{
		neg = (*ptr == '-');
		ptr++;
	}

	start = ptr;
	limit = neg ? (uint64) PG_INT64_MAX + 1 : (uint64) PG_INT64_MAX;

	while (*ptr && isdigit(*ptr))
	{
		int digit = *ptr - '0';

		if (acc > (limit - digit) / 10)
			ereport(ERROR,
					(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
					 errmsg("bigint out of range")));

		acc = acc * 10 + digit;
		ptr++;
	}

	if (ptr == start)
		return 0;

	if (neg)
	{
		if (acc == (uint64) PG_INT64_MAX + 1)
			return PG_INT64_MIN;
		return -(int64) acc;
	}

	return (int64) acc;
}

static uint64
mysql_varbit_low64(VarBit *arg)
{
	int			bitlen = VARBITLEN(arg);
	int			bits_to_read = bitlen < 64 ? bitlen : 64;
	bits8	   *data = VARBITS(arg);
	uint64		result = 0;

	for (int offset = 0; offset < bits_to_read; offset++)
	{
		int src_pos = bitlen - 1 - offset;
		int byte_index = src_pos / BITS_PER_BYTE;
		int bit_index = 7 - (src_pos % BITS_PER_BYTE);

		if (data[byte_index] & (1U << bit_index))
			result |= ((uint64) 1 << offset);
	}

	return result;
}

Datum
mysql_to_int8(PG_FUNCTION_ARGS)
{
	Datum		arg;
	Oid			argtype;
	int64		result;

	if (PG_ARGISNULL(0))
		PG_RETURN_NULL();

	arg = PG_GETARG_DATUM(0);
	argtype = get_fn_expr_argtype(fcinfo->flinfo, 0);

	switch (argtype)
	{
		case BOOLOID:
			PG_RETURN_INT64(PG_GETARG_BOOL(0) ? 1 : 0);
		case INT2OID:
			PG_RETURN_INT64((int64) PG_GETARG_INT16(0));
		case INT4OID:
			PG_RETURN_INT64((int64) PG_GETARG_INT32(0));
		case INT8OID:
			PG_RETURN_INT64(PG_GETARG_INT64(0));
		case FLOAT4OID:
		{
			float8 val = (float8) PG_GETARG_FLOAT4(0);

			if (isnan(val))
				ereport(ERROR,
						(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
						 errmsg("cannot convert NaN to bigint")));
			if (isinf(val))
				ereport(ERROR,
						(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
						 errmsg("cannot convert infinity to bigint")));
			val = trunc(val);
			if (!FLOAT8_FITS_IN_INT64(val))
				ereport(ERROR,
						(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
						 errmsg("bigint out of range")));
			PG_RETURN_INT64((int64) val);
		}
		case FLOAT8OID:
		{
			float8 val = PG_GETARG_FLOAT8(0);

			if (isnan(val))
				ereport(ERROR,
						(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
						 errmsg("cannot convert NaN to bigint")));
			if (isinf(val))
				ereport(ERROR,
						(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
						 errmsg("cannot convert infinity to bigint")));
			val = trunc(val);
			if (!FLOAT8_FITS_IN_INT64(val))
				ereport(ERROR,
						(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
						 errmsg("bigint out of range")));
			PG_RETURN_INT64((int64) val);
		}
		case NUMERICOID:
		{
			Datum truncnum = DirectFunctionCall2(numeric_trunc,
												 arg,
												 Int32GetDatum(0));
			Datum int8val = DirectFunctionCall1(numeric_int8, truncnum);

			PG_RETURN_INT64(DatumGetInt64(int8val));
		}
		case TEXTOID:
		case VARCHAROID:
		case BPCHAROID:
		{
			char *str = text_to_cstring(DatumGetTextPP(arg));

			result = mysql_parse_int64_prefix(str);
			pfree(str);
			PG_RETURN_INT64(result);
		}
		case BITOID:
		case VARBITOID:
		{
			uint64 uval = mysql_varbit_low64(PG_GETARG_VARBIT_P(0));

			PG_RETURN_INT64((int64) uval);
		}
		default:
		{
			Oid outputfunc;
			bool typIsVarlena;
			char *str;

			getTypeOutputInfo(argtype, &outputfunc, &typIsVarlena);
			str = OidOutputFunctionCall(outputfunc, arg);
			result = mysql_parse_int64_prefix(str);
			pfree(str);
			PG_RETURN_INT64(result);
		}
	}
}

Datum
mysql_u64(PG_FUNCTION_ARGS)
{
	int64		val;
	Datum		num;

	if (PG_ARGISNULL(0))
		PG_RETURN_NULL();

	val = PG_GETARG_INT64(0);
	num = DirectFunctionCall1(int8_numeric, Int64GetDatum(val));

	if (val >= 0)
		PG_RETURN_DATUM(num);

	PG_RETURN_DATUM(DirectFunctionCall2(numeric_add,
										num,
										DirectFunctionCall3(numeric_in,
															CStringGetDatum("18446744073709551616"),
															ObjectIdGetDatum(InvalidOid),
															Int32GetDatum(-1))));
}
