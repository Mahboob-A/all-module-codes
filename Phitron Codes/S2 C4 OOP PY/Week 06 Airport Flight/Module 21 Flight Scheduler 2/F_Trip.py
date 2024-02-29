""" 
Continue: After Part 1 
Mod Date: 061122, Sunday
Watch Date: 071122, Monday, 07.15 pm
21-1 Module Introduction and previous module recap
"""

class Trip:
        def __init__(self, trip_cities, start_date) -> None:
                self.trip_cities = trip_cities
                self.start_date = start_date
                self.aircraft = None 
                self.trip_route = None 
                self.cost = None 

        def __repr__(self) -> str:
                return f'Trip:  {self.trip_cities} | Trip Route: {self.trip_route} | Aircraft: {self.aircraft} | Start Date: {self.start_date} | Cost: {self.cost}'
        