# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 03,30 pm
# 5-8 Explore Iterator and Generator
print()


# """  
# Generator is more like the iterator. Generator is made using " yield " keyword 
# To get the values returned by yield keyword, we need to use the " next " keyword 
# 
# """

a_list = [12, 34, 65, 45, 6, 55]

def create_generator(numbers) : 
        for num in numbers :
                yield num 

result = create_generator(a_list)

try: 

        print(next(result))
        print(next(result))
        print("kul")
        print(next(result))
        print("hello")
        print(next(result))
        print(next(result))
        print(next(result))
        print("ok")

        print(next(result))
except StopIteration: 
        print("Iteration Ended")

print()