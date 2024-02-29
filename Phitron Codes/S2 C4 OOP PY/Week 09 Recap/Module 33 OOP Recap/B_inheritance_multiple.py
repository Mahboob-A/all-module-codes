"""  
Week 09: Recap week 
Module 33: OOP Recap
33-2_ Inheritance (Single, Multiple, Multilevel)
Mod date: 291122, Tuesday
Watch date: 041222, Sunday, 03.00 pm 
"""

# Multiple Inheritance 
# multiple inheritance means we can inherit more than one class, more likely two, into a class.
# For multiple inheritance, we have to call the parent calss using the parent class name form the child class to
# access their attributes from child class 
# 
# If the attributes name of all the classes are same, then the power goes to the last in the init of child class. 
# In the init of the child class, if we fristly have called the parent class, and then we init the child class, and then
# if we access the attribute, we will have the access to the child class'es attribute. But if we already done the init 
# of child class and at last call the parent class and then if all the attributes are same, from the instance of child class, 
# we will have access to the last called parent class in the init of child class, not of the child class itself. 


class Grandparent:
        def __init__(self) -> None:
                self.name = "I am Grandparent"

class Parent:
        def __init__(self) -> None:
                self.name = "I am parent" 

class Child(Parent, Grandparent):
        def __init__(self) -> None:
                # this type of init, where we init the child class first and then we call the parent class, 
                # and if the attributes name are same, then we can not access the attribute of child class
                # from an child class attribute, instead, this will give the attribute of the last parent class called, 
                # for this example, we will get the name attribute of Grandparent class if a Child class instance 
                # calls name attribute. 
                self.name = "I am Child"
                Parent.__init__(self)
                Grandparent.__init__(self)

                # this is preffered way of child class init, where we call the parents first, then we init the child. 
                # Parent.__init__(self)
                # Grandparent.__init__(self)
                # self.name = "I am Child"    # instead of initilizing the child class like above, 
                # we will have access to the name attribute of the child class in this init  
        
c = Child()
print(c.name)