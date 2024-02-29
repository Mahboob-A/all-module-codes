

"""
Module Date : 210323, Tuesday.
Watch Date : 090423, Sunday, 17'th Roja, 03.10 pm
No Current Module. Main Course Ended On : 250323, Saturday. 

Module 15 : 15 - 03 : Create Table Using Python

"""


import mysql.connector

mydb = mysql.connector.connect(

        host = "localhost",
        user = "root",
        passwd = "learnlearn",
        database = "phitron_db_with_python",

)


mycursor = mydb.cursor()

#  method one : (in this method, we can not write in multiple line -- using a single double quotation)
sql_command = "CREATE TABLE Student (Roll INT, First_name VARCHAR(30), Last_name VARCHAR(30), Contact_no VARCHAR(15));"

# method two : (in this method we can write in multiple line -- using three double quotation)
# using three double quotation, we can write sql command like in workbench 

sql_command_2 =           """

                                        CREATE TABLE Result(
                                                
                                                Roll INT, 
                                                Name VARCHAR (20),
                                                Class CHAR (5)
                                        );

                                        """                     

mycursor.execute(sql_command_2)