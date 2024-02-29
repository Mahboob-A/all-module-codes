

/*
----------------------------------------
Hi! 
this is week 02 of DBMS class. 
Week 02 : Module 07 : Functions
----------------------------------------
Module 07 : Functions
Mod date : 070323, Tuesday
Watch date : 260323, Sunday, 05.00 am, 3RD ROJA 
Current Moudle : WEEK 04 FINAL EXAM RESEALED ON 250323, SATURDAY.
BY THIS WEEK 04 FINAL EXAM, DATABASE, COURSE AND THE MAIN COURSE IS ENDED. 
AFTER SOME GIVEN DEADLINE, ACC AND JOB GROUP MODULES WILL BE RELEASED. 

WE HAD BEGUN OUR JOURNEY LAST YEAR ALMOST BY THIS TIME, OUR ORIENTATION WAS TAKEN ON 27TH MARCH, I GUESS
AND THIS YEAR ON 25 MARCH, THE MAIN COURSE IS ENDED! 

I HAVE COME A LONG WAY, MAY ALLAH HELP US FOR RIGHTOUS PATH, AMIN. 
----------------------------------------

*/

-- ------------------------------------------------------------------

-- VIDEO : 7 - 1 -- 
-- ## A. FUNCTIONS ## --
 
SELECT SQRT(100);
SELECT COS(90);
SELECT COS(0);   -- THE VALUE IN THE FUNC IS IN RADIAN
SELECT COS(90 * PI() / 180);   -- NOW THE VALUE IN FUNC IN DEGREE 

SELECT UPPER("this is a line") AS my_line;
SELECT LOWER("THIS IS A ANOTHER SMALL CAP LINE");

SELECT ROUND(135.375);
SELECT TRUNCATE(135.375, 1);

SELECT CEIL(123.12);
SELECT FLOOR(123.59);

SELECT RAND();

SELECT ABS(-2370);

SELECT GREATEST(1, 23, 384, 23, 32);
SELECT LEAST(2, 32, 23, 23, 4, 2, 43);

SELECT 10 DIV 5;   -- INT DIV I.E RES IS JUST 2 
SELECT 10 / 5;     -- GIVES RES IN FRACTION I.E RES IS 2.0000

SELECT POW(2, 3);   -- VALUE, POWER 

SELECT PI();

SELECT MOD(3, 5);
SELECT MOD(5, 3);  -- DIVIDEND, DIVISOR

SELECT LOG(2);
SELECT LOG2(2);
SELECT LOG10(10);

-- -----------------------------------------------------------

-- VIDEO : 7 - 2 -- 
-- ## B. GROUP FUNCTIONS ## -- 
-- MIN, MAX, COUNT, SUM, AVG 

USE hr;

SELECT MIN(salary)    -- FUNC TO FIND THE MIN VALUE IN A FIELD 
FROM employees;

SELECT MAX(salary)   -- FUNC TO FIND THE MAX VALUE IN A FIELD
FROM employees;

-- FUNC OF COUNTING TOTAL NUMBER OF DATA ITEMS IN A TABLE OR FIELD 
SELECT COUNT(*)  -- counts total number of rows 
FROM employees;

SELECT COUNT(employee_id)  -- this counts a field 
FROM employees;

SELECT SUM(salary)   -- FUNC OF FINDING SUM ==> SUM 
FROM employees;

SELECT AVG(salary)   -- FUNC OF FINDING AVERAGE ==> AVG 
FROM employees;


-- ----------------------------------------------------------------
-- ############################################################# -- 
-- ----------------------------------------------------------------
-- 270323, MONDAY, 05.00 AM, 4TH ROJA.
-- VIDEO : 7 - 3 -- 
-- ## C. GROUP BY ## -- 

-- GROUP FUNCTIONS : MIN, MAX, COUNT, SUM, AVG 
-- we can only show the field name which we are GROUPING BY 
-- we can use all GROUP FUNCTIONS IN GROUP BY 

-- show the total number of same deprartment employees 
-- here for this question, Grouping By the job_id and counting them group-wise
SELECT job_id, COUNT(*)
FROM employees
GROUP BY job_id;

-- show the max salaray for each department of employees (all department er max salary)
-- I am here Grouping the table by job_id and showing the max salary of this group 
SELECT job_id, MAX(salary)
FROM employees
GROUP BY job_id;

-- show the total number of employees work under each manager 
SELECT manager_id, COUNT(*)
FROM employees
GROUP BY manager_id;

-- show total number of employee under each department 
SELECT department_id, COUNT(*)
FROM employees
GROUP BY department_id;

-- show the all departments which are located in same locations 

SELECT location_id, COUNT(*)
FROM departments
GROUP BY location_id;

SELECT manager_id, COUNT(*)
FROM departments
GROUP BY manager_id;

SELECT * 
FROM departments;



SELECT * 
FROM employees
WHERE manager_id = NULL;

SELECT * 
FROM employees;


-- show the count of total minimum and maximum salary for each jobs 
SELECT min_salary, COUNT(*)
FROM jobs
GROUP BY min_salary
ORDER BY min_salary ASC;

SELECT max_salary, COUNT(*)
FROM jobs
GROUP BY max_salary
ORDER BY max_salary DESC;

SELECT * 
FROM jobs;


SELECT * 
FROM job_history;

-- SHOW THE TOTAL NUMBER OF OFFICE LOCATIONS FOR EACH COUNTRY 
SELECT country_id, COUNT(*)
FROM locations
GROUP BY country_id
ORDER BY COUNT(*) ASC;

SELECT * 
FROM locations;

-- SHOW HOW MANY COUNTRIES IN SAME REGION
SELECT region_id, COUNT(*)
FROM countries
GROUP BY region_id
ORDER BY COUNT(*) ASC;

-- -------------------------------------------------------------

-- VIDEO : 7 - 4 : HAVING 
-- ## D. HAVING ## -- 
/*
 HAVING IS THE CONDITION FOR GROUP BY. IF WE NEED TO PUT ANY CONDITION 
 WHILE WE GROUP BY, THEN WE NEED TO USE HAVING AFTER THE GROUP BY. 
 WE CAN NOT USE CONDITION USING WHERE IN GROUP BY, ONLY BY HAVING. 
*/

-- SHOW THE TOTAL NUMBER OF EMPLOYEES IN EACH DEPARTMENT . IF ANY 
-- DEPT HAS ONLY A SINGLE EMPLOYEE, THEN SKIP THIS DEPT. 

SELECT job_id, COUNT(*)
FROM employees
GROUP BY job_id
HAVING COUNT(*) > 1;

-- SHOW THE SAME MINIMUM SALARY GREATER THAN 5000
SELECT min_salary, COUNT(*)
FROM jobs
GROUP BY min_salary 
HAVING min_salary > 5000;

-- SHOW THE MIN SALARY FOR EACH TYPE OF JOBS HAVING MIN SALARY > 10000
SELECT job_id, COUNT(*)
FROM employees
GROUP BY job_id
HAVING MIN(salary) > 10000;  -- these jobs minimum salary is > 10k 


-- -------------------------------------------------------------------------

-- VIDEO : 7 - 5 : ALTER TABLE 
-- ## E. ALTER TABLE ## -- 

/*
WE CAN USE ALTER TALBLE WHEN WE HAVE AN EXISTING TABLE AND WE WANT TO ADD
A NEW FIELD IN THE TABLE. 
*/

CREATE TABLE student(
    name VARCHAR(30), 
    Roll INT, 
    Section CHAR(1),
    
    PRIMARY KEY (ROLL)
);

-- ADDING A NEW FIELD IN THE STUDENT TABLE USING ALTER TABLE
ALTER TABLE student
ADD phone_no VARCHAR(20);

DROP TABLE student;  -- this command drops the who table 
-- FIGURE OUT HOW TO DROP A FIELD FROM A TABLE 

-- -------------------------------------------------------------------- 
SELECT * 
FROM employees;


SELECT * 
FROM jobs;

SELECT * 
FROM countries;

SELECT * 
FROM regions;

-- ------------------------------------------------------------------------
-- 4TH ROJA, 06.30 AM, 270323, MONDAY DBMS - WEEK 02 LAB CLASS (MAIN COURSE ENDED). 

-- ## PRACTICE DAY 02 ## -- 
/*
MODULE 7.5 : PRACTICE DAY 02 270323, 4TH ROJA, 08.00 AM 
QUESTIONS : 
Practice

Group the employees using job_id
Group the employees using job_id when minimum salary is more than 5000
Give an example of alter table and show the usage
Write the differences of WHERE and HAVING. Explain with examples.

*/

USE hr;

-- A. 
SELECT job_id, SUM(salary)
FROM employees
GROUP BY job_id;

SELECT job_id, AVG(salary)
FROM employees
GROUP BY job_id;

SELECT job_id, MAX(salary)
FROM employees
GROUP BY job_id;

SELECT job_id, MIN(salary)
FROM employees
GROUP BY job_id;

SELECT job_id, COUNT(job_id)
FROM employees
GROUP BY job_id;


-- B. 
SELECT job_id, COUNT(*)
FROM employees
GROUP BY job_id
HAVING MIN(salary) > 5000;

SELECT job_id, COUNT(*)
FROM employees
GROUP BY job_id
HAVING COUNT(*) > 1;

SELECT *
FROM employees;
-- -----------------------------------------------------------------------
-- 4TH ROJA, 08.30 AM, 270323, MONDAY DBMS - WEEK 02 PRACTICE DAY 02 (MAIN COURSE ENDED).