


/*
Week 03 : Deep Dive into Database 
Module 10.5 : PRACTICE DAY 01 
Module Date : 130323, Monday
Watch Date : 310323, Friday, 08'th Roja + 010423, Saturday, 09'th Roja, 05.00 am 
(Today : 010423, Saturday)

Watch Time : from 09.30 am to 09.30 am 

link: https://docs.google.com/document/d/1udMZkf_Xm0HKIgyST0Vf_-3ChpURFqcbYXkZQ_qrzR8/edit

*/



/*
PRACTICE DAY 01 : QUESTIONS : 
Questions
Explain with example
DROP table
DELETE table
TRUNCATE table
In HR database, what is the department name of the employee whose last name is ‘King’
Can we do join operation using WHERE clause?
While doing self join, what should we use? USING or ON? Explain why?


*/

-- In HR database, what is the department name of the employee whose last name is ‘King’
SELECT e.first_name, e.last_name, e.job_id, e.salary, d.department_id, d.department_name
FROM employees e JOIN departments d 
ON e.department_id = d.department_id
WHERE e.last_name = "king";

SELECT * 
FROM employees;