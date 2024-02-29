

/*
Conceptual Session : 3 - 1 
Live Session Date : 130323, Monday

Watch Date : 050423, Wednesday, 13'th Roja, 05.00 am 

*/

USE hr;

SELECT COUNT(*)
FROM countries;

SELECT region_id, COUNT(*)
FROM countries
GROUP BY(region_id);


SELECT department_id, COUNT(job_id)
FROM employees
GROUP BY department_id
HAVING COUNT(job_id) > 4;


SELECT *
FROM employees
WHERE salary < (SELECT AVG(salary) FROM employees) 
	AND



SELECT *
FROM employees;


SELECT first_name, last_name
FROM employees
WHERE first_name LIKE "%a%";

SELECT *
FROM countries;


SELECT *
FROM regions;


















































