CREATE DATABASE guitar_store;
USE guitar_store;
SHOW TABLES;

CREATE TABLE guitars(model VARCHAR(100), price INT);

DESCRIBE guitars;

INSERT INTO guitar(model, price) VALUE("yamaha", 10000);
INSERT INTO guitar VALUE("taylor", 100000);
INSERT INTO guitar(price, model) VALUE(1000000, "faith");

SELECT * FROM guitars;

INSERT INTO guitar(model, price) VALUE("yamahaG", 20000), ("BATON ROUGE", 50000), ("YUGUITAR", 60000);

SELECT * FROM guitars;

INSERT INTO guitar(model) VALUE("yamahaG1"), ("BATON ROUGE1"), ("YUGUITAR1");

DESCRIBE guitars;
DESC guitars;