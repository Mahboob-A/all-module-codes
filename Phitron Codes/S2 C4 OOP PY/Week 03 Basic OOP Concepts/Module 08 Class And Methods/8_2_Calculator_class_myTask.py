
"""  
Week 03: Basics of OOP Concepts 
Module 08: Class And Methods 
08 - 2 : Class And Methods : My Task: Make a calculator class 
161022, Sunday, 11.00 am 

"""

class Calc:
        name = None

        def add(self, a, b):
                return a+b 

        def substract(self, a, b):
                return a-b 

        def devide(self, a, b):
                return a/b 

        def multiply(self, a, b):
                return a*b 
        


my_cal = Calc()
res = my_cal.substract(10, 2)
print(res)
