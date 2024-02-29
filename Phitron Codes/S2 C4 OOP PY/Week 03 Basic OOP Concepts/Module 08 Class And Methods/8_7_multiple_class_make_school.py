"""  
Week 03: Basics of OOP Concepts 
Module 08: Class And Methods 
08 - 7: Make class using multiple class 
171022, Monday, 03.00 pm 

"""

class Student: 
        def __init__(self, name, st_classs, roll):
                self.name = name 
                self.st_class = st_classs 
                self.roll = roll 

class Course:
        def __init__(self, name, teacher):
                self.name = name 
                self.teacher = teacher 

class Teacher:
        def __init__(self, name, course):
                self.name = name 
                self.course = course 

class School:
        def __init__(self, name, students, teachers, courses):
                self.name = name 
                self.students = students 
                self.teachers = teachers 
                self.courses = courses 

        def get_students(self):
                for st in self.students:
                        print(st.name, st.st_class, st.roll)
        
        def get_courses(self):
                for course in self.courses:
                        print(course.name, course.teacher)

        def get_teachers(self):
                self.get_courses()


school_name = 'Phitron Uccho Viddalaya'

st_1 = Student('Abul Kalam', 12, 20)
st_2 = Student('Rokaiya Banu', 12, 56)
st_3 = Student('Hasan Khan', 12, 28)

c_course = Course('C Course', 'Pritom Kundu')
ds_course = Course('Data Structure', 'Akib Jaman')
algo_course = Course('Algorighm Made Easy', 'Rahat Khan Pathan')

teacher_1 = Teacher('Pritom Kundu', c_course)
teacher_2 = Teacher('Akib Jaman', ds_course)
teacher_3 = Teacher('Rahat Khan Pathan', algo_course)

students_lst = [st_1, st_2, st_3]
courses_lst = [c_course, ds_course, algo_course]
teachers_lst = [teacher_1, teacher_2, teacher_3]

our_school = School(school_name, students_lst, teachers_lst, courses_lst)

print()
our_school.get_courses()
print()
our_school.get_students()
print()
our_school.get_teachers()
print()

