"""  
Module: 13.5 :: Pr day 01
261022, Wednesday, 07.00 am
QS 01: Programme to count number of instances of a class
"""


class Student:

    count = 0

    def __init__(self, name, roll, marks):
        self.name = name
        self.roll = roll
        self.marks = marks  
        # why when Student.count += 1 this is not invoked, values of all the instances remain 1 of count? ask. 
        self.count += 1  # this marks the chronological number of creation of instances
        Student.count += 1  # this changes the class variable

    def add_school(self, school):
        self.school = school


stu = Student('Kemal', 21, 88)
stu2 = Student('Jamal', 18, 77)
stu3 = Student('Nihan', 25, 90)
stu4 = Student('Karam', 28, 67)

print(stu.count)
print(stu2.count)
print(stu3.count)
print(stu4.count)

print(Student.count)
