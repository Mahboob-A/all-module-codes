"""  
Module date: 011122, Tuesday Watch date: 021122, Wednesday, 07.10 pm 
Week 05: Urban Rides 
Lab Class 05 
18-2 Dynamic Attributes
"""
"""  
we can create attributes dynamically outside of the class using the object and the attribute will be exclusive 
to that object only
"""

from traceback import print_tb


class Item:
        all_objects = []
        def __init__(self, name, price) -> None:
                self.name = name 
                self.__price = price
                self.all_objects.append(self) 

        def __repr__(self) -> str:
                return f"{self.name} {self.price}"

item1 = Item('Plate', 150)

item2 = Item('Bowl', 100)

print("Before dynamic attribute:  ")
# print(Item.all_objects)
print(item1.__dict__)
print(item2.__dict__)
# print(Item.__dict__)

print("\nAfter dynamic attribute:  ")
item1.discount = 10   # adding an exclusive dynamic attribute to item1 object of Item class  
# print(Item.all_objects)
print(item1.__dict__)
print(item2.__dict__)


print("\nAdding a private dynamic attribute:  ")
item2._Item__Sale = "50%"
print(item1.__dict__)
print(item2.__dict__)

print("\nAccessing the both dynamic attribute:  ")
print(item1.discount)  #public dynamic attribute of item1 object 
print(item2._Item__Sale)  #private dynamic attribute of object item2 

x = item2._Item__Sale  # storing the private value to other variable 
print(" item2._Item__Sale ' s value stored in x variable:  ", x)

print("\nChanging the value of existing attribute dynamically:  ")
item1.name = 'Big plate'
item1.discount = 20 
item2._Item__Sale = "60%"
item2._Item__price = 150 
print(item1.__dict__)
print(item2.__dict__)
