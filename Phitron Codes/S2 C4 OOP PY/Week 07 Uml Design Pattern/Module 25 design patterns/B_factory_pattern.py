"""  
Week 07, mod date: 131122, Sunday | Watch date: 141122, Monday, 07.00 pm 
Module 25 | Mod day 02  
Design Pattern 
B_Factory pattern 
"""
# factory method helps to create objects depending upon user input 

class Bike:
        def __init__(self, driver, rate) -> None:
                self.driver = driver
                self.rate = rate
        
        def get_fare(self, distance):
                return distance * self.rate


class Car:
        def __init__(self, driver, rate) -> None:
                self.driver = driver
                self.rate = rate
        
        def get_fare(self, distance):
                return distance * self.rate


class CNG:
        def __init__(self, driver, rate) -> None:
                self.driver = driver
                self.rate = rate
        
        def get_fare(self, distance):
                return distance * self.rate


def factory_method(vehicle_type):
        vehicle = {'bike' : Bike, 'car' : Car, 'cng' : CNG}
        return vehicle[vehicle_type]()


# b1 = Bike('Bike Rider', 10)
# c1 = Car('Car Driver', 20)
# g1 = CNG('Cng driver', 5)

# dones not work, arguments aint passed 
cng = factory_method('cng')
print(cng)

c1 = cng('ok', 10)

print(c1.get_fare(10))



