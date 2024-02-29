# Week 04, Module 12: OOP Concpets And Ingeritance
# Mod Date: 221022, Saturday | Watch date: 241022, Monday
# 12-6: multi level inheritance 
# 02.30 pm


# base class 
# parent class 

# This is multi level inheritance 

class Vehicle:  # base class 
        def __init__(self, name, licence, price):
                self.name = name 
                self.licence = licence 
                self.price = price 
                print("Vehicle calss __init__ called")

        def start(self):
                print(f"{self.name} started")

class Bus(Vehicle):  # Bus is inheriting Vehicle base class 
        def __init__(self, name, licence, price, seat, ticket_price):
                self.seat = seat 
                self.available_seat = seat 
                self.ticket_price = ticket_price
                print("Bus __init__ called")
                super().__init__(name, licence, price)

        def sell_ticket(self, passenger_name, quantity, amount):
                self.available_seat -= quantity 
                reminder = amount - (self.ticket_price * quantity)

                if reminder>=0:
                        return Ticket(passenger_name)
                else:
                        print("You have given less money: Give {} more to get a ticket.".format(reminder - (reminder + reminder) ))

class ACBus(Bus):  # ac bus and mini bus is inheriting Bus class 
        def __init__(self):
                print("AC Bus crested")


class MiniBus(Bus): 
        def __init__(self):
                # super().__init__('Minibus', 'ABC123', 150000, 40, 400) both call is same
                # but for Direct call using class name, we need to pass self.
                Bus.__init__(self, 'Minibus', 'ABC123', 150000, 40, 400)
                # super().sell_ticket('Kamal', 10, 2000)
                # we can also call parent's method using super 
                print("Minibus created")


class Ticket:
        def __init__(self, passenger_name):
                self.passenger = passenger_name 


mini_bus = MiniBus()
mini_bus.start()
print(mini_bus.name)
print(mini_bus.licence)

mini_bus.sell_ticket('Kamal', 5, 15000)