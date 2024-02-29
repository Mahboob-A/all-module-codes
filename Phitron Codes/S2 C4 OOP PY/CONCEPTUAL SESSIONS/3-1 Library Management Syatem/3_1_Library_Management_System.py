"""  
3-1: Library Management System 
Concept Date: 171022, Monday
Watch Date: 191022, Wednesday, 9.30 pm
"""
# try to implement administration / admin in library 

class User: 
        def __init__(self, name, roll, password):
                self.name = name 
                self.roll = roll 
                self.password = password 
                self.borrow_list = []
                self.returned_list = []

class Library: 
        def __init__(self, book_dict):
                self.book_dict = book_dict 

        def borrow_books(self, bookName, user):
                for book in self.book_dict: 
                        if book.lower() == bookName.lower():
                                if book in user.borrow_list:   #how without inheritance, Library class is accessing User class 
                                        print("You have already borrowed the book. To borrow again return the book first\n")
                                        return 
                                if self.book_dict[book] == 0:
                                        print("The book is out of stock\n")
                                        return 
                                # the user do not have the book and the book quantity is available 
                                self.book_dict[book] -= 1
                                user.borrow_list.append(bookName)
                                print("You have borrowed the book successfully\n")
                                return 
                print("The book is not available\n")

        def return_book(self, bookName, user):
                if bookName in self.book_dict:
                        if bookName in user.borrow_list:
                                self.book_dict[bookName] += 1
                                user.borrow_list.remove(bookName)
                                user.returned_list.append(bookName)
                                print("Book returned successfully\n")
                                return 
                        else:
                                print("Altough we have the book but you have not borrowed it form our library")
                else:
                        print("This book was not taken from this library")

        def book_availability(self, bookName):
                if bookName in self.book_dict:
                        if self.book_dict[bookName] > 0:
                                print(bookName, "is availabe "," | " " quantity: ", self.book_dict[bookName])
                                return 
                print("The book is not available\n")

        
        def all_books_availability(self):
                print("Thsese are the available books: \n")
                for book, i in self.book_dict.items():
                        if i > 0:
                                print(book, " quantity | ", self.book_dict[book])
                print()

        def donate_book(self, bookName, num_of_books):
                if bookName in self.book_dict:
                        self.book_dict[bookName] += num_of_books
                        print("Thank you for your donation")
                        return 
                self.book_dict[bookName] = num_of_books 
                print("Thank you for your donation\n")

        



library = Library({"English" : 5, "Math" : 10, "History" : 7, "Physics" : 6, "Islamic" : 10, "Novel" : 5})

# tracking all the users of the library 
all_users = []

# for sign up and login purpose storing the user when creating account
current_user = None 

check = ["L", "l"]

while True:
        print()
        if current_user == None: 
                print("You Are Not Logged In.\nPress L / l to login and any key to create an account")
                response = input("Your Choice: ")
                if response in check:
                        roll = int(input("Input roll: "))
                        password = input("Input password: ")
                        user_found = False 
                        for user in all_users: 
                                if user.roll == roll and user.password == password: 
                                        current_user = user 
                                        user_found = True 
                                        print("You are now logged in")
                                        break 
                        if user_found == False:
                                print("No user found or credentils are incorrect")
                else:
                        print("\n:::Account Creation:::")
                        name = input("Input name: ")
                        roll = int(input("Input roll: "))
                        password = input("Input password: ")
                        recurring_user = False 
                        for user in all_users:
                                if user.roll == roll:
                                        recurring_user = True 
                        if recurring_user:
                                print("You already have an account. Please log in")
                                continue
                        user = User(name, roll,  password)
                        current_user = user 
                        all_users.append(current_user) 
                        print("::Account Creation Successful::")
        else: 
                print(f"USER: {current_user.name} ROLL: {current_user.roll}")
                print("Welcome To Online Library")
                print(":OPTIONS:")
                print("___________")
                print("Option 1: Borrow Book ")
                print("Option 2: Return Book ")
                print("Option 3: Donate Book ")
                print("Option 4: Borrowed Book List ")
                print("Option 5: Returned Book List ")
                print("Option 6: Check A Book Availabillity ")
                print("Option 7: Check All Books Availability ")
                print("Option 8: Log Out ")
                print("Option 9: See User List ")
                resp = int(input("Input Option: "))
                if resp == 1: 
                        book = input("Input book name to borrow: ")
                        library.borrow_books(book, current_user)
                        print("Current Library Update: ", library.book_dict)
                        print("Current User Update: ", current_user.borrow_list)
                elif resp == 2: 
                        book = input("Input book name to return: ")
                        library.return_book(book, current_user)
                elif resp == 3: 
                        book = input("Input book name to doante: ")
                        book_count = int(input("Input number of book to donate: "))
                        library.donate_book(book, book_count)
                elif resp == 4: 
                        print(current_user.borrow_list)
                elif resp == 5:
                        print(current_user.returned_list)
                elif resp == 6:
                        book = input("Input book name to check availability: ")
                        library.book_availability(book)
                elif resp == 7:
                        library.all_books_availability()
                elif resp == 8: 
                        print("You are now logged out")
                        current_user = None 
                elif resp == 9: 
                        for user in all_users:
                                print(user.name, user.roll, user.password)
                print()
