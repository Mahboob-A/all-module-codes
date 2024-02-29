

"""
Module Date : 210323, Tuesday.
Watch Date : 090423, Sunday, 17'th Roja, 03.10 pm
No Current Module. Main Course Ended On : 250323, Saturday. 

Module 15 : 15 - 04 : INSERT INTO data into table 

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

                                        INSERT INTO Student(roll, first_name, last_name, contact_no)
                                        -- VALUES(107, "Mahboob", "Alam", "+917908184346");
                                        VALUES(132, "Rbl", "khan", "+918513998991");
                                        

                                        """

# inside the sql query we can use comment using # hash and -- two dash. but the comment must 
# not be in the last line 

mycursor.execute(sql_command)
mydb.commit()   # need to commit after insertion or deletion, otherwise db would not be updated. 