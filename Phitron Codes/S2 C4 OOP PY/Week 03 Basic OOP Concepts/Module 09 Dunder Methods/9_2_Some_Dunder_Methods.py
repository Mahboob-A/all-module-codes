"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 07.30 am 
9_2 : Some Dunder Methods 
"""


class Person: 
        '''
        Dunder methods are special  methods that helps us to process operation between two or more object instances or the consequence of single instance's result when we call them. 
        We can perfrom mathemetical and comparison operation and also almost all the operations that we can do to the built in instances.  
        '''
        # money and height here are default value and optional parameter, if not given, this default value will be assigned 
        def __init__(self, name, age, money = 100, height = 65):   
                self.name = name 
                self.age = age 
                self.money = money
                self.height = height 
                 

        def __add__(self, other): #a dunder or magic method to perform additon operation of two instances, we can add name height here anything we want 
                return self.name + other.name 

        # len magic method 
        def __len__(self):
                return self.height

        # this call method's job is when we just call an instance, it tells what to do 
        def __call__(self):
                return f'This is {self.name}, age is {self.age}, money is {self.money} and height is {self.height}.__call__'

        # when we just print an instance, it tells what to do 
        def __repr__(self):
                return f'This is {self.name}, age is {self.age}, money is {self.money} and height is {self.height}. __repr__'

        # this is one of the comparison magic method to check equality between two instances 
        def __eq__(self, other):
                return self.height == other.height 

# print(p1.__doc__)   #printing the doc string

kamal = Person('kamal', 20)
jamal = Person('jamal', 22, 200, 70)

print('__add__ magic method will be working here: ', kamal + jamal)

# __len__ magic method is working here 
print('Using len method', len(jamal))
print()
# __call__ method 
print('Calling the object directly __call__ method is working', kamal())

# __eq__ method to check equality 
print('Checking if two objects height is sam using __eq__ ', kamal == jamal)

# __representation__ i.r __repr__ method 
print(jamal)
print(kamal)