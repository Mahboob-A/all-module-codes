# """  
# Module date: 011122, Tuesday Watch date: 021122,Thursday, 02.30 pm 
# Week 05: Urban Rides 
# Lab Class 05 
# 18-3_ Create objects from json from files
# """

# creating objects from text file using json 


import json


class Item:
        all_obj = [] #storing all the objects here 
        def __init__(self, name, price) -> None:
                self.name = name 
                self.price = price
                self.all_obj.append(self)
        
        def __repr__(self) -> str:
                return f"Item(Name: {self.name}, Price: {self.price})"


        @staticmethod
        def initialize():
                with open("extract.txt", "r") as file:
                        data = file.read()
                        js_data = json.loads(data)
                for obj in js_data:
                        Item(
                                # obj["name"], obj["price"]  #also this works 
                                name = obj["name"],
                                price = obj.get("price")
                        )


# if we do not want to use static metod, then we first have to create a demo object og Item class and then with that object we have to call initialize method 

Item.initialize()
print(Item.all_obj)





# a = [{"name": "plate", "price": 150} ,{"name": "Bowl", "price": 100}, {"name": "spoon", "price": 50}, {"name": "cup", "price": 70}]

# for i in a:
#         if i["price"] ==100:
#                 print(i)