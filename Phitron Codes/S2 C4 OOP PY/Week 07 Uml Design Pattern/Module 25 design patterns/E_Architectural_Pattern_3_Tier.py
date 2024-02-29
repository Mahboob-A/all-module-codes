"""  
Week 07, mod date: 131122, Sunday | Watch date: 151122, Monday, 04.00 pm 
Module 25 | Mod day 02  
Design Pattern 
E_Architectural Pattern | 3 Tier Pattern 
"""

# as we have learned design pattern, design pattern works very low level i.e in the classes. But 
# Architectural pattern is overall pattern of the codebase.
# Ex: 3-tier pattern 
# microservices 
# event driven 
# mvc (model view controller)

# is 3-tier pattern, the 1st pattern is the UI or the GUI that the user sees.
# The 2nd lyer is the application or logic tier where all the logic of the system relies. 
# And the third tier is Database tier where the data of the software is stored 

class GUI:
        def __init__(self) -> None:
                pass

class Application:
        def __init__(self) -> None:
                pass

class Database:
        def __init__(self) -> None:
                pass
