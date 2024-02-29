"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 071222, Wednesday, 11.00 am 

Question 10:  

Explain with examples - Single Inheritance, Multiple Inheritance and Multilevel inheritance 
Multilevel inheritance: 
"""

# base class parent calss 
class Animal:
        def __init__(self, type, name, age, isCarnivorous) -> None:
                self.type = type 
                self.name = name 
                self.age = age 
                self.isCarnivorous = isCarnivorous

        def show_details(self):
                print(f"Animal Type: {self.type} \t Name: {self.name} \t Age: {self.age} \t If Carnivorous: {self.isCarnivorous}")


# DogOrigin class inherits Animal class 
class DogOrigin(Animal):
        def __init__(self, country_name, environment, type, name, age, isCarnivorous) -> None:
                super().__init__(type, name, age, isCarnivorous)
                self.country_name = country_name
                self.environment = environment


        
        def show_origin(self):
                print(f"Country Name: {self.country_name} \t Environment: {self.environment}")

# Dog class inherits DogOrigin class 
class Dog(DogOrigin):
        def __init__(self, breed, weight, color, country_name, country_environment, A_type, A_name, A_age, A_isCarnivorous) -> None:
                super().__init__(country_name, country_environment, A_type, A_name, A_age, A_isCarnivorous)
                self.breed = breed
                self.weight = weight 
                self.color = color

        def show_info(self):
                print(f"Breed: {self.breed} \t Weight: {self.weight} \t Color: {self.color}")
               

# Bulldog class inherits Dog class : Bulldog class is our required child class. It has the properties of all of its parent class. 
class Bulldog(Dog):
        def __init__(self, dog_breed, dog_weight, dog_color, country_name, country_env, type, name, age, isCarnivorous) -> None:
               Dog.__init__(self, dog_breed, dog_weight, dog_color, country_name, country_env, type, name, age, isCarnivorous)



if __name__ == '__main__':
        # instance of Bulldog class  
        b = Bulldog('Bulldog', '20', 'Gray', 'England', 'Cold', 'Dog', 'Gruffy', '10', True)
        b.show_details()
        b.show_origin()
        b.show_info()

        # print(b.breed)
        # print(b.weight)
        # print(b.isCarnivorous)