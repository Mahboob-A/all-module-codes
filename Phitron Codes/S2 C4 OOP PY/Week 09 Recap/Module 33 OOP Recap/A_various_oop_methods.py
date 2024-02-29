"""  
Week 09: Recap week 
Module 33: OOP Recap
Mod 33-1 : 33-1_ Class method, Static method, Abstract class
Mod date: 291122, Tuesday
Watch date: 011222, Thursday, 12.30 pm 
"""

# Instance Method
# Static Method
# Class Method
# Abstract Method

from re import S


class School:
        school_name = 'New School'  # class variable 

        def __init__(self, name) -> None:   
                self.name = name           # instance variable 
        
        def printName(self):
                print(self.name)
        
        # we can access the class variable using instance method 
        def printClassVarName(self):
                print(self.school_name)
        
        # we can change class variable using instance variable only for that calling instance, not for all the instances of the class 
        # to change the class variable to all the instances, we need to use class method 
        def changeClassVarName(self, name):   # instance method 
                self.school_name = name

        # we can change the class variable using class method for all instances
        @classmethod
        def change_class_var_name_cls_mtd(cls, name):
                cls.school_name = name 

        # it's obbivious that we can access class variable using class method 
        @classmethod
        def print_cls_var_name_cls_mtd(cls):
                print(cls.school_name)

        # this method will throw error. We can not access instance variable using class method 
        @classmethod
        def print_instance_name_cls_mtd(cls):
                print(cls.name)

        # we use static method when we do not need to access any attribute of the class i.e class and instance variable or methods
        @staticmethod
        def greet():
                print("Hello Friends!")

        



if __name__ == '__main__':

        s1 = School('Modern School')
        s2 = School('Ok School')
        # s1.printName()
        # s1.printClassVarName()

        # s1.changeClassVarName('Brand New School')

        # we generally use the class name to access the class method 
        # s2.change_class_var_name_cls_mtd('ok')
        School.change_class_var_name_cls_mtd('ok')

        s2.printClassVarName()
        s1.printClassVarName()

        s1.print_cls_var_name_cls_mtd()
        s2.print_cls_var_name_cls_mtd()

        # we can not access instance variable using class variable / class method | the below func will throw error
        # but we can access class variable using instance variable 
        # s1.print_instance_name_cls_mtd()
        # s2.print_instance_name_cls_mtd()


        s1.printName()
        s2.printName()

        s1.greet()

















