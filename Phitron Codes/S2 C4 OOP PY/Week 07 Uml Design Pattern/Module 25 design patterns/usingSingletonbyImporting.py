"""  
Week 07, mod date: 131122, Sunday | Watch date: 141122, Monday, 07.00 pm 
Module 25 | Mod day 02  
Design Pattern 
A_Singleton design patter
In singleton design pattern, we can instantiate only a single class instance. 
"""
# singleton part 3 
# here we will only inport the singleton instance to work with it 
# here, if we import the class, we can create instances, as we have not cross check like the A_Singleton
# but the convention is that we just import the singleton instance and work with it 
from simpleSingleton import gramin_phone  

print(gramin_phone.name)
gramin_phone.change_name('Valo Phone!')

print(gramin_phone.name)
