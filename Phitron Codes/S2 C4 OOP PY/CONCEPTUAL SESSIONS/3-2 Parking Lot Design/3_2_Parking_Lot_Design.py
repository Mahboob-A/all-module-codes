"""  
conceptual session: 3-2 Parking Lot Design 
concept date: 191022, Wednesday.
Watch date: 201022, Thursday 
"""







class Car:
        """ car class """
        def __init__(self, licence, model, color):
                self.licence = licence 
                self.model = model 
                self.color = color 

        def __repr__(self):
                return f"{self.licence},{self.model},{self.color}"


class Garage:
        def __init__(self):
                self.car_added = []     # a nested list to store the cars that are added to the garage i.e in the parking lot 
                self.car_info     = {}     # to store the informations of the car added in the lot as a database for administrative purpose    
                self.ticket         = []     # unique ticket to provide to the driver
                self.space         = 10   # number of available space in the lot  
                self.bill             = 0     # bill to pay by the driver 
                

        def check_space_availability(self):
                return f"Current space available: {self.space}"

        def add_car_to_garage(self, car_obj):    # receiving  a car calss object 
                print("PARK: Current parking space is: ", self.space)
                self.spot_name = ['A1', 'B1', 'C1', 'D1', 'E1', 'F1', 'G1', 'H1', 'I1', 'J1']
                if self.space > 0:    # as check_space_availability() reutrns a string, so we can not now check it calling the function 
                        car_data = str(car_obj).split(",")  #typecasting the __repr__ data into str and converting it into a list using split() function 
                        self.space -= 1 
                        self.car_added.append(car_data)   # adding a nested list to the car added to the lot to store the details of the car
                        self.car_info = {"Tickets" : [], "Licence" : [], "Model" : [], "Color" : []}
                        for i, car_info in enumerate(self.car_added):  #[[], [], [], [], [], []] car_added a nedted list all the cars added to the parking lot 
                                ticket = self.spot_name[i] + car_info[0]
                                self.car_info['Tickets'].append(ticket)
                                self.car_info['Licence'].append(car_info[0])   #or car_data[0]
                                self.car_info['Model'].append(car_info[1])
                                self.car_info['Color'].append(car_info[2])

                        print(f"Your car is parked successfully. Your ticked no is: {ticket}")
                        # print()
                        # print("Ticket", ticket)
                        # print("\nCar data", car_data)
                        # print("\nCar info", self.car_info)
                        # print("\nCar added", self.car_added)
                        print()
                else:
                        print("No spots availavle to park in this parking lot!")

        def unpark(self, ticket, hour):
                print(F"Unparking car for ticket no: {ticket}")
                curr_parking_space = len(self.car_info["Tickets"])
                if ticket not in self.car_info["Tickets"]:   # O(n)
                        print("You have not parked your car here")
                else:
                        for index, tckt in enumerate(self.car_info["Tickets"]):
                                pass
                        print(f"Your licence is {self.car_info['Licence'][index]}")
                        print(f"Your car model is {self.car_info['Model'][index]}")
                        print(f"Your car color is {self.car_info['Color'][index]}")
                        
                        # self.car_info["Tickets"].pop(index)   # we can also delete from the database also, then delete all keys of the index but to keep the database, just delete it from the car_added list 
                        # if we want to keep the database, then we can delete from the car_added list 
                        # self.car_added.pop(index)  #removing from the list
                        self.car_info["Tickets"].pop(index)
                        self.car_info["Licence"].pop(index)
                        self.car_info["Model"].pop(index)
                        self.car_info["Color"].pop(index)
                        self.space += 1 
                        

                if hour > 24:
                        print("We charge extra rupees 50 for 24 hours")
                        print(f"Your total bill is: ${hour*5 + 50}")
                else:
                        print(f"Your total bill is: ${hour*5}")
                print("UNPARK: Current parking space is -: ", self.space)
                print("You have successfully unparked your car")
                print()

        def all_cars_in_garage(self):
                curr_parking_space = len(self.car_info["Tickets"])
                print("Total car in parking lot: ", curr_parking_space)
                print("These are the cars in parking lot: ")
                for index in self.car_info.items():
                        print(index)
                print()


my_garage = Garage()

while True:
        print("**********Welcome To Famous Garage**********")
        print("Choose Your Options: ")
        print("1. Park Your Car\n2. Unpark Your Car\n3. Check Space Availability\n4. Any Other Key To Stop")
        user_resp = int(input("Input your choice: "))
        if user_resp == 1:
                user_licence = input("Input your licence: ")
                car_model = input("Input car model: ")
                car_color = input("Input car color: ")
                user_car = Car(user_licence, car_model, car_color)
                my_garage.add_car_to_garage(user_car)
        elif user_resp == 2:
                car_ticket = input("Input parked car ticket: ")
                hour_parked = int(input("Input how much hour car was parked: "))
                my_garage.unpark(car_ticket, hour_parked)
        elif user_resp == 3:
                print(my_garage.check_space_availability())
        else:
                break 










# my_car_1 = Car("534HJF", "XZA", "white")
# my_car_2 = Car("492ALH", "TVX", "blue")
# my_car_3 = Car("235TYZ", "PWC", "black")

# my_garage.add_car_to_garage(my_car_1)
# my_garage.add_car_to_garage(my_car_2)
# my_garage.add_car_to_garage(my_car_3)


# my_garage.all_cars_in_garage()

# my_garage.unpark("C1235TYZ", 51)
# # my_garage.unpark("A1534HJF", 21)

# my_garage.all_cars_in_garage()
