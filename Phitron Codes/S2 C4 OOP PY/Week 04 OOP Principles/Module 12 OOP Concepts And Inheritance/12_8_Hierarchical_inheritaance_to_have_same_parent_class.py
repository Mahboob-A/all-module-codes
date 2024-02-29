# Week 04, Module 12: OOP Concpets And Ingeritance
# Mod Date: 221022, Saturday | Watch date: 241022, Monday
# 12-8: Hierarchical inheritance to have same parent class
# 07.45 pm

class Employee:
        def __init__(self, name, id, salary, position):
                self.name = name 
                self.id = id 
                self.salary = salary 
                self.position = position 

        def __repr__(self):
                print("Employee Name: {} | Id: {} | Salary {} | Position {}".format(self.name, self.id, self.salary, self.position))


class Dev(Employee):
        def __init__(self, name, id, salary, position, tech, focus):
                super().__init__(name, id, salary, position)
                self.tech = tech 
                self.focus = focus 

class Tester(Employee):
        pass 

class TeamLead(Employee):
        pass

# this is how a hierarchical inheritance takes palce 
# it is similar to single inheritance 
# but to examine a close extent, we see we are creating a tree like structure here 
# that the parent is Employee and all other classes are its sons. 