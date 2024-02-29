"""  
Week 03: Basics of OOP Concepts 
Module 08: Class And Methods 
08 - 5: Bank class money withdrawal and deposit 
171022, Monday, 10.00 am 

"""
print()
# making a simple baking deposit and withdrawal system using class 
import sys 
from time import sleep
import random
from random import choice
from random import seed 
from traceback import print_tb 



class Bank:
        
        def __init__(self, name, nomini, address, document, password, initial_amount,):
                self.min_balance = 100 
                self.max_balance = 20000 
                self.max_withdraw = 50000
                self.name = name 
                self.nomini = nomini 
                self.address = address 
                self.document = document 
                self.password = password 
                if initial_amount < self.min_balance: 
                        print("Minimum Balance to open bank account is: ", self.min_balance)
                        return 
                else: self.initial_amount = initial_amount 
                self.customer_balance = self.initial_amount

        def transaction_id(self):
            return random.randint(100000, 10000000)
                # # seed(1)
                # sequence = [i for i in range(20)]
                # for _ in range(5) :
                #         selection = choice(sequence)
                #         return selection
                        

        def getDetails(self):
                return f'Your name is: {self.name}\nYour nomini is: {self.nomini}\nYour address is: {self.address}\nYour submitted document is: {self.document}\nYour initial amount was: {self.initial_amount}'

        def view_balance(self):
                sleep(1)
                print(f'Your current balance is: {self.customer_balance}')

        def withdraw(self, password, amount):
                if amount < self.min_balance:
                        print('Minimum balance to withdraw is: ', self.min_balance)
                elif amount > self.max_balance:
                        print("Max limit to withdraw balance at single transaction is: ", self.max_balance)
                elif self.max_withdraw < amount: 
                        print("You have exhausted your quota to withdraw max daily balance") 
                elif self.password != password: 
                        print("Your password is incorrect. Please input correct password.")
                elif ((self.password == password) and (amount <= self.max_balance)) and((self.customer_balance >= amount) and (self.max_withdraw >= amount)):
                        self.customer_balance -= amount 
                        self.max_withdraw -= amount  
                        print()
                        print("Max_withdraw", self.max_withdraw)
                        sleep(2)
                        print('Your transactin is being processed...')
                        sleep(2)
                        print("Please wait...")
                        sleep(2)
                        print("Please wait...")
                        sleep(2)
                        print(f"Your transaction is successful. Yout transaction id is  {self.transaction_id()}.\nPlease collect {amount} from the cash counter")
                        sleep(2)
                        res = int(input('Press 1 to view your current balance or any other key to exit: '))
                        if res == 1:
                                self.view_balance()
                else:
                        print("You have insufficient balance in your bank account")
                        res = int(input('Press 1 to view your current balance or any other key to exit: '))
                        if res == 1:
                                self.view_balance()
                print()

        def deposit(self, amount):
                self.customer_balance += amount 
                sleep(2)
                print("Your transaction is being processed...")
                sleep(2)
                print("Your transaction is successfully processed")
                print(f'Your transaction id is {self.transaction_id()}. Please keep it safe for any future reference')
                sleep(2)
                res = int(input("Press 1 to view your current balance or any key to exit: "))
                if res == 1: 
                        self.view_balance()



        def stop(self):
                self.sys.exit()




my_bank = Bank('Mahboob Alam', 'None', 'Kharibona', 'Aadhar', 'abcd', 500)


# print(my_bank.getDetails())

# my_bank.withdraw('abcd', 20000)
# # my_bank.view_balance()
# my_bank.withdraw('abcd', 20000)

# my_bank.withdraw('abcd', 10000)

# my_bank.withdraw('abcd', 1000)

my_bank.deposit(1000)

print()