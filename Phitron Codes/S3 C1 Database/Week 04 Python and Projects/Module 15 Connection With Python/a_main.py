
"""
Module Date : 210323, Tuesday.
Watch Date : 090423, Sunday, 03.00 pm, 17th Roja. 
No Current Module. Main Course Ended On : 250323, Saturday. 

Module 15 : 15 - 01 : Python - MySQL Setup 

"""


import mysql.connector

# STEP 01 : 
# it creates a conncetion with my database 
mydb = mysql.connector.connect(
        
        host = "localhost", 
        user = "root", 
        passwd = "learnlearn",

)

# print(mydb)

# STEP 02: 
# Create Database - follow create_db page  