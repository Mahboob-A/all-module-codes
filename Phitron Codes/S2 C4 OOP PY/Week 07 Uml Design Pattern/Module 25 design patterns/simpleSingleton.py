"""  
Week 07, mod date: 131122, Sunday | Watch date: 141122, Monday, 07.00 pm 
Module 25 | Mod day 02  
Design Pattern 
A_Singleton design patter
In singleton design pattern, we can instantiate only a single class instance. 
"""
# singleton part 2 
# here we will on;y create the class and the object. and we will import this instance whereever we need it. 

class Company:
        def __init__(self, name, address, moto) -> None:
                self.name = name
                self.address = address
                self.moto = moto 

        def change_name(self, newName):
                self.name = newName
        
        def change_moto(self, newMoto):
                self.moto = newMoto
        
gramin_phone = Company('Graminphone', 'Dhaka', 'Cholo Bohudur')