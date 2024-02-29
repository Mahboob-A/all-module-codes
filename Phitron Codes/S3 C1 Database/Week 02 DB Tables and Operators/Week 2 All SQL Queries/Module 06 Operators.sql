
/*
----------------------------------------
Hi! 
this is week 02 of DBMS class. 
Week 02 : Database Table and Operators 
----------------------------------------
Module 06 : Arithmetic and Logical operations. 
Mod date : 050323, Sunday
Watch date : 250323, Saturday, 05.00 am, 2ND ROJA 
----------------------------------------
*/

SELECT * FROM Countries;
SELECT * FROM Departments;
SELECT * FROM employees;


USE hr;

-- Video : 6 - 3 : DISTINCT, ORDER BY 
-- A. DISTINCT : Distinct returns all the Unique values is a field 

SELECT * FROM Departments; 

SELECT DISTINCT location_id
FROM Departments;


-- B. ORDER BY 
-- ORDER BY : ORDER BY can sort any field in ascending or descending order. 
-- use ASC for sorting in ascending order, and DESC for sorting / re-ordering in descending order. 

SELECT * FROM Employees;

-- ORDER BY SHOWING THE ONLY THE FIELD THAT IS SORTED IN ASCENDING ORDER : ASC (without any condition)
-- condition is optional 
SELECT salary
FROM Employees
ORDER BY salary ASC;

-- ORDER BY BASED ON A FIELD FOR WHOLE TABLE IN DESCENDING ORDER WITH CONDINTION 
SELECT * 
FROM Employees 
WHERE Salary >= 10000
ORDER BY Salary DESC;


-- VIDEO 6 - 4 : LIMIT 
-- with LIMIT, we can limit how much value we want in return 
-- GET FIRST FEW VALUES : LIMIT VALUE (EX: LIMIT 10) This just returns the first 10 vlaues 
-- GET VALUES FROM MIDDLE : LIMIT 15 OFFSET 10 ( This will return 15 values but from 11'th value)
-- Alternate : limit 15, 10 - This means return 15 values from the 11th values do not give first 10 values
-- we can also use distinct order by etc. with limit.

-- GETTING ONLY FIRST 10 SALARY ITEMS 
SELECT salary
FROM Employees
LIMIT 10;

-- GETTING ALL THE ITEMS OF FIRST 10 VALUES 
SELECT *
FROM Employees
LIMIT 10;

-- GERTTING 15 VLAUES NOT INCLUDIGN THE FIRST 10 VALUES 
SELECT *
FROM Employees
LIMIT 15 OFFSET 10;

-- GETTING ASC ORDER BY LIMIT 10 OFFSET 5 VALUES (GET 10 VALUES NOT INCLUDING THE FIRST 5 VALUES) 
SELECT *
FROM Employees
ORDER BY Salary ASC
LIMIT 10 OFFSET 5;  

-- (WE CAN ALSO WRITE OFFSET LIKE THIS : LIMIT 10, 15 => THIS MEANS RETURN 10 VALUES NOT INCLUDING FIRST 15 VALUES)
SELECT *
FROM Employees
LIMIT 10, 15; 

-- (LIMIT 10 -> THIS 10 IS THE NUMBER OF RETURNED VALUES, OFFSET 15 -> THIS 15 IS NOT NUMBER OF INCLUDED FIRST VALUES)


-- VIDEO 6 - 5 : ARITHMETIC OPERATORS
-- SYNTAX : SELECT operator ex : SELECT 5 + 3 

SELECT 5+3;
SELECT 5-3;
SELECT 5/3;
SELECT 5*3;
SELECT 5%3;


-- VIDEO 6 - 6 : COMPARISON OPERATORS 
-- <, >, <=, >=, =, !=, BETWEEN 

-- FIND SARALY OF EMPLOYEE WHOSE SALARY IS >= 9k and <= 15K with BETWEEN operator 
-- BETWEEN operator returns values from a range of two values 

SELECT job_id, first_name, salary
FROM employees
WHERE salary BETWEEN 9000 AND 15000;

-- this same thing can also be done with less_than _equalto and greater_than_equalto operator
SELECT job_id, first_name, salary
FROM employees
WHERE salary >= 9000 AND salary <= 15000
ORDER BY salary ASC;

-- Getting all the fields based on the condition 
SELECT *
FROM employees
WHERE salary >= 9000 AND salary <= 15000
ORDER BY salary ASC;

-- excluding 2500 salary from the result 
SELECT job_id, first_name, salary
FROM employees
WHERE salary >= 2000 AND salary <= 3000 AND salary != 2500
ORDER BY salary ASC;

-- VIDEO 6 - 7 : LOGICAL OPERATOR : AND, OR 

-- job_id field er IT_PROG values gulo ask korchi AND salary >= 5000 
-- and hire_date onujayi sort korchi in ascending order 
-- ## use AND when we need to two or more than two conditions to get a result ## -- 
-- in AND - ALL THE CONDITIONS NEED TO BE TRUE TO GET AN ANSWER 
SELECT * 
FROM employees
WHERE job_id = "it_prog" AND salary >= 5000
ORDER BY hire_date ASC;

SELECT * 
FROM employees 
WHERE first_name = "John"  AND salary >= 5000;

SELECT * 
FROM employees
WHERE job_id = "it_prog" AND salary < 10000  OR first_name = "John"
ORDER BY hire_date ASC;

-- OR : in or, when we need any of the conditions to be TURE, then we use OR 

SELECT * 
FROM employees
WHERE job_id = "it_prog" OR salary > 10000  
ORDER BY salary ASC;

SELECT * 
FROM employees
WHERE first_name = "John" OR salary > 15000; -- (here both conditions are true so it will show results based on both conditions)

SELECT * 
FROM employees
WHERE first_name = "Johns" OR salary > 15000;   -- (here only SALARY is true, no name like Johns is the table) - this query with AND would yield nothing 

-- we can also use nested logical operators like : 
-- 1. (A AND B) OR (A OR B) 2. ((A OR B) AND A) OR ((A AND B) OR B)

-- VIDEO 6 - 7 : IN, NOT IN, LIKE, AS 

-- A. IN : in IN, retust will be returned matching the given list of tags 
-- Say I want only employees who are manager, programmer and / or finance officer 
-- IN will return all the values associated with the tags given in the list 
SELECT * 
FROM employees
WHERE job_id IN ("IT_PROG", "AC_ACCOUNT", "ST_MAN");  

SELECT * 
FROM employees
WHERE job_id IN ("AC_ACCOUNT", "AC_MGR", "AD_ASST");  

-- the same thing with OR operator 
SELECT * 
FROM employees
WHERE job_id = "IT_PROG" OR job_id = "AC_ACCOUNT" OR job_id = "ST_MAN";

-- B. NOT IN 
-- NOT IN is just oppisite of IN. 
-- in NOT IN, every value will be retunred excluding the values associated with the given list 

SELECT * 
FROM employees
WHERE job_id NOT IN ("IT_PROG", "AC_ACCOUNT", "ST_MAN");
-- this will return the values that are not associated with these tags 
-- given in the list 

-- this also can be written by != operator 
SELECT * 
FROM employees
WHERE job_id != "IT_PROG" AND job_id != "AC_ACCOUNT" AND job_id != "ST_MAN";

-- C. LIKE 
-- We can find pattern with LIKE operator. 
-- if we want to know which employees has their name begun with S, or 
-- which employee has S in their last capital or which employee has 
-- abc or xyz in the middle of their name, we can use LIKE 
-- we just need to use % at before the searching char if word ends with the
-- char ( "%X") , or at the end if the char begins with the searching char (" X%) 
-- or in both side if the searching chars are in the middle of the word ("%X% " )

-- Find which employees has their name beginning with S 
SELECT * 
FROM employees 
WHERE first_name LIKE ("S%");

-- Ending with S 
SELECT * 
FROM employees 
WHERE first_name LIKE ("%S");

-- "te" in the middle of the name 
SELECT * 
FROM employees 
WHERE first_name LIKE ("%te%");

-- D. AS (ALIAS) 
-- With AS operator, we can rename the field names as our with 
-- while displaying the table, but this does not change the original 
-- field name as well. 

SELECT first_name AS my_name
FROM employees;
-- this will just show the first_name filed as my_name, just that's all of AS.


SELECT * FROM employees;












