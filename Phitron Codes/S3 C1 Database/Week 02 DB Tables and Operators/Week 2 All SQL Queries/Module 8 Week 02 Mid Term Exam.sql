

USE hr;

SELECT * 
FROM employees;

CREATE DATABASE week_two_mid_term_exam;

USE week_two_mid_term_exam;


-- 1. Create the employee table without constraints

CREATE TABLE employee(
    employee_id INT, 
    first_name VARCHAR(20), 
    last_name VARCHAR(20), 
    email VARCHAR(50), 
    phone_number VARCHAR(20), 
    hire_date DATE, 
    job_id VARCHAR(10), 
    salary DECIMAL(8, 2) DEFAULT 0.00, 
    
    PRIMARY KEY(employee_id)

);

DROP TABLE employee;

SELECT * 
FROM employee;


-- 2. Create the employee table with proper constraints

CREATE TABLE employee_2(
    employee_id INT AUTO_INCREMENT PRIMARY KEY, 
    first_name VARCHAR(20) NOT NULL, 
    last_name VARCHAR(20) NOT NULL, 
    email VARCHAR(50) UNIQUE, 
    phone_number VARCHAR(20), 
    hire_date DATE DEFAULT(CURRENT_DATE),  
    job_id VARCHAR(10) NOT NULL, 
    salary DECIMAL(8, 2) DEFAULT 0.00
    
);

DROP TABLE employee_2;

INSERT INTO employee_2(employee_id, first_name, last_name, email, phone_number, job_id)
VALUES(101, "Halim", "Sk", "halim@gmail.com", "9872125647", "AD_FIN");

INSERT INTO employee_2( first_name, last_name, email, phone_number, job_id)
VALUES( "Salim", "Sk", "salim@gmail.com", "9672125647", "AD_FIN");

INSERT INTO employee_2( first_name, last_name, email, phone_number, job_id)
VALUES( "Talim", "Sk", "talim@gmail.com", "9800125647", "AD_MAN");

-- if we do not specifiy the values, then we must put all the values irrspective if the value has default value 
INSERT INTO employee_2 -- ( first_name, last_name, email, phone_number, job_id)
VALUES( "walim", "Sk", "walim@gmail.com", "9600125647", "AD_MAN");

INSERT INTO employee_2 ( first_name, last_name, email, phone_number, job_id)
VALUES( "walim", "Sk", "walim@gmail.com", "9600125647", "AD_MAN");


-- 3. Show all of employee table
SELECT * 
FROM employee_2;

-- ---------------
USE hr;

-- 4. Show the first names and salaries of employee who has last name “king”
SELECT first_name AS Name, last_name AS Surname, salary
FROM employees
WHERE last_name LIKE ("%king");


-- 5. Show the first names and last names of the employees who has salary greater than 2000

SELECT first_name AS Name, last_name AS Surname, salary
FROM employees
WHERE salary > 2000
ORDER BY salary DESC;

-- 6. Show the employee names and salaries who earns more than average salary.

SELECT first_name AS Name, last_name AS Surname, salary
FROM employees
WHERE salary > (SELECT AVG(salary) FROM employees)
ORDER BY salary ASC;

SELECT AVG(salary)
FROM employees;

-- 7. SALARY BASED ON JOB_ID GROUP BY 
SELECT job_id, ROUND(AVG(salary), 2)
FROM employees
GROUP BY job_id; 

SELECT job_id, SUM(salary)
FROM employees
GROUP BY job_id; 

SELECT job_id, AVG(salary) AS avg_salary, MAX(salary) AS max_salary, SUM(salary) AS total_dept_salary
FROM employees
GROUP BY job_id;

SELECT job_id, ROUND(AVG(salary), 2) AS avg_salary, MAX(salary) AS max_salary, SUM(salary) AS total_dept_salary
FROM employees
GROUP BY job_id;

-- 8. Sort the employee table ascending order according to salary and show 5th to 10th rows

SELECT *
FROM employees
ORDER BY salary ASC
LIMIT 5 OFFSET 5;

SELECT *
FROM employees
ORDER BY salary ASC
LIMIT 10; -- OFFSET 5;

SELECT *
FROM employees
ORDER BY salary ASC
LIMIT 12; -- OFFSET 5;

-- 9. Count the employees and total salary

SELECT COUNT(*) AS total_employee, SUM(salary) AS total_salary_for_all_employees
FROM employees;
