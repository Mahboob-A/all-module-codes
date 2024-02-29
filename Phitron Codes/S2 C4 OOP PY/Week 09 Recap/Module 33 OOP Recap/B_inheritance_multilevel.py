"""  
Week 09: Recap week 
Module 33: OOP Recap
33-2_ Inheritance (Single, Multiple, Multilevel)
Mod date: 291122, Tuesday
Watch date: 041222, Sunday, 03.00 pm 
"""
# multilevel inheritance 
class Grandparent:
        def __init__(self) -> None:
                self.name = "I am grandparent"
        
class Parent(Grandparent):
        def __init__(self) -> None:
                super().__init__()   # if this is given below self.name, then name would access the Grandparent's name 
                self.name = "I am parent"

class Child(Parent):
        def __init__(self) -> None:
                super().__init__()   # if this is given below self.name, then name would access Parent's name 
                self.name = "I am child"

c = Child()
print(c.name)        
