"""  
Week 09: Recap week 
Module 33: OOP Recap
33-2_ Inheritance (Single, Multiple, Multilevel)
Mod date: 291122, Tuesday
Watch date: 041222, Sunday, 11.30 am 
"""
# single inheritance 
# when we use single inheritance, and when we want to access all the attributes of parent class from 
# the child class instance,
# we need to give access. We can give access using two ways: 
        # 1. Parent.__init__(self)
        # 2. super()__init__()

class Parent:
        def __init__(self) -> None:
                self.name2 = "I am parent"
        
        def say(self):
                print("Just printing this line from parent say() method")
        
class Child(Parent):
        def __init__(self) -> None:
                # we have to give access to child class to access the attributes of the parent class usign any of the below ways
                # failing so, we can not access the attributes of parent class even after we have inherited a class 
                # ALthough we can access the methods of the parent class even if we do not given the below access. 
                # We need it only to reinitialize the same parameter, or if no parameter is passed, 
                # then we need this to have to access the parent's 
                # attributes, but we can always access the parent methods.
                super().__init__()
                # Parent.__init__(self)
                self.name2 = "I am child"
                # super().__init__()  # if uncommented, and upper super commented, then we will have 
                # access of parent's name2 variable, not of child's name2 variable.
        
c = Child()
# print(c.name1)  # can not access parent's attributes if the access is not given or parent is not called 
# c.say()
print(c.name2)
