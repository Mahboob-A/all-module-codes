

/*
Week 03 : Deep Dive into Database 
Module 10 : Join
Module Date : 120323, Sunday
Watch Date : 310323, Friday, 08'th Roja + 010423, Saturday, 09'th Roja, 05.00 am 
(Today : 010423, Saturday)

*/

-- VIDEO : 10 - 01 :: JOINING TABLES - INTRODUCTION 


USE hr;

SELECT * 
FROM employees;

SELECT * 
FROM departments;

SELECT * 
FROM locations;

-- JOIN TABLES WITHOUT USING JOIN - USING WHERE AND CONDITIONS. 

/*
JOINING TWO TABLES WITHOUT USING JOIN. THIS IS VERY SLOW AND INEFFICIENT APPROACH. 
JOIN IS EFFICIENT, FASTER AND MORE READABLE THAN JOINING MORE TABLES USING THE BELOW WHERE AND USING 
CONDIONALS. 

I AM SHOWING THE BASIC DETAILS OF EMPLOYEES FROM EMPLOYEES TABLE AND LOCATION ID FROM DEPARTMENTS TABLE 
IN A SINGLE TABLE. 

TO COMBINE ANY TWO OR MORE THAN TWO TABLE, THERE MUST BE A SINGLE FIELD WHICH IS COMMON TO EACH TABLE, 
MOST PREFERABLE ID TYPE FIELD WHICH WILL BE USED TO MATCH THE DATA OF BOTH TABLES TO MATCH WHICH DATA 
OF ONE TALBE IS RELATED TO WHICH DATA OF OTHER TABLE. 
*/


-- VIDEO : 10 - 02 :: DOING WITHOUT JOIN , USING WHERE AND CONDITIONALS 

-- JOINING employees and departments table and getting basic employee details from employees and 
-- location_id form departments tables using department_id as matching key 
SELECT employees.employee_id, employees.first_name, employees.last_name, employees.salary, employees.job_id, departments.department_name, departments.location_id
FROM employees, departments
WHERE employees.department_id = departments.department_id
ORDER BY employees.employee_id ASC;

-- ALSO WORKS THE BELOW QUERY THE SAME WAY. 

SELECT employee_id, first_name, last_name, salary, job_id, department_name, location_id
FROM employees, departments
WHERE employees.department_id = departments.department_id
ORDER BY employee_id ASC;

-- JOINING employees, departments and locations tables and getting basic employee details from employees 
-- location_id form departments and city, state_province and country_id from 
-- locations tables using department_id and location_id  as matching key 

SELECT employees.employee_id, employees.first_name, employees.last_name, employees.salary, employees.job_id, 
departments.department_name, departments.location_id, locations.city, locations.state_province, locations.country_id
FROM employees, departments, locations
WHERE employees.department_id = departments.department_id AND departments.location_id = locations.location_id
ORDER BY employees.employee_id ASC;

-- USING ALIAS 

SELECT e.employee_id, e.first_name, e.last_name, e.salary, e.job_id, d.department_name, d.location_id, 
l.city, l.state_province, l.country_id
FROM employees e, departments d, locations l
WHERE e.department_id = d.department_id AND d.location_id = l.location_id
ORDER BY e.employee_id ASC;


-- SELECT EMPLOYEE_ID, FIRST_NAME FROM employees AND DEPARTMENT_NAME FROM departments talbes
SELECT e.employee_id, e.first_name, e.last_name, e.salary, d.department_name
FROM employees e, departments d
WHERE e.department_id = d.department_id
ORDER BY e.employee_id ASC;

-- VIDEO : 10 - 3 :: DOING WIHT JOIN STATEMENT 

-- WE CAN USE JOIN STATEMENT WITH " USING " AND " ON " KEYWORD. 

-- SHOW EMP ID, THEIR NAMES FROM employees AND DEPT NAME FROM departments USING JOIN STATEMNT. 

-- JOIN + USING 

SELECT employees.employee_id, employees.first_name, employees.last_name, departments.department_name
FROM employees JOIN departments USING (department_id)
ORDER BY employees.employee_id ASC;   -- efficient joining as JOIN is used to join the tables. 

-- JOIN + USING with alias 

SELECT e.employee_id, e.first_name, e.last_name, e.department_id, d.department_name
FROM employees e JOIN departments d USING (department_id)
ORDER BY e.employee_id ASC;   -- efficient joining as JOIN is used to join the tables. 

-- JOIN + ON 

SELECT e.employee_id, e.first_name, e.last_name, e.salary, d.department_name, d.location_id
FROM employees e JOIN departmentS d ON (e.department_id = d.department_id)
ORDER BY e.employee_id ASC;   -- efficient joining as JOIN is used to join the tables. 

-- JOINING SAME EXAMPLE USING WHERE 
SELECT e.employee_id, e.first_name, e.last_name, e.salary, d.department_name, d.location_id
FROM employees e, departments d
WHERE e.department_id = d.department_id 
ORDER BY e.employee_id ASC;   -- inefficient as joining table not using JOIN but using WHERE 

/*
THE ONLY DIFFERENCE BETWEEN using AND on IS THAT IN USING, WE JUST PUT THE 
MATCHING KEY. BUT WHILE IN ON, WE NEED TO SPECIFY JUST LIKE USING WHERE. 
*/


SELECT * 
FROM departments;

SELECT * 
FROM locations;
















































