# week 04 : OOP Principles
# Module 13: Principles of OOP
# Mod Date: 23102, Sunday, Watch Date: 241022, + Tuesday
# 13-5: is about encapsulation, public, protected, private 
# 13-6: Polimorphism 
# 07.00 pm 


from sunau import AUDIO_FILE_ENCODING_MULAW_8


class Animal:
        def __init__(self, name):
                self.name = name 

        def make_sound(self):
                print("Animal is making sound")

class Cat(Animal):
        def __init__(self, name):
                super().__init__(name)
        
        def make_sound(self):
                print("Meow Meow")


class Dog(Animal):
        def __init__(self, name):
                super().__init__(name)

        def make_sound(self):
                return super().make_sound()

        def make_sound(self):
                print("Wof Wof")

class Tiger(Animal):
        def __init__(self, name):
                super().__init__(name)

        
        def make_sound(self):
                return super().make_sound()
        
        @property
        def make_sound(self):
                print("Halum Halum")

class Panda(Animal):
        def __init__(self, name):
                super().__init__(name)

        def make_sound(self):
                return super().make_sound()

        def make_sound(self):
                print("Hummp Hummp")


class Bird(Animal):
        def __init__(self, name):
                super().__init__(name)

        def make_sound(self):
                return super().make_sound()

tom = Cat('Tom')
jack = Dog("Jack")
hero = Tiger("Hero")
po = Panda("Po")
mack = Bird("Mack")



tom.make_sound()
jack.make_sound()
hero.make_sound
po.make_sound()
mack.make_sound()

# a = []
# print(id(a))
# print(a)
# a = [1, 2, 3, 4, 5] + [12, 34, 56, 43]
# print(id(a))
# print(a)
# print(a)

"""  
We have same name make_sound method in the parent calss and also in all the sub-classes. But when we call 
the method using objects, the base class is being overridden, and the own class's method is being accessed.
This is methid overriding and polimorphism where we have same named method and each
method is doing seperate things.

While in the bird class, we do not have any class method, and here the object is calling it's parent class's method. 
"""