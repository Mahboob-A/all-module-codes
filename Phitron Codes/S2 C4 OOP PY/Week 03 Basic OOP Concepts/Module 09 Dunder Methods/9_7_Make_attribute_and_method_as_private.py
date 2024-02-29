"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 06.30 pm 
9-7: Make attribute and method as restricted(not fully private)
"""
"""  
We can make an attribute or method of a class as restricted putting one underscrore before it 
and make it private putting two underscore before it. 

"""

class User:
        # here I am making the password and name as private  
        # Means that these can not be accessed outside the class directly 
        def __init__(self, name, password):
                self.__name = name 
                self.__password = password 

        def check_password(self, name, password):
                if self.__password == password and self.__name == name:
                        return 'Your password is correct'
                return 'Your password is wrong'
        
        # But we can access it inside the class 
        def get_password(self):
                return self.__password


u1 = User('Kamal', 'abcd')

# print(u1.__password) we can not print or access private attribute with instance 

res = u1.check_password('Kamal', 'abcd')
print(res)

print(u1.get_password())  # we can access it through getter method 