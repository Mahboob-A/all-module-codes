# week 04 : OOP Principles
# Module 13: Principles of OOP
# Mod Date: 23102, Sunday, Watch Date: 241022, + Tuesday
# 13-4: Encapsulation 
# 10.30 am 

class Account:
        def __init__(self, account_holder, initial_balance):
                self.__holder = account_holder 
                self._balance = initial_balance 

        def deposit(self, amount):
                print("{} Money added to bank accont".format(amount))
                self._balance += amount 

        def withdraw(self, amount):
                print("{} Money withdrawn".format(amount))
                self._balance -= amount 

class StudentAccount(Account):
        def __init__(self, name, opening_balance, school_name):
                self.__school = school_name
                super().__init__(name, opening_balance)

        @property
        def get_school(self):
                return self.__school

        def get_balance(self):
                return self._balance 

user = StudentAccount('Kemal', 5000, 'International School')

# print(user.__holder)  # can not access a private instance variable outside the class
# print(user.__balance)
# print(user.school)  # school is also private thus cannot access like this
print(user.get_school)  #  getting school from a method 
print(user._balance)   # although _balance is protected, we can read and write a protected thing outside class jsut like publilc things 
user._balance = 10000
print(user.get_balance())  

# although we can access any private member like the below method 
# obj._Class__PrivateMember 
# changing the prinvate member's vlaue in this way 
user._StudentAccount__school = 'New School'
print(user._StudentAccount__school) 
user.__school = 'now school'
print(user.__school)
#  we can print dir() to see all the things that are in scope of the class 
print(dir())
print()
print(dir(user))