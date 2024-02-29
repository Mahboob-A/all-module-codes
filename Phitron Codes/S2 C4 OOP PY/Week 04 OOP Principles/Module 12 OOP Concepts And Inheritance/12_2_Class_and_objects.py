# Week 04, Module 12: OOP Concpets And Ingeritance
# Mod Date: 221022, Saturday | Watch date: 241022, Monday 
# 12-2: How class and object used in oop 
# 08.15 am 


class Bus:
        def __init__(self, route, licence, driver) -> None:
                self.route = route
                self.licence = licence 
                self.driver = driver 
                self.trips = []

        def start_trips(self, start_time):
                self.trips.append(start_time)

class Driver:
        def __init__(self, name, licence, address, salary) -> None:
                pass 
        
        def drive(self, start_time, end_time):
                pass 

        def vacation(self):
                pass

        def withdraw_salary(self):
                pass 


class Passenger:
        def __init__(self, name, mobile, destination) -> None:
                pass

        def purchase_ticket(self, destination, counter):
                pass 


class Manger:
        def __init__(self, name, mobile, department) -> None:
                pass

class Counter:
        def __init__(self) -> None:
                pass 