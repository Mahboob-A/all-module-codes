
/*
db week o1 practice day 02. 
210323, Tuesday, 04.00 pm 
curr week bd o4 

*/

CREATE Table student(
	Username varchar(15) NOT NULL, 
    Email varchar(30) NOT NULL, 
    FirstName varchar(20) NOT NULL, 
    LastName varchar(20) NOT NULL, 
    PhoneNo varchar(20) NOT NULL, 
    Address varchar(255), 
    HSCResult decimal(5, 2), 
    DateOfBirth date, 
    Password  varchar(30) NOT NULL, 
    PRIMARY KEY (Username)
);

CREATE Table student_2(
	id int NOT NULL AUTO_INCREMENT PRIMARY KEY, 
	Username varchar(15) NOT NULL, 
    Email varchar(30) NOT NULL, 
    FirstName varchar(20) NOT NULL, 
    LastName varchar(20) NOT NULL, 
    PhoneNo varchar(20) NOT NULL, 
    Address varchar(255), 
    HSCResult decimal(5, 2), 
    DateOfBirth date, 
    Password  varchar(30) NOT NULL
    -- PRIMARY KEY (Username)  this is a comment 
);

-- this is a comment 

/*
this is a block comment 
is sql, smallcase or uppercase does not matter even for 
table names. say I have a table with the name of " student " 
and I want to delete the table, then " drop table StUdeNt " would 
also delete the same table. 

This also means that if I already have a table with the name of of " student ", 
I can not create any more table with StUdEnT, studenT, Student, stuDENT, STUdent like this 
as all of these would act in case sensitive small case manner. 

*/

-- drop table student, studenT_2;

-- week 01 exam query code 
/*
exam date : 040323, Saturday
exam written date : 220323, Wednesday, 05.00 pm 

Create a mysql table Student with the following fields : 
Name
Roll
Class
Blood group
Contact No
Result
Date of Birth
Age

*/

CREATE Table Student(
	
    Name varchar(30) NOT NULL, 
    Roll int NOT NULL, 
    Class varchar(30) NOT NULL, 
    BloodGroup char(5), 
    ContactNo varchar(20), 
    Result decimal(5, 2) NOT NULL, 
    DateOfBirth date NOT NULL, 
    Age int NOT NULL, 
    PRIMARY KEY (ROLL)

);

Rename table Student TO NewStudent;

Drop table newstudent;
