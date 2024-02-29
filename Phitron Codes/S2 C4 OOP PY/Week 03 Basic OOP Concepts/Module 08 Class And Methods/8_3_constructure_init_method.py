"""  
Week 03: Basics of OOP Concepts 
Module 08: Class And Methods 
08 - 3 : Class constructure == __inti__ method 
161022, Sunday, 11.30 am 

"""

class Phone:

        manufactured_in = 'India'

        brand = 'no brand'
        color = 'no color'
        price = 'no price'
        ram = 'no ram'

        # does self in init creates a new variable? 

        # what is the result when I have already initialized the init parameter's variables and overriding them
        # why then no variable is created , why the are only getting the class attributes 

        # how is this different than cpp as we did not need to dma each time rather we could call constructure and 
        # for each obj, all the new variables are created in stack 

        # what's the scenerio behind self.parameter while no such parameter already created 
        def __init__(self, brand, price, color, ram):
                # self.brand = brand
                # self.price = price
                self.color = color
                self.ram = ram


my_phone = Phone('realme', 10000, 'black', 4)

print(my_phone.brand, my_phone.price, my_phone.color, my_phone.ram, my_phone.manufactured_in)

another_phone = Phone('samsung', 15000, 'white', 6)
print(another_phone.brand, another_phone.price, another_phone.color, another_phone.ram, another_phone.manufactured_in)


# correct way declaration below #
"""
class Phone:

    manufactured_in = 'India'

    def __init__(self, brand, price, color, ram):
        self.brand = brand
        self.price = price
        self.color = color
        self.ram = ram


my_phone = Phone('realme', 10000, 'black', 4)

print(my_phone.brand, my_phone.price, my_phone.color,
      my_phone.ram, my_phone.manufactured_in)

another_phone = Phone('samsung', 15000, 'white', 6)
print(another_phone.brand, another_phone.price, another_phone.color,
      another_phone.ram, another_phone.manufactured_in)
"""
