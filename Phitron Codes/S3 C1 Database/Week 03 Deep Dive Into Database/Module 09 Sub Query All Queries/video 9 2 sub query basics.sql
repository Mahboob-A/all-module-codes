
-- A. 
/*
Week 03 : Deep Dive into Database 
Module 09 : Sub Query 
Module Date : 110323, Saturday
Watch Date : 28,29, 30/03/23, Tuesday + Wednesday, Thursday (5th + 6th + 7th Roja) 

*/


USE hr;

-- 280323, Tuesday, 5th Roja 
-- VIDEO 9 - 2 : SUB QUERY BASICS

-- sub query is a query inside another query. 

/*
QUESTION 01 : 
	Say we want to get the salary of employees whose salary is greater than the avarage 
	salary of all employees. 
    
SOLUTION : 
	Here we need to use sub query. The bigger query is to find the salary of 
    all the employees and the smaller query is to find the AVG salary of all the 
    employees. 
    
EXPLANATION : 
    
    In the below query : 
    
    " SELECT first_name, last_name, job_id, salary
	FROM employees
	WHERE salary > " => in this query we are selecting the infos we needed 
    using SELECT and giving our condition using WHERE. 
    
    
    " (SELECT AVG(salary) FROM employees); " => and by using this 
    condition, we are getting the average salary of all employees. 
    
    So, based on value returned by this innner query, we are filtering the 
    salary using a Greater Than Operator. 
    
    This is how a SUB QUERY works.   
    
*/

SELECT first_name, last_name, job_id, salary
FROM employees
WHERE salary > (SELECT AVG(salary) FROM employees);


/*
QUESTION 02 : 
	Show all the employees whose salary are greater than a 
	particular employee. 
              
SOLUTION : 
	
    In this problem also, we need to use a sub query. The outer sub query 
    will fetch the salary of all other employees based on the 
    operator and the inner sub query will return the salary of our
    particular employee with whome we need to compare the salary to all 
    other employees. 


*/

SELECT first_name, last_name, job_id, salary
FROM employees
WHERE salary > (SELECT salary FROM employees WHERE employee_id = 108);

SELECT first_name, last_name, job_id, salary
FROM employees
WHERE salary > (SELECT salary 
				FROM employees
                WHERE employee_id = 108);





















