""" Basic concept of inheritance  """

"""
Mod: 14-3 project_mankind
271022, Thursday, 04.00 pm
14-3 Basic concept of inheritance
"""


class Mankind:
       def __init__(self, gender, height, weight):
              if gender == str:
                     self.gender = gender
              else:
                     print("Please give str type value for gender")
              if height and weight == float:
                     self.height = height
                     self.weight = weight
              else:
                     print("Please give float type value for height and weight")

              def __repr__(self) -> str:
                     return f"Gender: {self.gender} | Height: {self.height} | Weight: {self.weight}"


class Doctor(Mankind):
       def __init__(self, name, age, love_to_treat, gender, height, weight):
                super().__init__(gender, height, weight)
                if name == str:
                        self.name = name
                else:
                       print("Please give str type value for name")
                if age == int:
                       self.age = age
                else:
                        print("Please give int type value for age")
                if love_to_treat == True or love_to_treat == False:
                       self.love_to_treat = love_to_treat
                else:
                       print("Please give again bool type answer for love_to_treat question")


class Engineer(Mankind):
        def __init__(self, name, age, love_to_code, gender, height, weight):
                super().__init__(gender, height, weight)
                if name == str:
                       self.name = name
                else:
                       print("Please give str type value for name")
                if age == int:
                       self.age = age
                if love_to_code == True or love_to_code == False:
                       self.love_to_code = love_to_code
                else:
                       print("Please give again bool type answer for love_to_code question")


if __name__  == '__main__':
       # doc = Doctor(123, 'alhf', 345, 3453, 'afj', 'ashf')
       doc = Doctor('Doc', 23, True, 'male', 68.0, 60.0)

       print(doc)
