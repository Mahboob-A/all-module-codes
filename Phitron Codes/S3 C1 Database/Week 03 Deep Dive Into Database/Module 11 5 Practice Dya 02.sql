


/*
Week 03 : Deep Dive into Database 
Module 11.5 : Practice Day 02
Module Date : 140323, Tuesday
Watch Date : 050423,Wednesday, 13'th Roja, 05.00 am 
(Today : 050423, Wednesday, 05.20 am)

*/

/*
Questions
Describe the MySQL set operations with examples
UNION
UNION ALL
MINUS
What is the feature of ON DELETE CASCADE? Explain with example.
Write a TRIGGER to insert in Employees.NAME 
(Table name Employees, Column name NAME) in UPPERCASE
*/


USE hr;

CREATE TRIGGER make_uppercase 
BEFORE INSERT ON employees
	BEGIN
		SET NEW.emp_name = UPPER(NEW.emp_name)
	END