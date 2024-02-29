""" Bus Ticketing System """

"""
Conceptual session: 4-1 (although it would have been 4-2 but monday concept was cancelled for Sitrang tornedo)
Concept Date: 261022, Wednesday
Watch Date: 281022, Friday, 03.00 pm
"""


class User:
       def __init__(self, username,  password):
                self.username = username
                self.password = password

# coach is bus no, from_des is from destination and to_des is to destinatio


class Bus:
       def __init__(self, bus_registered_id, driver_name, bus_arrival_time, bus_departure_time, bus_departure_depo, bus_destination_depo):
                self.bus_registered_id = bus_registered_id
                self.driver_name = driver_name
                self.bus_arrival_time = bus_arrival_time
                self.bus_departure_time = bus_departure_time
                self.bus_departure_depo = bus_departure_depo
                self.bus_destination_depo = bus_destination_depo
                self.seat = ["empty" for empty in range(7)]


class PhitronCompany:
        total_bus = 5
        all_bus_database = []   # database for all bus info

        def add_bus(self):
                bus_id = int(input("Input Govt. registered bus no (int):  "))
                flag = 1
                for bus in self.all_bus_database:
                       if bus_id == bus['bus_registered_id']:
                                flag = 0
                                print("Bus already is in service")
                                break
                if flag:  # if flag is still 0
                        print("Congratulations For Buying New Bus!\nLet's Add Some Details To Commute It\n")
                        bus_driver = input("Input bus driver name:  ")
                        bus_arrival_time = input(
                                "Input bus arrival time to depo:  ")
                        bus_depr_time = input(
                                "Input bus departure time from depo:  ")
                        bus_departure_dpo = input(
                                "Input bus departure depo:  ")
                        bus_destination_depo = input(
                                "Input bus destination depo:  ")
                        # why we need to create self.new_bus instead of new_bus
                        self.new_bus = Bus(bus_id, bus_driver, bus_arrival_time,
                                           bus_depr_time, bus_departure_dpo, bus_destination_depo)
                        self.all_bus_database.append(vars(self.new_bus))
                        # printing the database here
                        print(self.all_bus_database)
                        print("New bus successfully added")


#  [{'bus_registered_id': 101, 'driver_name': 'Kemal', 'bus_arrival_time': '1:00 pm',
#    'bus_departure_time': '2:30 pm', 'bus_departure_depo': 'Jangipur', 'bus_destination_depo': 'Kolkata'},
# [{'bus_registered_id': 201, 'driver_name': 'Jamal', 'bus_arrival_time': '10:00 am', 'bus_departure_time': '12:00 pm',
# 'bus_departure_depo': 'Kolkata', 'bus_destination_depo': 'Jangipur'}]]
# this is how the all_bus_database list of dict will be looking after appending the bus object via vars() function

# company = PhitronCompany()
# company.add_bus()

class BusCounter(PhitronCompany):
        total_seat = 7

        def ticket_reservation(self):
                bus_id = int(input("Input the bus number that you want to travel:   "))
                for bus in self.all_bus_database:
                        if bus_id == bus["bus_registered_id"]:
                                print("Current available seat is:  {}".format(bus["seat"].count("empty")))
                                print("Current Available seat is", end=" ")
                                for seat in bus["seat"]:
                                       if seat == "empty":
                                            print(seat, end=" ")
                                print()
                                # print("Available seats are: {}".format(bus["seat"]))
                                passenger_name = input("Input your name:   ")
                                seat_no = int(
                                        input("Enter your desired seat no:   "))
                                if seat_no > self.total_seat:   # checking if seat_no is in bound of bus seat
                                       print("Current Available seat is {}".format(
                                           bus["seat"].count("empty")))
                                # checking if already the seat is booked
                                elif bus["seat"][seat_no-1] != "empty":
                                        print("Seat is already booked")
                                        print(self.all_bus_database)
                                        break
                                else:    # reserving ticket for the user
                                        bus["seat"][seat_no-1] = passenger_name
                                        print(self.all_bus_database)
                                        print("Your seat is reserved for {} seat number".format(
                                                seat_no))
                                        break
                        else:
                               print("No bus available for this bus code")
                # for i, bus in enumerate(self.all_bus_database):
                #         for j, elem in enumerate(bus):
                #                 print(elem["seat"][j])


while True:
        x = int(input("Input 1 for add bus | 2 for seat booking "))
        if x == 1:
                company = PhitronCompany()
                company.add_bus()
        elif x == 2:
                t = BusCounter()
                t.ticket_reservation()

# company = PhitronCompany()
# company.add_bus()
# x = BusCounter()
# x.ticket_reservation()
