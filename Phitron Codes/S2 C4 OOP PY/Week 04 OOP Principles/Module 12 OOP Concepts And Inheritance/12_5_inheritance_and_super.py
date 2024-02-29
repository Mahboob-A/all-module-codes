# Week 04, Module 12: OOP Concpets And Ingeritance
# Mod Date: 221022, Saturday | Watch date: 241022, Monday
# 12-5: single line inheritance and super method 
# 12.00 pm 

# base class for eloctronc item's inheritance #
class DeviceDetails:
        def __init__(self, brand, price, color):
                self.brand = brand 
                self.price = price 
                self.color = color 

        def __repr__(self):
                return "Brand: {} | Price: {} | Color: {} | SSD: {} ".format(self.brand, self.price, self.color, self.ssd)

        def purchase(self, money):
                if money < self.price:
                      print ("You need to give more {} rupess to purchase".format(self.price-money))
                else:
                       print([self, "The product is yours", 'returned money:', money-self.price])

# base class for human resourse #
class HumanResource:
        def __init__(self, name, salary, experience, designation, holidays):
                self.name = name 
                self.salary = salary 
                self.experience = experience 
                self.designation = designation 
                self.holidays = holidays 
        
        def __repr__(self):
                return "Name: {} | Salary {} | Experience {} | Designation {} | Holidays {} ".format(self.name, self.salary, self.experience, self.designation, self.holidays)

        def withdraw_salary(self, amount):
                if amount <= self.salary:
                        print("You hase successfully withdrawn your salary rs: {} and your available balance is {}".format(amount, self.salary - amount))
                else:
                        print("Your salary balance is {}".format(self.salary))

        def vacation(self, days):
                if days <= self.holidays:
                        print("You have claimed your holiday {} Your remaining holiday is {}".format(days, self.holidays-days))
                else:
                        print("Your allowed holidays are {} ".format(self.holidays))
        


class Laptop(DeviceDetails):  # calling the base class 
        def __init__(self, brand, price, color, ssd):
                super().__init__(brand, price, color)  # calling the instance variables using super().__init__ method 
                self.ssd = ssd

        def run(self):
               print("laptop is running")

        

class Smartphone(DeviceDetails):
        def __init__(self, brand, price, color, camera, sim_num) :
                super().__init__(brand, price, color)
                self.camera = camera
                self.sim_num = sim_num

        def is_dual(self):
                return self.sim_num > 1
               

class Watch(DeviceDetails):
        def __init__(self, brand, price, color, watch_type):
                super().__init__(brand, price, color)
                self.watch_type = watch_type

        def is_digital(self):
               return self.watch_type == 'digital'


class Manager(HumanResource):
        def __init__(self, name, salary, experience, designation, holidays):
                super().__init__(name, salary, experience, designation, holidays)

        def day_total_sales(self):
                pass

        def handle_customer_complain(self):
                pass


class SalesPerson(HumanResource):
        def __init__(self, name, salary, experience, designation, holidays, commission):
                super().__init__(name, salary, experience, designation, holidays)
                self.commission = commission

        def handle_customer(self):
                pass



asus = Laptop('Asus', 50000, 'silver', '500gb')
realme = Smartphone('realme', 15000, 'black', '48mp', 2)
noise = Watch('noise', 5000, 'black', 'digital')

kamal = Manager('Kamal', 30000, 2, 'Manager', 30)

jamal = SalesPerson('Jamal', 20000, 1, 'Sales Person', 30, 100)

print(asus)
print(kamal)
print(jamal)

print(asus.brand)

asus.purchase(60000)
kamal.withdraw_salary(20000)
jamal.vacation(40)

realme.purchase(10000)
print(realme.is_dual())

print(noise.brand)

print(noise.is_digital())
noise.purchase(2000)