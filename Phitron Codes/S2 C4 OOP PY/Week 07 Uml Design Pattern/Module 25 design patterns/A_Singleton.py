"""  
Week 07, mod date: 131122, Sunday | Watch date: 141122, Monday, 07.00 pm 
Module 25 | Mod day 02  
Design Pattern 
A_Singleton design patter
In singleton design pattern, we can instantiate only a single class instance. 
"""
# singleton part 1 

class Singleton:
        # taking a calss attribute 
        __instance = None 
        def __init__(self) -> None:
                if Singleton.__instance is None: 
                        Singleton.__instance = self    # storing the object to class attribute 
                else:
                        raise Exception("This is Singleton class. Instance already instantiated.")

        # now we can call this static method any number of time to get the instance
        # this will always return the same instance 
        # without calling the method, if we try to instantiate the class for second time, it will raise exception  
        @staticmethod
        def get_instance():  
                print(f"Method calling {__name__}")
                if Singleton.__instance is None:
                        Singleton()
                return Singleton.__instance
        
        def printSomething(self):
                print("Something is printed from Class Singleton")


first_obj = Singleton()

first_obj.get_instance()

# second_obj = Singleton()   # can not instantiate any more object 

# but we can call the instance from anywhere any number of time even formally creating any instance 
# as if we just call the static method, if the class attribute is None, then it would first instantiate then return it.
# all of them are same instance 

second = Singleton.get_instance()   
third = Singleton.get_instance()

print(first_obj)
print(second)
print(third)

# as we have received the instance in our variable, now we can work just like mormal instance with these : 
# as these are now that instance's pointing variable
second.printSomething()
third.printSomething()

