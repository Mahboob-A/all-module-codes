"""  
Module: 13.5 :: Pr day 01
261022, Wednesday, 07.00 pm
QS 02: call a function with and without decorator 
"""

# https://pythonistaplanet.com/difference-between-method-overloading-and-method-overriding/

# polymorphism 
"""  
To understand method overloading and overriding, you must know the concept of polymorphism. Poly means many. Morphism means forms. So, polymorphism means “many forms”. In programming terms, it means that there can be many functions with the same name but different forms, arguments, or operations.
"""

# diff between overloading and overriding 
"""  
Method Overloading	Method Overriding
Method with same name but different number of arguments	Method with same name and same number of arguments
Inheritance is optional	Inheritance required
Takes place in methods within a class	Methods reside in different classes
Can be done within a class	At least 2 classes are required
Binding of overloaded methods is done at compile-time; hence it is part of compile-time polymorphism	Binding of overridden methods is done at run-time; hence it is part of run-time polymorphism
Static method can be overloaded	Static methods cannot be overridden
Increases code reusability	Used in implementation of specific scenarios
Relates with Polymorphism	Relates with Inheritance
"""


# method overloading 
""" 
As the name suggests, we are overloading the methods, which means there would be many methods with the same name within a class, but having a different number of arguments.
"""
class OverloadingExample:
   def add(self,a,b):
       print(a+b)
   def add(self,a,b,c):
       print(a+b+c)
       
a=OverloadingExample()
a.add(5,10)
a.add(5,10,20)


##########
# Note: Python does not support method overloading, this is because python always picks up the latest defined method. We can still overload methods in python but it would be of no use. However, you can implement method overloading in the above way in Java, C++, etc.
##########

# typical method overloading in py
class OverloadingExample:
    def add(self, x = None, y = None):
        if x != None and y != None:
            return x + y
        elif x != None:
            return x
        else:
            return 0

obj = OverloadingExample()

print("Value:", obj.add())
print("Value:", obj.add(4))
print("Value:", obj.add(10,20))



# Method overriding 
"""  
Method Overriding
In method overriding, we will have many methods, and this time the number of arguments will also be the same.

Now you must be wondering how these methods are different from each other if their name and signatures are the same. So, the answer is that they differ in location. Methods will be placed in different classes.

"""


class Class1:
    def display(self):
        print("Hello from Class1")


class Class2(Class1):
    def display(self):
        print("Hello from Class2")


c2 = Class2()
c2.display()


# Here, Class2 inherits Class1. Hence, the objects of Class2 should be able to access the methods of Class1. But since the method names are the same in both classes, the method in the child class overrides the method in the parent class .

# So, if you want to access overridden methods inside the child class, you need to use the super() method.


class Class1:
    def display(self):
        print("Hello from Class1")


class Class2(Class1):
    def display(self):
        print("Hello from Class2")
        super().display()


c2 = Class2()
c2.display()
