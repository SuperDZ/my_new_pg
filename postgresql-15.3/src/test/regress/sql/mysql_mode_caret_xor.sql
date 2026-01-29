SET mysql_mode = false;
SELECT 2 ^ 3;

SET mysql_mode = true;
SELECT 1 ^ 1, 11 ^ 3;
SELECT 1 # comment
;
SELECT 18446744073709551615::numeric = (CAST(-1 AS bigint) ^ 0);
