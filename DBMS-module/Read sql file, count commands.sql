-- to read the sql file in sql shell or workbench
-- source <path>	-- this will read and execute the commands present in the sql file
SOURCE E:\Study\LPU\B.TECH\Summer PEP\Cipher schools\CipherSchools-SDE-course\DBMS-module\some basic DML commands.sql

SELECT COUNT(*) FROM students;

SELECT COUNT(last_name) FROM students;

SELECT COUNT(DISTINCT last_name) FROM students;

SELECT COUNT(DISTINCT first_namelast_name) FROM students;