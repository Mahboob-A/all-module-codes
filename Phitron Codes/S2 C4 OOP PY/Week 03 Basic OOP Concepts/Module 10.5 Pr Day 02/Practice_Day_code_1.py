"""  
Module date: 191022, Wednesday
Practice Date: 201022, Thursday 
Time: 10.30 pm
"""


class Employee:
    """ A doc """

    def __init__(self, emp_name, salary, email_address):
        self.emp_name = emp_name
        self.salary = salary
        self.email_address = email_address


emp = Employee('User', 1000, 'user@gmail.com')
emp_2 = Employee('User_2', 2000, 'user_2@gmail.com')

print(emp.emp_name)

print(type(emp))
print()
print(vars(emp))  # dict attribute of instance 
print(emp.__dict__, "\n")

# # print()
# print(vars(emp_2))
# print(emp_2.__dict__)

print()
print(Employee.__dict__)   
print(emp.__module__)
print(Employee.__module__)  #module attribute of instance 

print("\nLocals: ", locals())  


# class Employee:
#     def __init__(self):
#         pass


# emp = Employee()
# emp_2 = Employee()

# print(type(emp))
# print()
# print(vars(emp))
# print(emp.__dict__, "\n")

# # print()
# print(vars(emp_2))
# print(emp_2.__dict__)
