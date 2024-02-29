""" 
Mod Date: 051122, Saturday
Watch Date: 061122, Sunday, 09.15 pm
20-1 Introduction to aircraft and airport
"""

class Airport:
        def __init__(self, airport_name, airport_city, airport_country, airport_code, lat, lon,  rate) -> None:
                self.airport_name = airport_name
                self.airport_city = airport_city
                self.airport_country = airport_country
                self.airport_code = airport_code
                self.lat = float(lat)
                self.lon= float(lon)
                self.rate = float(rate)

        def __repr__(self) -> str:
                return f"Airport Name: {self.airport_name} | In City: {self.airport_city} | In Country: {self.airport_country} | Code: {self.airport_code} | Rate: {self.rate}"
