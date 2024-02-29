""" 
Continue: After Part 1 
Mod Date: 061122, Sunday
Watch Date: 071122, Monday, 03.15 pm
21-5 Python main function and Handle Error
"""

from G_TravelAgent import TravelAgent

def main():
        travel_agent = TravelAgent('Kemal')

        trip_info1 = travel_agent.set_trip_one_city_one_way('DAC', 'PRA', '081122')   
        print("Plane:  ", trip_info1[0])
        print("Fare:  ", trip_info1[1])



if __name__ == '__main__':
        main()