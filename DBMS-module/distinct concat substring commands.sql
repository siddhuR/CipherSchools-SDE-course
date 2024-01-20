CREATE TABLE students(
s_id INT AUTO_INCREMENT,
first_name VARCHAR(50),
last_name VARCHAR(50),
PRIMARY KEY(s_id)
);

INSERT INTO students(first_name, last_name) VALUES
('jhon', 'smith'),
('william', 'Brown'),
('james', 'Miller'),
('Georg', 'Johnson'),
('Henry', 'Jones'),
('Thomas', 'Davis'),
('charles', 'williams'),
('joseph', 'wilson'),
('ajhon', 'Jones'),
('swilliam', 'dBrown'),
('djames', 'Davis'),
('fGeorg', 'Miller'),
('gHenry', 'Miller'),
('hThomass', 'smith'),
('jcharles', 'swilliams'),
('kjoseph', 'swilson');

SELECT * FROM students;

SELECT DISTINCT last_name FROM students;

SELECT CONCAT(first_name,' ', last_name) AS full_name FROM students;

ALTER TABLE students ADD s_email VARCHAR(100) DEFAULT 'UNKNOWN';

UPDATE students SET s_email = CONCAT(first_name,'.',last_name,'@gmail.com') WHERE s_email = 'UNKNOWN';

SELECT * FROM students;

SELECT SUBSTRING('HELLO WORLD', 1,2);

SELECT * FROM students WHERE SUBSTRING(first_name,1,1) = 'A';

