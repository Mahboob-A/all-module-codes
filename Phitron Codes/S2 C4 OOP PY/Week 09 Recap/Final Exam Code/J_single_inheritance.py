"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 071222, Wednesday, 11.00 am 

Question 10:  

Explain with examples - Single Inheritance, Multiple Inheritance and Multilevel inheritance 

Single Inheritance: 
"""

# main parent class of animal. It has the necessary elements of our blueprint 
class Animal:
        def __init__(self, type, name, age, isCarnivorous) -> None:
                self.type = type 
                self.name = name 
                self.age = age 
                self.isCarnivorous = isCarnivorous

        def show_details(self):
                print(f"Animal Type: {self.type} \t Name: {self.name} \t Age: {self.age} \t If Carnivorous: {self.isCarnivorous}")

# Inherited the parent class in our sub-class or child or derived class. It allows us to re-use the code of parent class
# without re-writing the same code maintaining the DRY principle. 

class Dog(Animal):
        def __init__(self, type, name, age, isCarnivorous) -> None:
                super().__init__(type, name, age, isCarnivorous)

class Lion(Animal):
        def __init__(self, type, name, age, isCarnivorous) -> None:
                super().__init__(type, name, age, isCarnivorous)


class Bird(Animal):
    def __init__(self, type, name, age, isCarnivorous) -> None:
        super().__init__(type, name, age, isCarnivorous)


class Cat(Animal):
    def __init_subclass__(cls) -> None:
        return super().__init_subclass__()

# both type of declaration is same 
# class Bird(Animal):
#         def __init_subclass__(cls) -> None:
#                 return super().__init_subclass__()




if __name__ == '__main__':
        # instance of Dog class  
        d = Dog('Dog', 'Spike', '10', True)
        d.show_details()

        # instance of Lion class 
        l = Lion('Lion', 'Alex', '12', True)
        l.show_details()

        # Instance of Bird class 
        b = Bird('Bird', 'Bob', '5', False)
        b.show_details()

        # Instance of Cat class 
        c = Cat('Cat', 'Tom', '7', True)
        c.show_details()