

/*
----------------------------------------
Hi! 
this is week 02 of DBMS class. 
Week 02 : Database Table and Operators 
----------------------------------------
Module 05 : Database Table
Mod date : 040323, Saturday
Watch date : 230323, Thursday, 04.00 pm 
----------------------------------------
Video : 5 : Constraints 
*/

USE modulefive;

-- VID : 5 - 1 + 5 - 3 || CONSTRAINTS 

CREATE TABLE Student_2(
	Roll INT PRIMARY KEY, 
    Name VARCHAR(30) NOT NULL, 
    ContactNo CHAR(12) NOT NULL, 
    Email VARCHAR(50) UNIQUE, 
    Age INT CHECK (Age >= 18), 
    Marks DECIMAL(5, 2) DEFAULT 0.00
    
    -- PRIMARY KEY(Roll)
);


-- VID 5 - 2 
-- Insert values into table 

INSERT INTO Student_2(Roll, Name, ContactNo, Email, Age, Marks)
VALUES(101, "Rahim", "96098184350", "rhthm@gmail.com", 18, 75.40);

INSERT INTO Student_2(Roll, Name, ContactNo, Email, Age, Marks)
VALUES(102, "Karim", "7908186040", "karim@gmail.com", 20, 90.00);

INSERT INTO Student_2(Roll, Name, ContactNo, Email, Age, Marks)
VALUES(103, "Halim", "9732186040", "halim@gmail.com", 19, 80.00);

INSERT INTO Student_2(Roll, Name, ContactNo, Email, Age, Marks)
VALUES(104, "Kalim", "9872186040", "kalim@gmail.com", 18, 70.00);

INSERT INTO Student_2(Roll, Name, ContactNo, Email, Age, Marks)
VALUES(105, "Rahim", "8772186040", "rhtm@gmail.com", 18, 75.50);

-- VID 5 - 4 UPDATE AND DELETE RECORD IN A TABLE 
-- UPDATE RECORD IN A TABLE 
--  to update any record use UPDATE tablename
-- then SET field1 = newValue1, field2 = newValue2, ... fieldX = newVlaueX etc (do not put coma at the last)
-- then WHERE Primary Key = Key ( put the PK Value in which row change is needed) 

UPDATE Student_2 
SET Name = "Rahim" -- ContactNO = "9810123456", Marks = 99.00, age = 18
WHERE Roll = 101;


-- DELETE RECORD IN A TABLE 
-- If we want to delete any record in a table, then we need to use 
-- this syntax : DELETE FROM tableName 
-- WHERE Condition 
-- (if the condition is not a Primary Key, then we need to turn off 
-- safe mode first, then run delete, then again turn on safe mode, just like UPDATE 

DELETE FROM Student_2 
WHERE Roll = 101;



-- If we want to update the table without using the Primary Key, 
-- then we need to turn off the SET SQL_SAFE_UPDATES = 0;
-- and then make the update, and again turn it on SET SQL_SAFE_UPDATES = 1; 
--  just like below. 

SET SQL_SAFE_UPDATES = 0;
UPDATE Student_2 
SET Name = "Rahim" -- ContactNO = "9810123456", Marks = 99.00, age = 18
WHERE Name = "Disko Rahim";
SET SQL_SAFE_UPDATES = 1;


-- DELETE NOT USING ANY PRIMARY KEY 

SET SQL_SAFE_UPDATES = 0;
DELETE FROM Student_2
WHERE Name = "Rahim";
SET SQL_SAFE_UPDATES = 1;

SELECT * FROM Student_2;



-- VID 5 - 5 : SELECT STATEMENT 
-- Using SELECT, we can select which of the fileds we want to work with 

-- 1. Show entire table 
SELECT * FROM Student_2;

-- 2. Show particular fields 
SELECT Roll, Name FROM Student_2;

-- 3. Select all fields of a particular Record 
SELECT * FROM Student_2
WHERE Roll = 101;

-- 4. Select particular fields of a particular Record 
-- using primary key 
SELECT Name, ContactNo FROM Student_2
WHERE ROLL = 102;

-- not using primary key 
SELECT Name, Marks FROM Student_2
WHERE Name = "Rahim";



UPDATE Student_2
SET Email = "rhm@gmail.com", Marks = 99.10
WHERE Roll = 105;




