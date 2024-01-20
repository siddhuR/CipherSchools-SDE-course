CREATE TABLE books(
book_id INT PRIMARY KEY AUTO_INCREMENT,
name VARCHAR(100) DEFAULT 'UNKNOWN',
author VARCHAR(100) DEFAULT 'UNKNOWN',
price INT );

INSERT INTO books(name, author, price) VALUES
('Think and Grow Rich', 'Napoleon Hill', 100),
('Power of Now', 'Eckhart Tolle', 400),
('Automatic Habits', 'James Clear', 500),
('Rich Dad Poor Dad', 'Robert Kiyosaki', 200);

SELECT * FROM books;

SELECT name, price FROM books;
SELECT price, name FROM books;

SELECT name, price FROM books WHERE author = 'Napoleon Hill';

SELECT name, price FROM books WHERE price >=400;

UPDATE books SET price=200 WHERE author = 'Napoleon Hill';

SELECT * FROM books;

UPDATE books SET price=600 WHERE book_id=3;

DELETE FROM books WHERE price >=500;