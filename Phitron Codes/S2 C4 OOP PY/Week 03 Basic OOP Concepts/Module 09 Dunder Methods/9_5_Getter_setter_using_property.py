"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 03.00  pm
9-5: Getter setter using property decorator 
"""

"""  
The main concept about property is that we can access the class or instance attributes form outside the function 
and we can print or perform other operation. For example, from the below code, we can print(self.first) 
outside the class and it will print whatever was passed.  


"""



class User1:
        def __init__(self, first, last):
                self.first = first 
                self.last = last 
                self.email = f'{self.first}.{self.last}@user.com' 

        def get_full_name(self):
                return f'{self.first} {self.last}'



u1 = User1('Abul', 'Kalam')


print(u1.first)  # I am printing the value using the instance attribute 
print(u1.last)
print(u1.get_full_name())  # now I am priting the full name using the class method 

# here I can not use the u1.get_full_name as a attribute. 
# And at this point the uses of @property comes
# when we use @property before a class method, then we can call the class method as an attibute 
# see the 2nd class 

print('\nPrinting the second class\n')

class User2: 
        def __init__(self, first, last):
                self.first = first
                self.last = last
                self.email = f'{self.first}.{self.last}@user.com'

        @property
        def get_full_name(self):
                return f'{self.first} {self.last}'

        def get_email(self):
               return self.email 

u2 = User2('Abul', 'Jamal')
print(u2.first)
print(u2.last)
print(u2.get_full_name)  # now see, although the get_full_name is a method of the class, we can call it just like an attribute 

print(u2.get_email())  # but remrember, we can only that method as attribute outside the function that has @property and if we want to call multiple method as attribute, we have to put @property to each method we want to call like attribbute 
# As in the class, the get_email() method has no @property defined, we cannot call it like an attribute. 

print('\nPrinting the third class\n')

"""  
we also can use setter and deleter to a method. A method that has @property defined, we can make a setter and deleter to it. Setter is we can set value to it and deleter it we can delete specified value from the method. See 3rd example 
"""

class User3:
        def __init__(self, first, last):
                self.first = first
                self.last = last
                self.email = f'{self.first}.{self.last}@user.com'

        @property
        def get_full_name(self):
               return f'{self.first} {self.last}'

        # making a setter to the decorator property method so that we can dirtectly assign value to the method 
        @get_full_name.setter
        def get_full_name(self, value):

                first, last = value.split(" ")
                self.first = first 
                self.last = last   
                self.email = f'{self.first}.{self.last}@user.com'

                # self.first = value.split(" ")[0]
                # self.last = value.split(" ")[1]
                

        """  
        we also can delete the values of a method using deleter. see below example 
        """
        @get_full_name.deleter
        def get_full_name(self):
                del self.first 
                del self.last 


        @property 
        def get_email(self):
               return self.email


u3 = User3('Abul', 'kamal')
print(u3.get_full_name)
print(u3.get_email)



print()
# del u3.get_full_name why when running from here, self.first and last is not deleted but from below where it is now placed is deleting properly 
u3.get_full_name = 'Kemal Nihan'
print(u3.get_full_name)
del u3.get_full_name
print(u3.first)
print(u3.last)

print(u3.get_email)

