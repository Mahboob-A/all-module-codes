

/*
Week 03 : Deep Dive into Database 
Module 10 : Join
Module Date : 120323, Sunday
Watch Date : 310323, Friday, 08'th Roja + 010423, Saturday, 09'th Roja, 05.00 am 
(Today : 010423, Saturday)

Watch Time : from 09.00 am to 09.30 am 


*/

SELECT *
FROM employees;


-- VIDEO 10 - 4 :: SELF JOIN 
/*
SELF JOIN is a typical JOIN when we use the same table to JOIN. 
While using SELF JOIN, we only can use ON, but we can not use USING 
as USING does not required to specify to which key is to be matching with 
which key while in SELF JOIN, we need to specify with which key we are matching 
with, so we need to use ON. 

*/

-- here, we are fetching the employee name and their manager name. 
SELECT e.first_name AS Employee, m.first_name AS Manager
FROM employees e JOIN employees m ON(e.manager_id = m.employee_id);

-- same thing 

SELECT e1.first_name AS Employee, e2.first_name AS Manager
FROM employees e1 JOIN employees e2 ON(e1.manager_id = e2.employee_id);