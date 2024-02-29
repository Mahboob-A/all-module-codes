


/*
Week 03 : Deep Dive into Database 
Module 11 : SET OPERATIONS 
Module Date : 140323, TUesday
Watch Date : 020423,Sunday, 10'th Roja + 030423, Monday, 11'th Roja, 05.00 am 
(Today : 030423, Monday)

*/


-- VIDEO 11 - 4 : ON DELETE CASCADE 
-- Watch Time : from 07.00 am to 9.00 am 
/*
INTRO : 
	IF WE NEED TO DELETE ALL THE ENTRIES OF A PRIMARY KEY FROM ALL THE TABLE 
    THIS PK IS REFERENCED TO, THEN WE NEED TO USE " ON DELETE CASCADE "
    FROM ALL THE TABLES. 
*/


CREATE DATABASE WeekThree;
USE weekthree;

DROP TABLE IF EXISTS Student;

CREATE TABLE Student (
	
    Roll INT PRIMARY KEY, 
    Name VARCHAR(20), 
    Age INT

);

INSERT INTO student
VALUES (1, "halim", 20), (2, "hakim", 18), (3, "rahim", 19);

INSERT INTO student
VALUES (4, "malim", 21), (5, "kalim", 18), (6, "lalim", 20);

SELECT * 
FROM student;


CREATE TABLE course (

	Course_id INT PRIMARY KEY, 
    Course_name VARCHAR(10)
    
);

INSERT INTO course(course_id, course_name)
VALUE (101, 'C'), (102, "C++"), (103, "DBMS"), (104, "ALGORITHM"), (105, "DSA");

SELECT * 
FROM course;


CREATE TABLE Enroll(
	
    Student_Roll INT, 
    Course_id INT, 
    Joining_date DATE, 
    
    PRIMARY KEY(Student_Roll, Course_id), 
    FOREIGN KEY (Student_Roll) REFERENCES Student(Roll) ON DELETE CASCADE, 
    FOREIGN KEY (Course_id) REFERENCES Course(Course_id) ON DELETE CASCADE
    -- student and course table theke kono entry delete korle 
    -- sei entry er correspondes Enroll tables er entry-o delete hoye jabe. 
);


INSERT INTO Enroll(Student_Roll, Course_id, Joining_date)
VALUES(1, 101, '2020-01-05'), 
	  (1, 102, '2020-05-06'),
      (3, 105, '2020-01-01'),
      (4, 104, '2021-08-02'),
      (5, 103, '2022-09-05');



SELECT * 
FROM Enroll;

-- joining without JOIN. 

SELECT student.Roll, student.Name, course.course_id, course.course_name, enroll.joining_date
FROM student, course, enroll
WHERE student.roll = enroll.student_roll AND enroll.course_id = course.course_id;

-- we can also use INNER JOIN term instead of only JOIN. Both are same. 
-- joining ENROLL with Student and Enroll with Course. 
SELECT student.Roll, student.Name, course.course_id, course.course_name, enroll.joining_date
FROM Enroll JOIN Student 
ON Enroll.Student_Roll = Student.Roll 
JOIN Course -- AGAIN JOINING WITH ENROLL
ON Enroll.Course_id = Course.Course_id;

-- :: ON DELETE CASCADE IN ACTION :: 

-- as I am deleting from Student, all the entry of this 
-- PK will also be deleted form other tables also. 
DELETE FROM student
WHERE Roll = 1;

-- 105 ai course je je student enroll koreche, tader entry enroll table 
-- theke delete hoye jabe. 
DELETE FROM Course
WHERE course_id = 105;

SELECT * 
FROM student;

SELECT * 
FROM course;

SELECT * 
FROM Enroll;









