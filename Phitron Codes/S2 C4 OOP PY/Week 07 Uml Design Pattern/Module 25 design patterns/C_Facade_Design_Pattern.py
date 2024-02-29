"""  
Week 07, mod date: 131122, Sunday | Watch date: 141122, Monday, 07.00 pm 
Module 25 | Mod day 02  
Design Pattern 
C_Facade patthern 
"""
# facade pattern is structural design pattern that strucures a number of actions into a single entity 


"""Facade pattern with an example of WashingMachine"""


class Washing:
    '''Subsystem # 1'''

    def wash(self):
        print("Washing...")


class Rinsing:
    '''Subsystem # 2'''

    def rinse(self):
        print("Rinsing...")


class Spinning:
    '''Subsystem # 3'''

    def spin(self):
        print("Spinning...")

class Dryer:
        ''' Subsystem #4 '''

        def dry(self):
                print("Drying clothes...")

class Ironing:
        ''' Subsystem #5 '''

        def iron(self):
                print('Itoning the clothes...')


class WashingMachine:
    '''Facade'''
        # the single entity that is provided to user to access the system 
        # this hides all the internal complexities of the other classes 

    def __init__(self):
        self.washing = Washing()
        self.rinsing = Rinsing()
        self.spinning = Spinning()
        self.drying = Dryer()
        self.ironing = Ironing()

    def startWashing(self):
        self.washing.wash()
        self.rinsing.rinse()
        self.spinning.spin()
        self.drying.dry()
        self.ironing.iron()


""" main method """
if __name__ == "__main__":

    washingMachine = WashingMachine()
    washingMachine.startWashing()
