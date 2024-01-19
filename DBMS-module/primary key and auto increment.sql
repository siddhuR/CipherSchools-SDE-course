CREATE TABLE insta_users(username VARCHAR(100), password VARCHAR(255));
DESCRIBE insta_users;

INSERT INTO insta_users(username, password) VALUE ('sid', '321');
INSERT INTO insta_users(username, password) VALUE ('sid', '123');

CREATE TABLE new_insta(username VARCHAR(100) PRIMARY KEY, password VARCHAR(100));
INSERT INTO new_insta(username, password) VALUES ('sid', '123');
INSERT INTO new_insta(username, password) VALUES ('sid', '321');

SELECT * FROM new_insta;

DESCRIBE new_insta;

CREATE TABLE emp(emp_id INT PRIMARY KEY, name VARCHAR(100), salary INT);

INSERT INTO emp(emp_id, name, salary) VALUES (1, 'Sid', 2000), (2, 'Rao', 1000);

INSERT INTO emp(emp_id, name, salary) VALUES (1, 'SID', 2000);
INSERT INTO emp(emp_id, name, salary) VALUES (3, 'SID', 2000);

CREATE TABLE emp2(emp_id INT, name VARCHAR(100), salary INT, PRIMARY KEY(emp_id));

CREATE TABLE new_emp(emp_id INT AUTO_INCREMENT, name VARCHAR(100), salary INT, PRIMARY KEY(emp_id));

INSERT INTO new_emp(name, salary) VALUES ('Sidd', 4000), ('rou', 5000);