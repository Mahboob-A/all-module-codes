# Week 04, Module 12: OOP Concpets And Ingeritance
# Mod Date: 221022, Saturday | Watch date: 241022, Monday
# 12-3: constructure and destructure 
# 09.00 am

class School:
        def __init__(self, name, address, principal) -> None:
                self.name = name 
                self.address = address 
                self.principal = principal
                self.grades = []  # self.grades holds all Grade class objects that are appended from add_grade 
        
        def __repr__(self) -> str:
            return f"School name: {self.name} Address: {self.address} and principal: {self.principal}"


        def add_grade(self, name, teacher):
                a_grade = Grade(name, teacher)   #calling another class inside a class 
                self.grades.append(a_grade)        

        def remove_grade(self, grade_name):
                idx = 0 
                for i, grade in enumerate(self.grades):
                        if grade.name == grade_name:
                                idx = i 
                                break 
                del self.grades[idx]  # deleting that index's object a_grade instance of Grade 
                # whenever we delete an object of Grade class, as we have initialize __del__ dunder in Grade, we will see the print message 

class Grade:
        def __init__(self, name, teacher) -> None:
                self.students = []
                self.name = name 
                self.teacher = teacher 

        def __repr__(self) -> str:
            return f"Class is: {self.name} with teacher: {self.teacher}"

        # destructure dunder # 
        def __del__(self):
                print(f"Deleting {self.name} object with teacher {self.teacher}")
                
a_school = School('A Brank New School', 'New Adddress', 'Kamal')
a_school.add_grade('5', 'Nazma mam')
a_school.add_grade('3', 'Jamal')

print()
print(a_school)
print(a_school.grades)

print()
a_school.remove_grade('5')

# after deleting 5, we will see the same prompt fot 3, Jamal too. Because when the programme stops, it automatically deletes all other memory consumed by the programme 
