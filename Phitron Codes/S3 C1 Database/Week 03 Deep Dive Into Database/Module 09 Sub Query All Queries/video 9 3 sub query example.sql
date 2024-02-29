

/*
Week 03 : Deep Dive into Database 
Module 09 : Sub Query 
Module Date : 110323, Saturday
Watch Date : 28,29, 30/03/23, Tuesday + Wednesday, Thursday (5th + 6th + 7th Roja) 

*/

-- 290323, Wednesday, 6th Roja, 03.35 pm 
-- VIDEO 9 - 3 : SUB QUERY EXAMPLES 


USE hr;


/*
QUESTION 01 : 
	Get the salary of all employees whose salary are less than 
    the salary of employee id = 107

APPROACH : 
	Sub Query Question. 
    1st Query is salary of all employees who meet a certain condition. (main query) 
    2nd query is the salary of employee with employee_id = 107. (sub query) 
    
CONDTITON : 
	1st query value is less than the 2nd query value. 

*/

SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees
WHERE salary < (SELECT salary FROM employees WHERE employee_id = 107)
ORDER BY salary DESC
LIMIT 10 OFFSET 5;


SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees
WHERE employee_id != 107 AND salary = (SELECT salary FROM employees WHERE employee_id = 107);


/*
QUESTION 02 : 
	Report all the employees who work in the same department 
    with the employee id = 107 with their name, job_id and salary. 

APPROACH : 
	Sub Query Question. 
    Main Query is the job_id which should match with with the job_id of sub query. (main query) 
    Sub Query is the job_id of employee_id = 107. (sub query) 
    
CONDTITON : 
	main query job_id should match with sub query job id. 

*/


SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees
WHERE job_id = (
				SELECT job_id 
				FROM employees 
                WHERE employee_id = 107
                );


-- 300323, Thursday, 05.00 am, 7th Roja
-- Sub Query more than 1 
/*
QUESTION 03 : 
	Report all the employees who work with same department with employee id = 107 
    AND earn more salary than employee id = 155. 

APPROACH : 
	Here we can see that the answer for main query, i.e report all the employees
    is dependent on two conditions : same job_id with employee_id = 107 
    AND salary > salary of employee_id = 155
    So, we need two sub query to fetch the two conditional values and then based on these
    results, the main query will return the main results. 
    

*/

SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees 
WHERE job_id = (SELECT job_id
				FROM employees
                WHERE employee_id = 107) AND salary > (SELECT salary 
											  FROM employees
                                              WHERE employee_id = 155);

-- Or, 
SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees 
WHERE job_id = (SELECT job_id FROM employees WHERE employee_id = 107) 
	  AND salary > (SELECT salary FROM employees WHERE employee_id = 155);



/*
QUESTION 04 : 
	Report all the employees who work with same department with name = "diana"
    AND earn more salary than name = "oliver". 

APPROACH : 
	Here we can see that the answer for main query, i.e report all the employees
    is dependent on two conditions : the employees who work with the same department with 
    the employee named " diana " AND the employees who earn more than the employee
    named "oniver". Here the problem is that we only know the name of employees who 
    set the condition. We can use the names to get the result, but getting result based on 
    name is not a great choice. So, we will use a sub query inside sub query 
    where the outer sub query will handle the main condition and 
    the inner sub query will handle the primary key. 

    

*/

SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees
WHERE job_id = (SELECT job_id -- returns the job id of diana 
			   FROM employees 
			   WHERE employee_id = (SELECT employee_id  -- returns the employee id of first employee with the name "diana" 
									FROM employees 
                                    WHERE first_name = "diana"
                                    LIMIT 1)) -- cap : only the first match is retunred 
	AND salary > (SELECT salary  -- returns the salary of oliver 
				  FROM employees
                  WHERE employee_id = (SELECT employee_id -- returns the employee id of first employee who is matched with the name "oliver" 
									   FROM employees
                                       WHERE first_name = "oliver"
                                       LIMIT 1));


























