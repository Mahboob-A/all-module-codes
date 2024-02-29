"""  
Week 09: Recap week 
Module 33: OOP Recap
Mod 33-1 : 33-1_ Class method, Static method, Abstract class
Mod date: 291122, Tuesday
Watch date: 011222, Thursday, 03.30 pm 
"""
# part 2 | abstract class and abstract method 
# abstract class is a blueprint for class. 
# abstract class e je sob method gulo @abstractmethod kora thakbe, 
# abstract class ke inherit kora sob class e oi sob abstract method gulo over ride ba omplement korte hobe.

# We can not instantiate an abstract class 

# We use abstract class when we need to implement same method to many differnt classes. When we want 
# to have different classes must have some specified methods.

from abc import ABC, abstractmethod
class Animal(ABC):

        # we only need to implement this abstract method because we have specified that this one must be 
        # implemented using the decorator @abstractmethod that this mehtod is a abstract method
        @abstractmethod
        def make_sound(self):
              ...
        
        # we do not need to implement this method because we do not have specified that this is not abstract method 
        def just_a_useless_method(self):
                ... 

class Lion(Animal):

        def make_sound(self):
                #  | we call super of abstract class only when the job of abstract method is same for each class that inherit abstract class 
                # return super().make_sound()  
                print("Halum halum!")

        def tell_name(self):
                print("I am a Lion")

class Duck(Animal):

        def make_sound(self):
                print("Kuak kuak!")
        
        def tell_name(self):
            print("I am a Duck")

        def tell_age(self): # we can have different methods, but we must implement the same abstract method 
                ... 

class Dove(Animal):
        def make_sound(self):
               print("Kich kich!")

        def tell_name(self):
                print("I am a Dove")        

        def useless_method(self):
                ...

if __name__ == '__main__':
        lion = Lion()
        duck = Duck()
        dove = Dove()

        lst =[lion, duck, dove]
        # as we know that all the object has make_sound() method, all the obj will call its respective methods. 
        for obj in lst:
                obj.make_sound()























