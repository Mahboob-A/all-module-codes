

"""
Module Date : 210323, Tuesday.
Watch Date : 090423, Sunday, 17'th Roja, 03.10 pm
No Current Module. Main Course Ended On : 250323, Saturday. 

Module 15 : 15 - 02 : Create Database Using Python

"""



import mysql.connector

mydb = mysql.connector.connect(
    
        host = "localhost",
        user = "root",
        passwd = "learnlearn"

)

# print(mydb)

# create a database 

"""
#  with breaking the sql query 

mycursor = mydb.coursor()

db_name = "Phitron_DB_with_python"
sql_query = "CREATE DATABASE " + db_name

mycursor.execute(sql_query)

"""

# directly executing the sql command 

mycursor = mydb.cursor()
mycursor.execute("CREATE DATABASE Phitron_DB_WIth_Python")


