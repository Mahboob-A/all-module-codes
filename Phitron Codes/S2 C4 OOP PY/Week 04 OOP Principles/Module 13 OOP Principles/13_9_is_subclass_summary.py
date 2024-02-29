# Module 13: Principles of OOP
# Mod Date: 23102, Sunday, Watch Date: 241022, + Tuesday
# 13-9: is_subclass_summary
# 09.30 pm 


class Furniture:
        def __init__(self, name) -> None:
                self.name = name

        
class Chair(Furniture):
        def __init__(self, name) -> None:
                super().__init__(name)


class Sofa: 
        def __init__(self) -> None:
                pass 
        def seat_on_sofa(self):
                raise NotImplementedError   
                # notimplementedError is opposite to pass, where pass does not raise any error if 
                # there are no code, but this one rases error 

wooden_chair = Chair("Ni;kamal")

sofa = Sofa()

# we use issubclass to check if 1st class is subclass of 2nd class 
print(issubclass(Chair, Furniture))  
print(issubclass(Sofa, Furniture))

# we use isinstance to check if 1st obj is instance of 2nd class 
print(isinstance(wooden_chair, Chair))
print(isinstance(wooden_chair, Furniture))

print(isinstance(sofa, Chair))


# this also used in asbtract class 
# rasises NotImplementedError
# sofa.seat_on_sofa()
