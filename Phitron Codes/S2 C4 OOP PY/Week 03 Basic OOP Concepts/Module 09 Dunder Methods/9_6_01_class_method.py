"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 05.00  pm
9-6-01: Class Method 
"""


class Shop:

        shop_name = 'Big shop'
        shop_time = []

        def __init__(self, name):
                self.name = name
                self.items = []
                self.total = 0

        # class method takes ' cls ' as fist parameter (convention like self)
        @classmethod
        def shop_details(cls):
                return cls.shop_name 

        @staticmethod  # this is an static method and we can access it directly 
        def calculate(x, y):
                return x * y

        def add_to_total(self, amout):
                self.total += amout

        def add_to_cart(self, item, price, quantity):
                # total_cost = price * quantity this also works
               # self.add_to_total(total_cost)
                self.total += self.calculate(price, quantity)
                self.items.append(item)
