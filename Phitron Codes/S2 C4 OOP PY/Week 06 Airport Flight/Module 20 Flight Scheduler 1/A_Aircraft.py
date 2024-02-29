""" 
Mod Date: 051122, Saturday
Watch Date: 061122, Sunday, 09.15 pm
20-1 Introduction to aircraft and airport
"""

class Aircraft:
        def __init__(self, aircraft_code, aircraft_type, aircraft_manufacturer,  flight_range) -> None:
                self.aircraft_code = aircraft_code
                self.aircraft_type = aircraft_type 
                self.aircraft_manufacturer = aircraft_manufacturer
                self.flight_range = flight_range                                        

        def get_manufacturer(self):
                return self.aircraft_manufacturer
        
        def get_range(self):
                return self.flight_range

        def __repr__(self) -> str:
                return f"Aricraft Maker: {self.aircraft_manufacturer} | Code: {self.aircraft_code} | Type: {self.aircraft_type} | Range: {self.flight_range}"
