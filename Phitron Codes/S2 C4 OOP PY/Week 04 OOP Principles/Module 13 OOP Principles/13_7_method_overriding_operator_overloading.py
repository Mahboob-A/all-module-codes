# Module 13: Principles of OOP
# Mod Date: 23102, Sunday, Watch Date: 241022, + Tuesday
# 13-7: method_overriding_operator_overloading
# 07.45pm


# print(max([1, 2, 3, 4, 5], [34, 6, 567, 3, 345, 345], [3, 335, 23, 345, 3,535, 3134523]))

# function overloading 

from unittest import mock


def add(num1, num2, num3=0, num4=0):  # functon overloading 
        return num1+num2+num3+num4 

print(add(10, 12))


def multi(*args, **kwargs): # this type of function is also function overloading 
        pass 

# operator overloading 

print(10+20) # + behaves different in different types of assignment this is operator overloading 
print('A' + 'Z')
print(max(12, 22, 345 ))


class Account:
        def __init__(self, name, money) -> None:
                self.name = name 
                self.money = money 

        def __add__(self, other):  # operator overloading using dunder __add__ to define what to act when two obj are added 
                return self.money + other.money 

        def __eq__(self, o: object) -> bool:
                return self.money == o.money                 


user1 = Account("Kamal", 1000)
user2 = Account("Jamal", 2000)

print(user1 + user2)  # this is also operator overloading 
print(user1 == user2)
