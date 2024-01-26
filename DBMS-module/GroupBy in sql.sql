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

SELECT * FROM students GROUP BY first_name;

SELECT last_name, COUNT(*) FROM students GROUP BY last_name;
