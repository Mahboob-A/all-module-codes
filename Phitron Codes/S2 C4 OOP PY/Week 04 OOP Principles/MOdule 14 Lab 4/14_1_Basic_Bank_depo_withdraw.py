""" Basic Bank Deposit And Withdrawl """

"""  
Mod: 14_1: Bank depo withdraw
271022, Thursday, 07.00 am 
14-2 handle_a_bank
"""
from random import randint

class Bank:
        acc_num = randint(10, 1000)

        def __init__(self, name, age, aadhar, balance):
                self.name = name 
                self.age = age 
                self.aadhar = aadhar 
                self.balance = balance
                self.account_id = Bank.acc_num+1 

        def __repr__(self):
                return "Customer name: {} | Customer age {} | Customer Aadhaar id {} | Customer balance {}".format(self.name, self.age, self.aadhar, self.balance)
        def depo(self, amount):
                self.balance += amount 
                print("Dear {}, Your add money is successful!".format(self.name))
        
        def withdraw(self, amount):
                if amount>self.balance:
                        print("Dear, {} you have insufficient balance in your account\nYou have tried to withdraw Rs. {} but you have Rs. {} in your account".format(self.name, amount, self.balance))
                else:
                        self.balance -= amount
                        print("Dear, {} Your money withdraw is sussessful!\nYour current balance is {}\n".format(self.name, self.balance))


        
cus_1 = Bank('Kemal', 20, 43465, 500)
cus_2 = Bank('Jamal', 21, 345323, 1000)
cus_3 = Bank('Nihan', 19, 34563, 2000)

# print(cus_1,"\n",cus_2,"\n",cus_3)

cus_1.depo(1000)
cus_2.depo(1000)
cus_3.depo(3000)
# print(cus_1)
print(cus_1,"\n",cus_2,"\n",cus_3)

cus_1.withdraw(700)
cus_2.withdraw(1500)
cus_3.withdraw(2500)

print("\n",cus_1,"\n",cus_2,"\n",cus_3)

print("\n")
cus_1.withdraw(700)
cus_2.withdraw(1500)
cus_3.withdraw(2501)
