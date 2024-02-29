""" 
Mod Date: 051122, Saturday
Watch Date: 071122, Sunday, 04.15 pm 
20-8 Create AirLines with ari crafts
"""

from A_Aircraft import Aircraft
from csv import reader 

class Airlines:
        def __init__(self) -> None:
                self.air_crafts = None 
                self.load_aircrafts_data('./data/aircraft.csv')

        def load_aircrafts_data(self, aircraft_file_path):
                Aircrafts = {}
                with open(aircraft_file_path, 'r') as file:
                        lines = reader(file)
                        next(lines)
                        for line in lines:
                                Aircrafts[line[0]] = Aircraft(line[0], line[1], line[3], line[4])

                self.air_crafts = Aircrafts
                # for airplane in self.air_crafts.values():
                #         print(airplane)

        def get_aircraft(self, aircraft_code):
                if aircraft_code in self.air_crafts:
                        return self.air_crafts[aircraft_code]
                else:
                        print("The aircraft code in invalid")
Airlines()        
        

