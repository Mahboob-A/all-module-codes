# """
# Module date: 011122, Tuesday Watch date: 041122,Friday, 09.00 am
# Week 05: Urban Rides
# Lab Class 05
# 18-5 Duck Typing
# """


# Example 01: 

# class Teacher:
#         def __init__(self, name) -> None:
#                 self.name = name 
#                 self.students= []

# class Student:
#         def __init__(self, name) -> None:
#                 self.name = name

#         def insert_in_teacher(self, teacher_obj):
#                 teacher_obj.students.append(self)

#         def __repr__(self) -> str:
#                 return f"Student({self.name})"

        
# tch1 = Teacher("Teacher 1")
# tch2 = Teacher("Teacher 2")
# tch3 = Teacher("Teacher 3")

# st1 = Student("Kemal")
# st2 = Student("Jamal")

# st1.insert_in_teacher(tch1)  # passing only the techer object that need to be inserted teacher 
# st2.insert_in_teacher(tch2)

# print(tch1.students)
# print(tch2.students)
# print(tch3.students)


# Example 02: 

class School:
        def __init__(self, name) -> None:
                self.schoolName = name 

        def say_hello(self):
                print("Hello from School {}".format(self.schoolName))

class Teacher:
        def __init__(self, name) -> None:
                self.teacherName = name 

        def say_hello(self):
            print("Hello from Teacher {}".format(self.teacherName))

class Student:
        def __init__(self, name, obj) -> None:
                self.name = name
                obj.say_hello()  #obj will call its respected method as I just need to work with this object, I dont need to inherit the whole class rather I can pass the obj and do any task I want to do 

        def __repr__(self) -> str:
                return f"Student({self.name})"


school = School("Raghunathganj High School")
teacher = Teacher("Respected sir")

kemal = Student("Kemal", school)  # passing only the techer object that need to be called 
jamal = Student("Jamal", teacher)  #
        


