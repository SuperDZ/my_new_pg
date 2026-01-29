SET mysql_mode = off;
SELECT 1 <=> 1;

SET mysql_mode = on;
SELECT 1 <=> 1;
SELECT 1 <=> 2;
SELECT NULL::int <=> NULL::int;
SELECT NULL::int <=> 0;
SELECT 1 <=> NULL::int;
SELECT (1 <=> 1) AND false;
SELECT 1 <=> 1 AND false;
