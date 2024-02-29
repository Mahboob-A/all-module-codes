

/*
Week 03 : Deep Dive into Database 
Module 10 : Join
Module Date : 120323, Sunday
Watch Date : 310323, Friday, 08'th Roja + 010423, Saturday, 09'th Roja, 05.00 am 
(Today : 010423, Saturday)

Watch Time : from 09.30 am to 09.30 am 

*/

-- A.  INNER JOIN : ONLY RETURNS THE MATCHING VALUES FORM BOTH TABLE 

SELECT e.first_name, e.last_name, e.job_id, e.salary, d.location_id
FROM employees e INNER JOIN departments d
ON e.department_id = d.department_id;


-- B. LEFT JOIN : RETURNS ALL THE DATA FROM LEFT TABLE AND ONLY MATCHING DATA 
-- FROM RGIHT TABLE 

SELECT e.first_name, e.last_name, e.job_id, e.salary, d.location_id
FROM employees e LEFT JOIN departments d 
ON e.department_id = d.department_id;

-- C. RIGHT JOIN : RETURNS ALL THE DATA FROM RIGHT TABLE AND ONLY THE MATCHING DATA
-- FROM THE LEFT TABLE 

SELECT e.first_name, e.last_name, e.job_id, e.salary, d.location_id
FROM departments d RIGHT JOIN employees e 
ON e.department_id = d.department_id;


-- D. FULL OUTER JOIN : RETUNRS ALL THE DATA FROM BOTH TABLES - IRRESPECTINVE OF
-- MATCHING AND NON-MATCHING DATA 

-- SEE WHY THE CODE IS NOT WORKING 
SELECT e.first_name, e.last_name, e.job_id, e.salary, d.location_id
FROM employees e FULL OUTER JOIN departments d 
ON e.department_id = d.department_id;


SELECT *
FROM employees  FULL OUTER JOIN departments 
ON employees.department_id = departments.department_id;






