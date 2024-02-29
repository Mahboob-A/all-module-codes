# Module 13: Principles of OOP
# Mod Date: 23102, Sunday, Watch Date: 241022, + Tuesday
# 13-8: read_only_property_and_property_deleter
# 08.45 pm 


class Student:
        def __init__(self, name, roll) -> None:
                self.__name = name 
                self.__roll = roll 

        # property is real only we can only access the values as read only,
        # to set value to private properties i.e private attributes, we need to make setter 

        @property
        def name(self):
                return self.__name 

        @name.setter 
        def set_name(self, value):
                self.__name = value 

        @name.deleter
        def del_name(self):  # we also can make these method's name same as the @property method name  
                del self.__name 

        @property 
        def see_roll(self):
                return self.__roll 

stu = Student("Kemal", 20)

# print(stu.__name)
# print(stu.__roll)

print(stu.name)

# stu.setting_new_name("new") if we do not want to make property setter, then we just can create a different method to set values to private attributes like this one 

#setter using property 
stu.set_name = "New Name"

print(stu.name)

# del stu.del_name   #deleting provate attribute using property deleter

print(stu.name)

stu.set_name = "kul name"

print(stu.name)

print(stu.see_roll)

"""  
if we want to use setter deleter or getter; we need to use property.
@property : getter and read only 
@property method.setter : value setter to any kind of attricute 
@property method.deleter : delete's attribute 

"""