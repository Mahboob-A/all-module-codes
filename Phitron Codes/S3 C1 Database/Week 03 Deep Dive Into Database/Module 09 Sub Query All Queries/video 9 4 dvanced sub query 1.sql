
/*
Week 03 : Deep Dive into Database 
Module 09 : Sub Query 
Module Date : 110323, Saturday
Watch Date : 28,29, 30/03/23, Tuesday + Wednesday, Thursday (5th + 6th + 7th Roja) 

*/


-- 300323, Thursday, 05.00 am, 7th Roja

-- VIDEO 9 - 4 : ADVANCED SUB QUERY 1 
-- USAGE OF ANY KEYWORD 
/*
QUESTION 05 : 
	Repoet all the employees who are not working in the IT_PROG department 
    and whose salary is less than at least one employee of IT_PROG. 
    
    It means that we need all the other employees other than IT_PROG and those who earn 
    less than the salary of any employee of IT_PROG, i.e there could be number of employees
    working in IT_PROG and we want if any other employee earns less than the salary of any 
    employee of IT_PROG, the return the details of the employee. 

APPROACH : 
	This a sub query problem. We just need the employees not working in the 
    IT_PROG department whose salary is less than the salary of any employee 
    working in IT_PROG. 
    
    So, we need to use the keyword ANY here as we can check the value of 
    main query with the all the values of the sub query, i.e with ANY, 
    the main query value will be comparisoned with all the values and if 
    the comparison is true, then the main query returns it. 
    
    Suppose a, b, c are IT_PROG and their salary is 1000, 1500, 2000, and the 
    main query value is 800. Now, this 800 will be comoarisoned with all the values 
    of IT_PROG and will check if 800 is smaller than any values of IT_PROG. 
    The answer is false. Again, suppose the main query value is 1400, now again 
    it will check whether 1400 is less than (as we want less value, defined in question)
    the values of IT_PROG, and it is true, so the detailes of this record will be returned. 


*/

SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees
WHERE job_id <> "IT_PROG" AND salary >  ANY   -- we also can use != instead of <>
									   (SELECT salary 
										FROM employees
                                        WHERE job_id = "IT_PROG");



SELECT * 
FROM employees;