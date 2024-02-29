"""  
Week 03: Basics of OOP Concepts 
Module 08: Class And Methods 
08 - 6: Shopping class add to cart and check out 
171022, Monday, 04.00 pm 

"""

from traceback import print_tb


class Shop:
        def __init__(self, name):
                self.name = name 
                self.wallet_balance = 0
                self.cart = []

        def add_to_cart(self, item, price, quantity):
                self.cart.append({'item': item, 'price': price, 'quantity': quantity})
        
        def wall_balance_less_price(self, price):
                print(f"You have insufficinet balance in your Wallet. Please add Rs.{price - self.wallet_balance} more to continue")
                res = int(input('Would you like to add money now? Press 1 to add | Press any other key to exit:  '))
                if res == 1:
                        new_balance = int(input("Please add your desired money to wallet:  "))
                        self.wallet_balance += new_balance
                elif res != 1:
                        print("Your order is not placed. Thank You")
                else:   #how to make a recursive call here? if the user put a float value, i want to repeat this process 
                    print("You have not entered any valid amount. Please Try again", self.wall_balance_less_price(price))
        
        def check_out(self, wallet_balance):
                self.wallet_balance = wallet_balance
              
                price = 0 
                print("Here are the items you have choosen to buy: ")
                for item in self.cart:
                        price += item['price'] * item['quantity']
                        print(item)

                print("Wallet Ballance: ", self.wallet_balance)
                print("Total price: ", price)

                if self.wallet_balance < price:
                        self.wall_balance_less_price(price)
                        if self.wallet_balance > price: 
                                print()
                                print(f'Your order has been placed! and here is your exchange money: {self.wallet_balance - price}\n')
                                # making the wallet balance 0 the system has returned the extra amount in the wallet after deducting the price
                                self.wallet_balance -= self.wallet_balance
                                print("Current Wallet Balance: ", self.wallet_balance)
                        elif self.wallet_balance < price: 
                                self.wall_balance_less_price(price)
                
                elif self.wallet_balance > price:
                        print(f'Your order has been placed! and here is your exchange money: {self.wallet_balance - price}\n')
                        # making the wallet balance 0 the system has returned the extra amount in the wallet after deducting the price 
                        self.wallet_balance -= self.wallet_balance 
                        print("Current Wallet Balance: ", self.wallet_balance)
                else:
                        print("Your order has been placed!")
                        self.wallet_balance -= self.wallet_balance
                        print("Current Wallet Balance: ", self.wallet_balance)
                        


my_shop = Shop('Mahboob')

my_shop.add_to_cart('show', 50, 4)
my_shop.add_to_cart("shirt",100, 3)
my_shop.add_to_cart("jeans", 200, 2)

my_shop.check_out(80)
                

        
