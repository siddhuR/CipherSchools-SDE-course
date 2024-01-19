CREATE TABLE guitars2(model VARCHAR(100) DEFAULT "unknown", price INT DEFAULT -1);

INSERT INTO guitars2(model) VALUES ('yamaha'), ('taylor');

SELECT * FROM guitars;
SELECT * FROM guitars2;

INSERT INTO guitars2() VALUES (), (), (), (), ();

SELECT * FROM guitars2;

DESC guitars2;

CREATE TABLE guitars3(model VARCHAR(100) DEFAULT 'UNKNOWN' NOT NULL, price INT DEFAULT -1 NOT NULL);

INSERT INTO guitars3(model, price) VALUES(NULL, NULL);

DESC guitars3;