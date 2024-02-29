"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 071222, Wednesday, 11.00 am 

Question 10:  

Explain with examples - Single Inheritance, Multiple Inheritance and Multilevel inheritance 
Multiple inheritance: 
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


class Dog:
        def __init__(self, breed, weight, color) -> None:
               self.breed = breed
               self.weight = weight 
               self.color = color

        def show_info(self):
                print(f"Breed: {self.breed} \t Weight: {self.weight} \t Color: {self.color}")
               


# Inherited two parent classes in our sub-class or child or derived class. It allows us to re-use the code of parent class
# without re-writing the same code maintaining the DRY principle. 

class Bulldog(Animal, Dog):
       def __init__(self, animal_type, animal_name, animal_age, isCarnivorous, dog_breed, dog_weight, dog_color) -> None:
               Animal.__init__(self, animal_type, animal_name, animal_age, isCarnivorous)
               Dog.__init__(self, dog_breed, dog_weight, dog_color)



if __name__ == '__main__':
        # instance of Bulldog class  
        b = Bulldog('Dog', 'Gruffy', '10', True, 'Bulldog', '20', 'Gray')
        b.show_details()
        b.show_info()

