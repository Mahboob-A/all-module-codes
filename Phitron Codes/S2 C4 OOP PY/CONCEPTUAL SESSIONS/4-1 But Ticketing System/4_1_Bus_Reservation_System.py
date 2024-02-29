""" Bus Ticketing System """

"""  
Conceptual session: 4-1 (although it would have been 4-2 but monday concept was cancelled for Sitrang tornedo)
Mahboob Alam
Concept Date: 261022, Wednesday
Watch Date: 281022, Friday, 03.00 pm 
https://github.com/Mahboob-A/Conceptual-Session-Oct-26-2022-Bus_Company-Batch-1
"""




class User:
        def __init__(self, name, username, password):
                self.name = name 
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
                self.seat = ["empty" for empty in range(20)]

class PhitronCompany:
        total_bus = 5 
        all_bus_database = []   # database for all bus info

        def add_bus(self):
                bus_id = int(input("Input Govt. registered bus no (int):  "))
                flag = 1
                for bus in self.all_bus_database:
                        if bus_id == bus['bus_registered_id']:  #chekcing in list of dictionary with key "bus_registered_id"'s value 
                                flag = 0
                                print("Bus is already in service")
                                break 
                if flag: #if flag is still 1
                        print("Congratulations For Buying New Bus!\nLet's Add Some Details To Commute It\n")
                        bus_driver = input("Input bus driver name:  ")
                        bus_arrival_time = input("Input bus arrival time to depo:  ")
                        bus_depr_time = input("Input bus departure time from depo:  ")
                        bus_departure_dpo = input("Input bus departure depo:  ")
                        bus_destination_depo = input("Input bus destination depo:  ")
                        self.new_bus = Bus(bus_id, bus_driver, bus_arrival_time, bus_depr_time, bus_departure_dpo, bus_destination_depo)  #why we need to create self.new_bus instead of new_bus 
                        self.all_bus_database.append(vars(self.new_bus))
                        print(self.all_bus_database)   # printing the database here 
                        print("New bus successfully added")
                        print()


class BusCounter(PhitronCompany):
        user_database = []  #db for all users 
        total_seat = 20

        def ticket_reservation(self):
                bus_id = int(input("Input the bus number that you want to travel:   "))
                flag = 0 
                for bus in self.all_bus_database:
                        if bus_id == bus["bus_registered_id"]:
                                flag = 1 
                                print("Current Available seat is {}".format(bus["seat"].count("empty")))
                                passenger_name = input("Input your name:   ")
                                seat_no = int(input("Enter your desired seat no:   "))
                                if seat_no > self.total_seat:  
                                        print("Maximux seat is 20\nCurrent Available seat is {}\nTo learn more about available seats, please see Bus Info".format(bus["seat"].count("empty")))
                                elif bus["seat"][seat_no-1] != "empty":
                                        print("Sorry! The seat is already booked")
                                        # print(self.all_bus_database)
                                else:    # reserving ticket for the user 
                                        bus["seat"][seat_no-1] = passenger_name
                                        # print(self.all_bus_database)
                                        print("Your seat is reserved for {} seat number".format(seat_no))
                        else:
                                break 
                flag2 = 0 
                if (len(self.all_bus_database) == 0):
                        print("Sorry! No bus available right now")
                        flag2 = 1 
                if flag == 0 and flag2 == 0:
                        print(f"Sorry! no bus available for {bus_id} bus code")


        def busInfoUITrue(self):
                for bus in self.all_bus_database:
                        print("*"*50)
                        print(f"Bus Number:  {bus['bus_registered_id']} \t\t\t Bus Driver:  {bus['driver_name']}")
                        print(f"Arrival Time:  {bus['bus_arrival_time']} \t\t Departure Time:  {bus['bus_departure_time']}")
                        print(f"From:  {bus['bus_departure_depo']} \t\t\t To:  {bus['bus_destination_depo']}")
                        print()
                        serial_no = 1 
                        for i in range(5):
                                for j in range(2):
                                        print(f"{serial_no}. {bus['seat'][serial_no-1]}", end="\t")
                                        serial_no += 1 
                                print("\t", end="")
                                for j in range(2):
                                        print(f"{serial_no}. {bus['seat'][serial_no-1]}", end="\t")
                                        serial_no += 1
                                print()
                        print()


        def InfoUIBeginning(self):
                print()
                print("-"*50)
                
 
        def InfoUIEnd(self):
                print("*"*50)
                print(f"{' '*8}Thank you for availing our service")
                print("*"*50)
                print("-"*50)
                print()

        def see_reservation(self):
                bus_id = int(input("Input the bus id to see reservation:  "))
                flag = 0 
                for bus in self.all_bus_database:
                        if bus_id == bus['bus_registered_id']:
                                flag = 1 
                                print("*"*50)
                                print(f"Bus Number:  {bus['bus_registered_id']} \t\t\t Bus Driver:  {bus['driver_name']}")
                                print(f"Arrival Time:  {bus['bus_arrival_time']} \t\t Departure Time:  {bus['bus_departure_time']}")
                                print(f"From:  {bus['bus_departure_depo']} \t\t\t To:  {bus['bus_destination_depo']}")
                                print()
                                serial_no = 1
                                for i in range(5):
                                        for j in range(2):
                                                print(f"{serial_no}. {bus['seat'][serial_no-1]}", end="\t")
                                                serial_no += 1
                                        print("\t", end="")
                                        for j in range(2):
                                                print(f"{serial_no}. {bus['seat'][serial_no-1]}", end="\t")
                                                serial_no += 1
                                        print()
                                print()
                                self.InfoUIEnd()
                                break 
                if flag ==0:
                        print(f"Sorry! No bus available for {bus_id} bus code")

        def showBusInfo(self):   # showing particular bus info 
                self.InfoUIBeginning()
                print(f"{' '*10} {'#'*10} BUS INFO {'#'*10}")
                print("*"*50)
                bus_id = int(input("Input bus id to see info:   "))
                flag = 0
                for bus in self.all_bus_database:
                        if bus_id == bus["bus_registered_id"]:
                                flag = 1
                                print("*"*50)
                                print(f"Bus Number:  {bus['bus_registered_id']} \t\t\t Bus Driver:  {bus['driver_name']}")
                                print(f"Arrival Time:  {bus['bus_arrival_time']} \t\t Departure Time:  {bus['bus_departure_time']}")
                                print(f"From:  {bus['bus_departure_depo']} \t\t\t To: {bus['bus_destination_depo']}")     
                                print()
                                serial_no = 1
                                for i in range(5):
                                        for j in range(2):
                                                print(f"{serial_no}. {bus['seat'][serial_no-1]}", end="\t")
                                                serial_no += 1
                                        print("\t", end="")
                                        for j in range(2):
                                                print(f"{serial_no}. {bus['seat'][serial_no-1]}", end="\t")
                                                serial_no += 1
                                        print()
                                print()
                                self.InfoUIEnd()
                        else:
                                break

                flag2 = 0
                if (len(self.all_bus_database) == 0):
                        print("Sorry! No bus available right now")
                        flag2 = 1
                
                if flag == 0 and flag2 ==0:
                        self.InfoUIBeginning()
                        print(f"SORRY. NO BUS FOUND WITH {bus_id} BUS ID")
                        print(f"{' '*10} {'#'*10} BUS INFO ENDED {'#'*10}")
                        self.InfoUIEnd()
                                
                        
        def show_All_Buses(self):  # showing all buses info
                if (len(self.all_bus_database) == 0):
                        print("Sorry! No bus available right now")
                else:
                        self.InfoUIBeginning()
                        print(f"{' '*10} {'#'*10} BUS INFO {'#'*10}")
                        print("*"*50)
                        self.busInfoUITrue()
                        self.InfoUIEnd()
                
        def get_user_info(self):
                return self.user_database 

        def create_account(self):
                self.InfoUIBeginning()
                print("*"*50)
                print(f"{' '*10} {'#'*10} ACCCOUNT CREATION {'#'*10}")
                print()
                name = input("Inpur your name:  ")
                username = input("Input unique username:  ")
                flag = 1 
                for user in self.get_user_info():
                        if user['username'] == username:  # checking the list of dict of user database 
                                print("!"*50)
                                print("Username is not available\nPlease create account again with different unique username")
                                flag = 0 
                                break
                if flag: 
                        password = input("Input secret password:  ")
                        self.new_user = User(name, username, password)
                        self.user_database.append(vars(self.new_user))
                        print("Your account has been created successfully")
                        print()
                        print(f"{' '*10} {'#'*10} ACCCOUNT CREATION ENDED {'#'*10}")
                        self.InfoUIEnd()

        



if __name__ == "__main__":
        while True:
                busCounter = BusCounter()
                print("1. Create account \n2. Login to account \n3. Exit")
                user_input = int(input("Input your choice:  "))
                if user_input == 3:
                        print("Please create an account or log in to avail our services next time. Hope to see you soon!")
                        break 
                elif user_input == 1:
                        busCounter.create_account()
                elif user_input == 2:
                        user_name = input("Input username:  ")
                        password = input("Input password:  ")
                        isAdmin = False 
                        flag = 0
                        if user_name == "admin" and password == "123":
                                isAdmin = True 
                        if isAdmin == False:
                                for user in busCounter.get_user_info():
                                        if user["username"] == user_name and user["password"] == password:
                                                flag = 1
                                                break 
                                if flag:
                                        print()
                                        print(f"Hello {user['name']}, You are now logged in.")
                                        while True:
                                                print("1. See All Avialable Buses \n2. Show Bus Route Info \n3. Book Seat \n4. See Your Reservation \n5. Exit ")
                                                user_inp = int(input("Input your choice:  "))
                                                if user_inp == 5:
                                                        print(f"Thank you {user['name']} for availing our service. Hope to see you soon!")
                                                        break
                                                elif user_inp == 1:
                                                        busCounter.show_All_Buses()
                                                elif user_inp == 2:
                                                        busCounter.showBusInfo()
                                                elif user_inp == 3:
                                                        busCounter.ticket_reservation()
                                                elif user_inp == 4:
                                                        busCounter.see_reservation()
                                                else:
                                                        print(f"{user_inp} is not an valid option. Please input an valid option")
                                else:
                                        print("It seems you do not have any account with us. Please create an account first")
                        else:
                                print("Hello Admin! Welcome back")
                                while True:
                                        print("1. Add Bus \n2. See All Avialable Buses \n3. Show Bus Route Info \n4. See User Data \n5. Exit ")
                                        admin_input = int(input("Input your choice:  "))
                                        if admin_input == 5:
                                                print("Thank you for administrating the service")
                                                break
                                        elif admin_input == 1:
                                                busCounter.add_bus()
                                        elif admin_input == 2:
                                                busCounter.show_All_Buses()
                                        elif admin_input == 3:
                                                busCounter.showBusInfo()
                                        elif admin_input == 4:
                                                print(busCounter.get_user_info())
                                        

                                                



