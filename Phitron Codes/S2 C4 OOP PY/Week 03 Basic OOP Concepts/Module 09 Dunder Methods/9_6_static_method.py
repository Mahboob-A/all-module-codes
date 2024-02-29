"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 04.00  pm
9-6: Static Method 
"""

"""  
Class Method	                                                            Static Method

1. The class method takes cls (class) as first argument.  1. The static method does not take any specific parameter.

2. Class method can access and modify the class state.	2. Static Method cannot access or modify the class state.

3. The class method takes the class as parameter to know about the state of that class.	

3. Static methods do not know about class state. These methods are used to do some utility tasks by taking some parameters.

4. @classmethod decorator is used here.	 4. @staticmethod decorator is used here.


"""




"""  
The concept of static method is as we know we have to receive self inside a class method 
as it will point to this method of this class but we also can use a method without using self parameter.
But in this case, we need to use @staticmethod decorator to do so and we then do not need 
to receive self parameter.
We can assess this static method using the class_name.staticmethod_name() like this way
and we also can acess this ststic method using the instance 
"""

class Shop:
        def __init__(self, name):
                self.name = name 
                self.items = []
                self.total = 0

        @staticmethod  #this is an static method and we can access it directly 
        def calculate(x, y):
                return x * y 

        def add_to_total(self, amout):
                self.total += amout 

        def add_to_cart(self, item, price, quantity):
                # total_cost = price * quantity this also works 
                # self.add_to_total(total_cost)
                self.total += self.calculate(price, quantity)
                self.items.append(item)



# we can directly access the staticmethod with the class but we can not directly access a method that takes self with the method, then we need to access it through an instance 
res = Shop.calculate(20, 3)
print(res)

#  we can not call a non static method directly like this, we must call it through an instance 
# print(Shop.add_to_total(20))


my_shop = Shop('Test User')
my_shop.add_to_cart('pant', 200, 3)
my_shop.add_to_cart('ahoe', 100, 2)
my_shop.add_to_cart('tshirt', 50, 4)
print(my_shop.total)

my_shop.add_to_total(100)
print(my_shop.total)
                