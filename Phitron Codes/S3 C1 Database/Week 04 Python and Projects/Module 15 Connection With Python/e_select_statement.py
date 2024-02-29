

"""
Module Date : 210323, Tuesday.
Watch Date : 090423, Sunday, 17'th Roja, 04.45 pm
No Current Module. Main Course Ended On : 250323, Saturday. 

Module 15 : 15 - 05 : Select Statement Using Python

"""


import mysql.connector

mydb = mysql.connector.connect(

    host="localhost",
    user="root",
    passwd="learnlearn",
    database="hr",

)


mycursor = mydb.cursor()

# method two : (in this method we can write in multiple line -- using three double quotation)
# using three double quotation, we can write sql command like in workbench

sql_command_2 =         """

                                        SELECT * 
                                        FROM Employees;

                                        """

mycursor.execute(sql_command_2)
# as this is a SELECT STATEMENT, we do not need to use database commit here 

# as we are suppose to get the data, as we are using SELECT statement, so 
# while in python, we need to use for loop and print the data. the data will be in a list 
# The data is returned in variable_name =  mycursor.fetchall() - in varialbe, all the data of SELECT statement is returned. 

# to get the data in a txt file - run the command like this : 
# py filename.py > text_file_name.txt 

mydata = mycursor.fetchall()

print(type(mydata))

for i in mydata: 
    print("\n")
    print(i)