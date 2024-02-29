

"""
Module Date : 210323, Tuesday.
Watch Date : 090423, Sunday, 17'th Roja, 05.15 pm
No Current Module. Main Course Ended On : 250323, Saturday. 

Module 15 : 15 - 06 : Update Statement Using Python 

"""


import mysql.connector

mydb = mysql.connector.connect(

    host="localhost",
    user="root",
    passwd="learnlearn",
    database="phitron_db_with_python",

)


mycursor = mydb.cursor()

# method two : (in this method we can write in multiple line -- using three double quotation)
# using three double quotation, we can write sql command like in workbench

sql_command =              """

                                        UPDATE Student
                                        SET first_name = "Mahboob", last_name = "I am Alam"
                                        WHERE Roll = 107;

                                        """

mycursor.execute(sql_command)
mydb.commit() # as I am making changes in the database, so database commit is needed.  

# to get the data in a txt file - run the command like this :
# py filename.py > data.txt


