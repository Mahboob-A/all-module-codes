# week 04 : OOP Principles 
# Module 13: Principles of OOP 
# Mod Date: 23102, Sunday, Watch Date: 241022, + Tuesday 
# 13-2: OOP Principle: Abstract Class
# 09.30 pm 

# to make any base class as abstruct class, we need to import abc i.e abstract base method and abstractmethod 
from abc import ABC,  abstractmethod 


# @abstractclassmethod
class Animal:  # We have to receive ABC to the parameter of the base class 
        
        @abstractmethod   # we have to decorate like this which method we want to make abstract i.e forcefully implement this method to all the class that inherit Animal class 
        def eat(self):
                print("{} eating.".format(self))

        def sleep(self):  # as these methods have not defined as abstractmethod, these are now normal method, we can directly access them 
                print("{} sleeping.".format(self))


        def walk(self):
                print("{} walking".format(self))


class Monkey(Animal):
        def sing(self):
                print("{} singing".format(self))

        def eat(self):  # if we do not implement this eat method in moneky child class, then we can not instantiate any instances of monkey classs 
                print("I have to define eat method here because Animal is an abstract class and it has defined eat() as the abstruct method.\nSo I must Have to define it in my class.\nWithout doing this I can not inherit Animal class And this is the concept of abstruct class.")

chimp = Monkey()

chimp.eat()
chimp.sing()
chimp.sing()

