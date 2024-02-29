/*
----------------------------------------
Hi! 
this is week 02 of DBMS class. 
Week 02 : Practice Day 01
----------------------------------------
Module 6.5 : Practice Day 01
Mod date : 060323, Monday
Watch date : 260323, Sunday, 05.00 am, 3RD ROJA 
Current Moudle : WEEK 04 FINAL EXAM RESEALED ON 250323, SATURDAY.
BY THIS WEEK 04 FINAL EXAM, DATABASE, COURSE AND THE MAIN COURSE IS ENDED. 
AFTER SOME GIVEN DEADLINE, ACC AND JOB GROUP MODULES WILL BE RELEASED. 

WE HAD BEGUN OUR JOURNEY LAST YEAR ALMOST BY THIS TIME, OUR ORIENTATION WAS TAKEN ON 27TH MARCH, I GUESS
AND THIS YEAR ON 25 MARCH, THE MAIN COURSE IS ENDED! 

I HAVE COME A LONG WAY, MAY ALLAH HELP US FOR RIGHTOUS PATH, AMIN. 
----------------------------------------

Practice Day 01 : 

Run DUMMY_DATABASE.sql to your MySQL
Try to view all the tables from that database using select statement
Select the employee last names
Select the employee who earns more than 10000
Select the employee who has last name starts with “k” or ends with “k”

*/

USE hr;

SELECT last_name
FROM employees;

SELECT * 
FROM employees 
WHERE salary > 10000;

SELECT * 
FROM employees
WHERE first_name LIKE ("%k");

SELECT * 
FROM employees
WHERE first_name LIKE ("k%");


-- DISTINCT 
SELECT DISTINCT job_id
FROM employees;

SELECT DISTINCT manager_id
FROM employees
WHERE salary > 10000;


-- ORDER BY 

SELECT * 
FROM employees
WHERE salary > 10000 
ORDER BY salary ASC;

SELECT *
FROM employees
WHERE salary > 10000 
ORDER BY salary DESC;

-- LIMIT 
SELECT * 
FROM employees
WHERE employee_id > 150 
ORDER BY first_name ASC
LIMIT 10;

SELECT * 
FROM employees
WHERE employee_id > 150 
ORDER BY employee_id ASC
LIMIT 5 OFFSET 15;

SELECT * 
FROM employees
WHERE manager_id > 100
ORDER BY manager_id ASC
LIMIT 10, 5;  -- first one is offset, and 2nd value is limit 


-- AND 
SELECT * 
FROM employees
WHERE employee_id > 150 AND salary > 5000
ORDER BY salary ASC
LIMIT 5 OFFSET 5;

SELECT * 
FROM employees
WHERE employee_id < 50 OR salary > 5000
ORDER BY salary ASC
LIMIT 5 OFFSET 5;

-- IN 
SELECT * 
FROM employees
WHERE job_id IN ("SA_REP", "HR_REP", "ST_MAN")
ORDER BY salary ASC
LIMIT 5 OFFSET 5;

SELECT * 
FROM employees
WHERE job_id NOT IN ("SA_REP", "HR_REP", "ST_MAN")
ORDER BY job_id ASC
LIMIT 5 OFFSET 5;

-- LIKE 
SELECT * 
FROM employees
WHERE job_id LIKE ("%AC%");

-- AS 
SELECT first_name AS f_n
FROM employees
WHERE job_id IN ("SA_REP", "HR_REP", "ST_MAN")
ORDER BY salary ASC
LIMIT 5 OFFSET 5;

SELECT * 
FROM employees;




















