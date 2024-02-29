"""  
Module date: 191022, Wednesday
Practice Date: 201022, Thursday 
Time: 11.30 pm
"""

class Employee:
    """ A doc """

    def __init__(self, emp_name, salary, email_address):
        self.emp_name = emp_name
        self.salary = salary
        self.email_address = email_address


emp = Employee('User', 1000, 'user@gmail.com')
emp_2 = Employee('User_2', 2000, 'user_2@gmail.com')

print(dir(emp))   #namespace of the instance 
