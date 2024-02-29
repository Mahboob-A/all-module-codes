"""  
Module date: 011122, Tuesday Watch date: 021122, Wednesday, 06.30 pm 
Week 05: Urban Rides 
Lab Class 05 
18-1 Attributes Validation Using Assert
"""


# Assertion error mane holo assertin e je condition ta deowa thakbe sei ta true. 
# Sei condition meet korlei value accespted hobe 
# and value jodi assertion er condition er songe meet na kore tahole 
#  assertion error and sathe string deowa thakle seta print hobe 


class Person:
        def __init__(self, name, phone, age) -> None:
                assert age > 13, f"Age must be > 13"
                assert len(phone) == 10, f"Phone number is invalid"
                self.name = name 
                self.phone = phone 
                self.age = age 

        def __repr__(self) -> str:
                return f"{self.name} {self.phone} {self.age}"

user = Person("Kemal", "79081843460", 14)
print(user)

# now phone number is invalid assertion error will be displayed 

print(user.__dict__)   #user object er dict attributes i.e variables and value gulo key value pair e print korbe  