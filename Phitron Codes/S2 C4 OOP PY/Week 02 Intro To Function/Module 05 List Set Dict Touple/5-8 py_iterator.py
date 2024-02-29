# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 01.00 pm
# 5-8 Explore Iterator and Generator 
print()
# """  
# Iterator gives one value at once one by one 
# and to get the value one by one, we need to use " next() " function 
# iter() takes a dt and returns one value at a time 
# 
# We also use iter inside try and except block to stop unexpected crash of program when the iteration stops 
# 
# """

a_list = [23, 45, 56, 34, 43, 32, 54, 76, 87]

list_iter = iter(a_list)

try: 
        print(next(list_iter))
        print("i am learning")
        print(next(list_iter))
        print(next(list_iter))
        print(next(list_iter))
        print(next(list_iter))
        print("Ok")
        print("kul")
        print(next(list_iter))
        print(next(list_iter))
        print(next(list_iter))
        print("kul boi")
        print(next(list_iter))

        print(next(list_iter))
except  StopIteration:
        print("Iteration ended")

print()