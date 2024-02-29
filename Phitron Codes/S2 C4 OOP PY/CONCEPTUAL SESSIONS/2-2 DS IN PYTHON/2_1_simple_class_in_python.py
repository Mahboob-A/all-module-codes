# """  
# A simple class in python 
# conceptual date: 121022, Wednesday
# watch date: 131022, Thursday 
# 
# """

# creating a class 
class Node: 
        # creating a class constructure we need to use __init__ to declare a construcure and we need to receive self 
        # in first parameter of any class function 
        # creating a constructure 
        def __init__(self, val):
                val += 100 
                self.a_member = val 
        
        def just_a_print_fn(self):
                print("printing a_member from just a print_fn: ", self.a_member)


# in python as we know that there is no main function, so, many choose to define a main() fn and 
# write all the driving code in the main fn and call it outside so that it may look more organised and 
# it becomes more readable 

def main():

        # in py, to declare an object of a class, we first write the name of the obj and then initiliaze it with the class
        # while in cpp, we first wrote the class name and then the object name 
        obj = Node(50)

        # accessing the class fn using the class object 
        obj.just_a_print_fn()


# calling main fn 
main()