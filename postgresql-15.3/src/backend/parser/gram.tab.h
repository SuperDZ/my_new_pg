/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_BASE_YY_GRAM_TAB_H_INCLUDED
# define YY_BASE_YY_GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    UIDENT = 259,
    FCONST = 260,
    SCONST = 261,
    USCONST = 262,
    BCONST = 263,
    XCONST = 264,
    Op = 265,
    ICONST = 266,
    PARAM = 267,
    TYPECAST = 268,
    DOT_DOT = 269,
    COLON_EQUALS = 270,
    EQUALS_GREATER = 271,
    LESS_EQUALS = 272,
    GREATER_EQUALS = 273,
    NOT_EQUALS = 274,
    LOGICAL_AND = 275,
    LOGICAL_OR = 276,
    ABORT_P = 277,
    ABSOLUTE_P = 278,
    ACCESS = 279,
    ACTION = 280,
    ADD_P = 281,
    ADMIN = 282,
    AFTER = 283,
    AGGREGATE = 284,
    ALL = 285,
    ALSO = 286,
    ALTER = 287,
    ALWAYS = 288,
    ANALYSE = 289,
    ANALYZE = 290,
    AND = 291,
    ANY = 292,
    ARRAY = 293,
    AS = 294,
    ASC = 295,
    ASENSITIVE = 296,
    ASSERTION = 297,
    ASSIGNMENT = 298,
    ASYMMETRIC = 299,
    ATOMIC = 300,
    AT = 301,
    ATTACH = 302,
    ATTRIBUTE = 303,
    AUTHORIZATION = 304,
    AUTO_INCREMENT = 305,
    BACKWARD = 306,
    BEFORE = 307,
    BEGIN_P = 308,
    BETWEEN = 309,
    BIGINT = 310,
    BINARY = 311,
    BIT = 312,
    BOOLEAN_P = 313,
    BOTH = 314,
    BREADTH = 315,
    BY = 316,
    CACHE = 317,
    CALL = 318,
    CALLED = 319,
    CASCADE = 320,
    CASCADED = 321,
    CASE = 322,
    CAST = 323,
    CATALOG_P = 324,
    CHAIN = 325,
    CHAR_P = 326,
    CHARACTER = 327,
    CHARACTERISTICS = 328,
    CHECK = 329,
    CHECKPOINT = 330,
    CLASS = 331,
    CLOSE = 332,
    CLUSTER = 333,
    COALESCE = 334,
    COLLATE = 335,
    COLLATION = 336,
    COLUMN = 337,
    COLUMNS = 338,
    COMMENT = 339,
    COMMENTS = 340,
    COMMIT = 341,
    COMMITTED = 342,
    COMPRESSION = 343,
    CONCURRENTLY = 344,
    CONFIGURATION = 345,
    CONFLICT = 346,
    CONNECTION = 347,
    CONSTRAINT = 348,
    CONSTRAINTS = 349,
    CONTENT_P = 350,
    CONTINUE_P = 351,
    CONVERSION_P = 352,
    COPY = 353,
    COST = 354,
    CREATE = 355,
    CROSS = 356,
    CSV = 357,
    CUBE = 358,
    CURRENT_P = 359,
    CURRENT_CATALOG = 360,
    CURRENT_DATE = 361,
    CURRENT_ROLE = 362,
    CURRENT_SCHEMA = 363,
    CURRENT_TIME = 364,
    CURRENT_TIMESTAMP = 365,
    CURRENT_USER = 366,
    CURSOR = 367,
    CYCLE = 368,
    DATA_P = 369,
    DATABASE = 370,
    DAY_P = 371,
    DEALLOCATE = 372,
    DEC = 373,
    DECIMAL_P = 374,
    DECLARE = 375,
    DEFAULT = 376,
    DEFAULTS = 377,
    DEFERRABLE = 378,
    DEFERRED = 379,
    DEFINER = 380,
    DELETE_P = 381,
    DELIMITER = 382,
    DELIMITERS = 383,
    DEPENDS = 384,
    DEPTH = 385,
    DESC = 386,
    DETACH = 387,
    DICTIONARY = 388,
    DISABLE_P = 389,
    DISCARD = 390,
    DISTINCT = 391,
    DO = 392,
    DOCUMENT_P = 393,
    DOMAIN_P = 394,
    DOUBLE_P = 395,
    DROP = 396,
    EACH = 397,
    ELSE = 398,
    ENABLE_P = 399,
    ENCODING = 400,
    ENCRYPTED = 401,
    END_P = 402,
    ENUM_P = 403,
    ESCAPE = 404,
    EVENT = 405,
    EXCEPT = 406,
    EXCLUDE = 407,
    EXCLUDING = 408,
    EXCLUSIVE = 409,
    EXECUTE = 410,
    EXISTS = 411,
    EXPLAIN = 412,
    EXPRESSION = 413,
    EXTENSION = 414,
    EXTERNAL = 415,
    EXTRACT = 416,
    FALSE_P = 417,
    FAMILY = 418,
    FETCH = 419,
    FILTER = 420,
    FINALIZE = 421,
    FIRST_P = 422,
    FLOAT_P = 423,
    FOLLOWING = 424,
    FOR = 425,
    FORCE = 426,
    FOREIGN = 427,
    FORWARD = 428,
    FREEZE = 429,
    FROM = 430,
    FULL = 431,
    FUNCTION = 432,
    FUNCTIONS = 433,
    GENERATED = 434,
    GLOBAL = 435,
    GRANT = 436,
    GRANTED = 437,
    GREATEST = 438,
    GROUP_P = 439,
    GROUPING = 440,
    GROUPS = 441,
    HANDLER = 442,
    HAVING = 443,
    HEADER_P = 444,
    HOLD = 445,
    HOUR_P = 446,
    IDENTITY_P = 447,
    IF_P = 448,
    ILIKE = 449,
    IMMEDIATE = 450,
    IMMUTABLE = 451,
    IMPLICIT_P = 452,
    IMPORT_P = 453,
    IN_P = 454,
    INCLUDE = 455,
    INCLUDING = 456,
    INCREMENT = 457,
    INDEX = 458,
    INDEXES = 459,
    INHERIT = 460,
    INHERITS = 461,
    INITIALLY = 462,
    INLINE_P = 463,
    INNER_P = 464,
    INOUT = 465,
    INPUT_P = 466,
    INSENSITIVE = 467,
    INSERT = 468,
    INSTEAD = 469,
    INT_P = 470,
    INTEGER = 471,
    INTERSECT = 472,
    INTERVAL = 473,
    INTO = 474,
    INVOKER = 475,
    IS = 476,
    ISNULL = 477,
    ISOLATION = 478,
    JOIN = 479,
    KEY = 480,
    LABEL = 481,
    LANGUAGE = 482,
    LARGE_P = 483,
    LAST_P = 484,
    LATERAL_P = 485,
    LEADING = 486,
    LEAKPROOF = 487,
    LEAST = 488,
    LEFT = 489,
    LEVEL = 490,
    LIKE = 491,
    LIMIT = 492,
    LISTEN = 493,
    LOAD = 494,
    LOCAL = 495,
    LOCALTIME = 496,
    LOCALTIMESTAMP = 497,
    LOCATION = 498,
    LOCK_P = 499,
    LOCKED = 500,
    LOGGED = 501,
    MAPPING = 502,
    MATCH = 503,
    MATCHED = 504,
    MATERIALIZED = 505,
    MAXVALUE = 506,
    MERGE = 507,
    METHOD = 508,
    MINUTE_P = 509,
    MINVALUE = 510,
    MODE = 511,
    MODIFY = 512,
    MONTH_P = 513,
    MOVE = 514,
    NAME_P = 515,
    NAMES = 516,
    NATIONAL = 517,
    NATURAL = 518,
    NCHAR = 519,
    NEW = 520,
    NEXT = 521,
    NFC = 522,
    NFD = 523,
    NFKC = 524,
    NFKD = 525,
    NO = 526,
    NONE = 527,
    NOT_NOTEXC = 528,
    NORMALIZE = 529,
    NORMALIZED = 530,
    NOT = 531,
    NOTHING = 532,
    NOTIFY = 533,
    NOTNULL = 534,
    NOWAIT = 535,
    NULL_P = 536,
    NULLIF = 537,
    NULLS_P = 538,
    NUMERIC = 539,
    OBJECT_P = 540,
    OF = 541,
    OFF = 542,
    OFFSET = 543,
    OIDS = 544,
    OLD = 545,
    ON = 546,
    ONLY = 547,
    OPERATOR = 548,
    OPTION = 549,
    OPTIONS = 550,
    OR = 551,
    ORDER = 552,
    ORDINALITY = 553,
    OTHERS = 554,
    OUT_P = 555,
    OUTER_P = 556,
    OVER = 557,
    OVERLAPS = 558,
    OVERLAY = 559,
    OVERRIDING = 560,
    OWNED = 561,
    OWNER = 562,
    PARALLEL = 563,
    PARAMETER = 564,
    PARSER = 565,
    PARTIAL = 566,
    PARTITION = 567,
    PASSING = 568,
    PASSWORD = 569,
    PLACING = 570,
    PLANS = 571,
    POLICY = 572,
    POSITION = 573,
    PRECEDING = 574,
    PRECISION = 575,
    PRESERVE = 576,
    PREPARE = 577,
    PREPARED = 578,
    PRIMARY = 579,
    PRIOR = 580,
    PRIVILEGES = 581,
    PROCEDURAL = 582,
    PROCEDURE = 583,
    PROCEDURES = 584,
    PROGRAM = 585,
    PUBLICATION = 586,
    QUOTE = 587,
    RANGE = 588,
    READ = 589,
    REAL = 590,
    REASSIGN = 591,
    RECHECK = 592,
    RECURSIVE = 593,
    REF_P = 594,
    REFERENCES = 595,
    REFERENCING = 596,
    REFRESH = 597,
    REINDEX = 598,
    RELATIVE_P = 599,
    RELEASE = 600,
    RENAME = 601,
    REPEATABLE = 602,
    REPLACE = 603,
    REPLICA = 604,
    RESET = 605,
    RESTART = 606,
    RESTRICT = 607,
    RETURN = 608,
    RETURNING = 609,
    RETURNS = 610,
    REVOKE = 611,
    RIGHT = 612,
    ROLE = 613,
    ROLLBACK = 614,
    ROLLUP = 615,
    ROUTINE = 616,
    ROUTINES = 617,
    ROW = 618,
    ROWS = 619,
    RULE = 620,
    SAVEPOINT = 621,
    SCHEMA = 622,
    SCHEMAS = 623,
    SCROLL = 624,
    SEARCH = 625,
    SECOND_P = 626,
    SECURITY = 627,
    SELECT = 628,
    SEQUENCE = 629,
    SEQUENCES = 630,
    SERIALIZABLE = 631,
    SERVER = 632,
    SESSION = 633,
    SESSION_USER = 634,
    SET = 635,
    SETS = 636,
    SETOF = 637,
    SHARE = 638,
    SHOW = 639,
    SIMILAR = 640,
    SIMPLE = 641,
    SKIP = 642,
    SMALLINT = 643,
    SNAPSHOT = 644,
    SOME = 645,
    SQL_P = 646,
    STABLE = 647,
    STANDALONE_P = 648,
    START = 649,
    STATEMENT = 650,
    STATISTICS = 651,
    STDIN = 652,
    STDOUT = 653,
    STORAGE = 654,
    STORED = 655,
    STRICT_P = 656,
    STRIP_P = 657,
    SUBSCRIPTION = 658,
    SUBSTRING = 659,
    SUPPORT = 660,
    SYMMETRIC = 661,
    SYSID = 662,
    SYSTEM_P = 663,
    TABLE = 664,
    TABLES = 665,
    TABLESAMPLE = 666,
    TABLESPACE = 667,
    TEMP = 668,
    TEMPLATE = 669,
    TEMPORARY = 670,
    TEXT_P = 671,
    THEN = 672,
    TIES = 673,
    TIME = 674,
    TIMESTAMP = 675,
    TO = 676,
    TRAILING = 677,
    TRANSACTION = 678,
    TRANSFORM = 679,
    TREAT = 680,
    TRIGGER = 681,
    TRIM = 682,
    TRUE_P = 683,
    TRUNCATE = 684,
    TRUSTED = 685,
    TYPE_P = 686,
    TYPES_P = 687,
    UESCAPE = 688,
    UNBOUNDED = 689,
    UNCOMMITTED = 690,
    UNENCRYPTED = 691,
    UNION = 692,
    UNIQUE = 693,
    UNKNOWN = 694,
    UNLISTEN = 695,
    UNLOGGED = 696,
    UNTIL = 697,
    UPDATE = 698,
    USER = 699,
    USING = 700,
    VACUUM = 701,
    VALID = 702,
    VALIDATE = 703,
    VALIDATOR = 704,
    VALUE_P = 705,
    VALUES = 706,
    VARCHAR = 707,
    VARIADIC = 708,
    VARYING = 709,
    VERBOSE = 710,
    VERSION_P = 711,
    VIEW = 712,
    VIEWS = 713,
    VOLATILE = 714,
    WHEN = 715,
    WHERE = 716,
    WHITESPACE_P = 717,
    WINDOW = 718,
    WITH = 719,
    WITHIN = 720,
    WITHOUT = 721,
    WORK = 722,
    WRAPPER = 723,
    WRITE = 724,
    XML_P = 725,
    XMLATTRIBUTES = 726,
    XMLCONCAT = 727,
    XMLELEMENT = 728,
    XMLEXISTS = 729,
    XMLFOREST = 730,
    XMLNAMESPACES = 731,
    XMLPARSE = 732,
    XMLPI = 733,
    XMLROOT = 734,
    XMLSERIALIZE = 735,
    XMLTABLE = 736,
    XOR = 737,
    YEAR_P = 738,
    YES_P = 739,
    ZONE = 740,
    NOT_LA = 741,
    NOT_LAEXC = 742,
    NULLS_LA = 743,
    WITH_LA = 744,
    MODE_TYPE_NAME = 745,
    MODE_PLPGSQL_EXPR = 746,
    MODE_PLPGSQL_ASSIGN1 = 747,
    MODE_PLPGSQL_ASSIGN2 = 748,
    MODE_PLPGSQL_ASSIGN3 = 749,
    UMINUS = 750
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 240 "gram.y" /* yacc.c:1909  */

	core_YYSTYPE core_yystype;
	/* these fields must match core_YYSTYPE: */
	int			ival;
	char	   *str;
	const char *keyword;

	char		chr;
	bool		boolean;
	JoinType	jtype;
	DropBehavior dbehavior;
	OnCommitAction oncommit;
	List	   *list;
	Node	   *node;
	ObjectType	objtype;
	TypeName   *typnam;
	FunctionParameter *fun_param;
	FunctionParameterMode fun_param_mode;
	ObjectWithArgs *objwithargs;
	DefElem	   *defelt;
	SortBy	   *sortby;
	WindowDef  *windef;
	JoinExpr   *jexpr;
	IndexElem  *ielem;
	StatsElem  *selem;
	Alias	   *alias;
	RangeVar   *range;
	IntoClause *into;
	WithClause *with;
	InferClause	*infer;
	OnConflictClause *onconflict;
	A_Indices  *aind;
	ResTarget  *target;
	struct PrivTarget *privtarget;
	AccessPriv *accesspriv;
	struct ImportQual *importqual;
	InsertStmt *istmt;
	VariableSetStmt *vsetstmt;
	PartitionElem *partelem;
	PartitionSpec *partspec;
	PartitionBoundSpec *partboundspec;
	RoleSpec   *rolespec;
	PublicationObjSpec *publicationobjectspec;
	struct SelectLimit *selectlimit;
	SetQuantifier setquantifier;
	struct GroupClause *groupclause;
	MergeWhenClause *mergewhen;
	struct KeyActions *keyactions;
	struct KeyAction *keyaction;

#line 601 "gram.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int base_yyparse (core_yyscan_t yyscanner);

#endif /* !YY_BASE_YY_GRAM_TAB_H_INCLUDED  */
