# Week 04, Module 12: OOP Concpets And Ingeritance
# Mod Date: 221022, Saturday | Watch date: 241022, Monday
# 12-7: Multiple Inheritance wirth school and sports 
# 07.00 pm

# This is multiple inheritance 

class School:
        def __init__(self, name):
                self.school_name = name
                print("School __init__ called")

class Grade:
        def __init__(self, grade_name):
                self.grade_name = grade_name 
                print("Grade class __init__ called")

        def  tell_grade(self):
                print("Grade is {}".format(self.grade_name))

class SporsTeam:
        def __init__(self, sport_name) -> None:
                self.sport_name = sport_name
                self.team = []
                print('SportsTeam __init__ called')

        def add_player(self, player_name):
                self.team.append(player_name)

# an object of school class can access everyting of the three classes 
class Student(School, Grade, SporsTeam):   # multiple inheritance 
        def __init__(self, name, grade_name, school_name, sports_name):
                self.name = name 
                Grade.__init__(self, grade_name)  # multiple inheritance hole class name diye call korte hobe parent ke  
                School.__init__(self, school_name)
                # super().__init__(grade_name)  # both of this call will call school init 
                # super().__init__(school_name)  #calling with super 
                SporsTeam.__init__(self, sports_name)  # calling soprtsteam calls 
                print("Student __init__ called")

                # multiple inheritance hole class neme diye  parent class er init ke call korte hobe 
                # and akhetre self ke must pass korte hobe  



stu = Student('Kamal', 5, 'New School', 'Cricket')

print(stu.name)
print(stu.grade_name)
print(stu.school_name)
print(stu.sport_name)
stu.add_player('Jamal')
stu.add_player('Kalam')
print(stu.team)

stu.tell_grade()