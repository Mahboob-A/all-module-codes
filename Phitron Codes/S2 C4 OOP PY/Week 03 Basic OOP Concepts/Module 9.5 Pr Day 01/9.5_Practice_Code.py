"""  
Module 09.5 Practice Day 01 
Mod date: 171022, Practice Date: 181022, Tuesday, 9.30 pm 

"""
# question 
"""  
2. Check the type of the object school_bus
3. Check if School_bus is also an instance of the Vehicle class.
4. Define a property that must have the same value for every class instance (object)
5. Write getter and setter methods for Vehicle class.
6. Add an __str__ method to the code.
7. Learn about inheritance and classifications of inheritance, try to implement those in your code.
8. Encapsulate your previous code, any code you have written before. Reach us if you face any errors.
"""


from traceback import print_tb


class Vehicle:
        minimum_wheel = 4 
        def __init__(self, name, mileage, capacity):
                self.name = name
                self.mileage = mileage
                self.capacity = capacity


class Bus(Vehicle):
        pass

class Car(Vehicle):
        pass 

class Bike:
        pass 


school_bus = Bus("School Volvo", 12, 50)
print(school_bus.minimum_wheel)

sedan = Car('Magnum', 16, 6)
print(sedan.minimum_wheel)

honda = Bike 

print(type(school_bus))
print(school_bus.name)
print(school_bus.mileage)
print(school_bus.capacity) 

# we can use isinstance(object_name, class_name) to know if  an object is an instance of that class 
print(isinstance(school_bus, Vehicle))

# we can check if an instance falls under one of many calsses
# we then need to put all the classes into a tuple and if the object falls under any of the class, we get True else false 
print(isinstance(school_bus, (Car, Bus, Vehicle)))

# this one will return false as honda object do not fall under any of the specified classes in the tuple 
print(isinstance(honda, (Car, Bus, Vehicle)))
