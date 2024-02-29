""" 
Continue: After Part 1 
Mod Date: 061122, Sunday
Watch Date: 071122, Monday, 07.15 pm
21-2 Create Trave Agent and multiple trip options
"""


from E_Airlines import Airlines
from C_All_Airports import AllAirports

class TravelAgent:
        def __init__(self, name) -> None:
                self.name = name 
                self.trips = None 
                self.air_ports = AllAirports()
                self.air_lines = Airlines()

        def __repr__(self) -> str:
                return f'Travel Agent Name:  {self.name} | Trips: {self.trips}'

        """  
        start_code = city code beginning (airport code)
        end_code = city code destination 
        start_date = journey date 

        return aircraft and price 
        """
        # returns a list of suitable aircraft and fare 
        def set_trip_one_city_one_way(self, start_code, end_code, start_date):
                distance = self.air_ports.distance_between_two_airports(start_code, end_code)
                print("Distance from TravelAgent:  ", distance)
                fare = self.air_ports.get_ticket_price(start_code, end_code)
                aircraft_by_close_distance = self.air_lines.get_aircraft_by_diatance(distance)
                return [aircraft_by_close_distance, fare]                

        def set_trip_one_city_two_way(self):
                pass 

        def set_trip_multi_city_one_way(self):
                pass 

        def set_trip_multi_city_two_way(self):
                pass
