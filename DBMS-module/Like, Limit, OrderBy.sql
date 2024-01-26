CREATE TABLE students(
s_id INT AUTO_INCREMENT,
first_name VARCHAR(50),
last_name VARCHAR(50),
age INT,
PRIMARY KEY(s_id)
);

INSERT INTO students(first_name, last_name) VALUES
('jhon', 'smith', 20),
('william', 'Brown', 21),
('james', 'Miller', 20),
('Georg', 'Johnson', 22),
('Henry', 'Jones', 22),
('Thomas', 'Davis', 20),
('charles', 'williams', 19),
('joseph', 'wilson', 19),
('ajhon', 'Jones', 17),
('swilliam', 'dBrown', 20),
('djames', 'Davis', 22),
('fGeorg', 'Miller', 17),
('gHenry', 'Miller', 24),
('hThomass', 'smith', 20),
('jcharles', 'swilliams', 22),
('kjoseph', 'swilson', 19);

SELECT * FROM students;

-- LIKE
SELECT * FROM students WHERE first_name LIKE "%li%";

SELECT * FROM students WHERE first_name LIKE "El%";

SELECT * FROM students WHERE first_name LIKE "el%";

SELECT * FROM students WHERE last_name LIKE "s%";

SELECT * FROM students WHERE first_name LIKE "%s";

SELECT * FROM students WHERE first_name LIKE "____";	-- gives the names of the string which first_name is 4 length because "4 time _"

-- ORDERBY
SELECT * FROM students ORDER BY first_name;

SELECT * FROM students ORDER BY first_name DESC;

SELECT * FROM students ORDER BY age,first_name;

SELECT s_id, first_name, age FROM students ORDER BY 3;	-- here 3 means age, as the way we are writing after SELECT. 2 means first_name, 1 means s_id


-- LIMIT

SELECT * FROM students WHERE age = 17 LIMIT 3;

SELECT * FROM students WHERE first_name LIKE "J%" LIMIT 2;

SELECT * FROM students WHERE first_name LIKE "J%" ORDER BY first_name LIMIT 2;

SELECT * FROM students WHERE first_name LIKE "J%" ORDER BY age LIMIT 2;