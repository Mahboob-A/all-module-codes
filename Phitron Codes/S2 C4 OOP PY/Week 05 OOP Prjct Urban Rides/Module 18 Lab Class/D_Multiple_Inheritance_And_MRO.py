# """
# Module date: 011122, Tuesday Watch date: 041122,Friday, 07.00 am 
# Week 05: Urban Rides
# Lab Class 05
# 18-4 Multiple Inheritance And MRO
# """


class School:
        def __init__(self, name) -> None:
                self.schoolName = name 
        def __repr__(self) -> str:
                return f"School({self.schoolName})"
        def say_name(self):   #  for MRO demonstration 
                print(f"School - hello I am {self.schoolName}")

class Teacher:
        def __init__(self, name) -> None:
                self.teacherName = name 
        def __repr__(self) -> str:
                return f"Teacher({self.teacherName})"
        def say_name(self):
                print(f"School - hello I am {self.teacherName}")


class Student(Teacher, School):
        def __init__(self, name, teacherName, schoolName) -> None:
                # calling the parent class using the parent classes itself doesnot follow any order. 
                School.__init__(self, schoolName)
                Teacher.__init__(self, teacherName)

                # super maintains order and super always calls the 1st parent class. 
                # we can not call call more than one parent class using super, the below 2nd super call will also call the Teacher class not School class 
                # super().__init__(teacherName)
                super().__init__(schoolName)
                super().__init__(teacherName)
                
                # when we need to call more than one parent class i.e when we inherit multiple parent class and we want to initialize them 
                # then we can initialize them with the parent class itself like above. Calling via parent class need to pass the self and 
                # calling via super does not need self.
                
                self.studentName = name 
        def __repr__(self) -> str:
                return f"Student({self.studentName})"

        def say_name(self):
                print(f"School - hello I am {self.studentName}")   

# we are taking the parameter for Student class's parent class also to initialize them from Child class 
student = Student("Kemal", "Mr. Jamal", "Primary School")

print(student.teacherName, student.schoolName)

student.say_name()

# MRO (METHOD RESOLUTION ORDER)
# MRO follows order. If we have same type of method in multiple parent calsses but do not in child class and call the method using 
# child class, the method of 1st parent class inheritated in child class will be executed and if we implement the same class in the child class 
# also then the method of child class will be executed. 