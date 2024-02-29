

/*
Week 03 : Deep Dive into Database 
Module 09 : Sub Query 
Module Date : 110323, Saturday
Watch Date : 28,29, 30/03/23, Tuesday + Wednesday, Thursday (5th + 6th + 7th Roja) 

*/


-- 300323, Thursday, 08.00 am, 7th Roja

-- VIDEO 9 - 5 : ADVANCED SUB QUERY 2
-- Co-RElated sub query 


/*
QUESTION 06 : 
	In Co-Related sub-query, we use row references of the main query in the sub-query. 
    Suppose, we need to retrive those employees whose salary is higher than at least three 
    other employees. 
    
APPROACH : 
	We need to find those employees who earn more than any other three employees. 
    So, here we are using the same salary column in the main query and also in the sub-query. 
    In the main query, we need the salary informations of those employees who earn more than 
    any other three employees. So, in the sub-query also, we need to use the salary column in 
    the sub-query also. 
    
    In this case, we need to rename the table with two different names to compare 
    the same table's column in main query and in sub-query. 
    
    As we are taking reference of main query column in the sub-query, this is why 
    this is called co-related sub-query. 
    

*/

SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees E1
WHERE 3 <= (SELECT COUNT(*)
			FROM employees E2
            WHERE E1.salary > E2.salary);


-- we are counting in the sub-query the number of employees whose salary is less 
-- and when this count is at 3, we are returning this value. 
-- we also renaming the employee table with E1 and E2 to check the same column 
-- at the same time with its other vlaues. 


-- NOT EXIST Keyword 
/*
QUESTION 07 : 
	Find the maximum salary of each department of all employees. 
    
APPROACH : 
	This is also a sub-query problme. We can use NOT EXIST keyword 
    here. NOT EXIST returns the value which condition's result is false. 
    

*/

SELECT first_name AS Name, last_name AS Surname, job_id, salary
FROM employees E1 
WHERE NOT EXISTS (SELECT job_id, salary
				 FROM employees E2 
                 WHERE E2.job_id = E1.job_id 
				 AND E2.salary > E1.salary)
				 ORDER BY E1.salary DESC;
                 
-- We want this case that the job_id of two employee is same and
-- the salary of 2nd employee is > salary of 1st employee => this condition is not true,
-- we want these type of situation / data. If this condition is true, 
-- then it means in the same dept, there is a 2nd employee whose salary is greater than 
-- the salary of 1st employee. Then the 1st employee can not have the maximum 
-- salary in the dept, right? Yes! this is why we only take those 1st employees
-- for whose this WHERE condition is false, i.e there are no 2nd employee whose salary is 
-- greater than the 1st employee, thus he is the employee who earns the maximum salary. 