# week 04 : OOP Principles
# Module 13: Principles of OOP
# Mod Date: 23102, Sunday, Watch Date: 241022, + Tuesday
# 13-3: abstract_property_and_interface
# 07.00 am 

# week 04 : OOP Principles
# Module 13: Principles of OOP
# Mod Date: 23102, Sunday, Watch Date: 241022, + Tuesday
# 13-2: OOP Principle: Abstract Class
# 09.30 pm

# to make any base class as abstruct class, we need to import abc i.e abstract base method and abstractmethod
from abc import ABC,  abstractmethod
from traceback import print_tb


# @abstractclassmethod
class Animal:  # We have to receive ABC to the parameter of the base class
       
        # @property 
        @abstractmethod   # we have to decorate like this which method we want to make abstract i.e forcefully implement this method to all the class that inherit Animal class
        def eat(self):
               print("{} eating.".format(self))

        @abstractmethod
        def name(self):
                pass 

        def sleep(self):  # as these methods have not defined as abstractmethod, these are now normal method, we can directly access them
               print("{} sleeping.".format(self))

        def walk(self):
               print("{} walking".format(self))


class Monkey(Animal):
        
        def __init__(self, name):
                self.__name = name 

        @property 
        def sing(self):
               print("{} singing".format(self.__name))

        @property 
        def name(self):
                return self.__name 

        @name.setter
        def name(self, name):
                self.__name = name 

        def eat(self):  # if we do not implement this eat method in moneky child class, then we can not instantiate any instances of monkey classs
               print("""I have to define eat method here because Animal is an abstract class and it has defined eat() 
               as the abstruct method.\nSo I must Have to define it in my class.\nWithout doing this 
               I can not inherit Animal class And this is the concept of abstruct class.""")


chimp = Monkey('Chimp')

chimp.eat() # abstract class 

print(chimp.name)   # name property getter 
chimp.name = 'kul chimp'  # setter 
print(chimp.name)

chimp.sing   # getter (property)
chimp.sing
