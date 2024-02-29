


/*
Week 03 : Deep Dive into Database 
Module 11 : SET OPERATIONS 
Module Date : 140323, TUesday
Watch Date : 020423,Sunday, 10'th Roja + 030423, Monday, 11'th Roja, 05.00 am 
(Today : 030423, Monday)

*/

-- VIDEO 11 - 5 : TRIGGERS 
-- Watch Time : from 09.00 am to 10.00 am 

/*
    SQL triggers are special types of stored procedures that are 
    automatically executed in response to certain events occurring within a database. 
    Triggers are used to enforce business rules, implement complex data validation 
    logic, maintain data integrity, and more. They are often used in combination with 
    INSERT, UPDATE, and DELETE statements to ensure that data modifications comply 
    with the desired rules and constraints.

*/


-- To list all the triggers in a MySQL database, use this command:
SHOW triggers;


-- EXAMPLE 1: 
-- Bank customer gets an update that his name is corrected successfully:

CREATE TRIGGER after_customer_name_update
AFTER UPDATE ON BankCustomer
FOR EACH ROW
BEGIN
    IF NEW.Name <> OLD.Name THEN
        INSERT INTO CustomerUpdateLog(Customer_id, Field, OldValue, NewValue, UpdateDate)
        VALUES (NEW.Customer_id, 'Name', OLD.Name, NEW.Name, NOW());
    END IF;
END;



-- EXAMPLE 2:

-- Salary column in the database is changed, so it gives a trigger:

CREATE TRIGGER after_salary_update
AFTER UPDATE ON Employee
FOR EACH ROW
BEGIN
    IF NEW.Salary <> OLD.Salary THEN
        INSERT INTO SalaryChangeLog(Employee_id, OldSalary, NewSalary, ChangeDate)
        VALUES (NEW.Employee_id, OLD.Salary, NEW.Salary, NOW());
    END IF;
END; 

-- EXAMPLE 2:
-- a trigger that capitalizes user input:

CREATE TRIGGER capitalize_input
BEFORE INSERT ON my_table
FOR EACH ROW
BEGIN
    SET NEW.column_name = UPPER(NEW.column_name);
END;






























