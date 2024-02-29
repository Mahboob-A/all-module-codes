# Week 04, Module 12: OOP Concpets And Ingeritance
# Mod Date: 221022, Saturday | Watch date: 241022, Monday
# 12-4: common uncommon attributes and methods between classes 
# 10.00 am

# a electronic shop class 

class Laptop:
        def __init__(self, brand, price, color, ssd):
                self.brand = brand
                self.price = price
                self.color = color 
                self.ssd = ssd

        def __repr__(self):
                return "Laptop Brand: {} | Price: {} | Color: {} | Ssd: {} ".format(self.brand, self.price, self.color, self.ssd)

        def run(self):
                print("laptop is running")
        
        def purchase(self, money):
                if money < self.price:
                        return ("You need to give more {} rupess".format(money-self.price))
                else:
                        return [self, "The laptop is yours", 'returned money:', money-self.price]

class Smartphone:
        def __init__(self, brand, price, color, camera, sim_num):
                self.brand = brand 
                self.price = price 
                self.color = color 
                self.camera = camera
                self.sim_num = sim_num  

        def is_dual(self):
                return self.sim_num > 1


class Watch:
        def __init__(self, brand, price, color, watch_type):
                self.brand = brand 
                self.price = price 
                self.color = color 
                self.watch_type = watch_type   

        def is_digital(self):
                return self.watch_type == 'digital'

class Manager:
        def __init__(self, name, salary, experience, designation):
                pass 

        def day_total_sales(self):
                pass 

        def handle_customer_complain(self):
                pass 

        def withdraw_salary(self):
                pass 

class SalesPerson:
        def __init__(self,name, salary, experience, designation, commission):
                pass 

        def handle_customer(self):
                pass 

        def withdraw_salary(self):
                pass 

lp = Laptop('Asus', 50000, 'silver', 'top notch')
print(lp.purchase(100000))

phone = Smartphone('realme', 10000, 'black', 'tripple', 1)
print(phone.is_dual())

watch = Watch('noise', 5000, 'black', 'digital')
print(watch.is_digital())