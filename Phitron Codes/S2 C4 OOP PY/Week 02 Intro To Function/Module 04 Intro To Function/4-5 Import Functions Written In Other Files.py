# # 091022, Sunday, 08.30 pm
# Week 02, Intro To Function
# 4-5 Import Functions Written In Other Files


"""  
We can import other files functions in current file. We need to use import keyword to inlcude a file in current file 
Here we will import the " functions " file 

"""

# we can import the full file using 
# import functions 
# and we have to use functions.function_name() like this 

# way  01: Import all 
# import functions 
# x = functions.add(10, 20)


# way 02: import particular functions 
# from functions import add, multiply 
# x = add(50, 100)

# way 03: import all using asteris * 
# this methid also works as import functions but we do not need to write file_name.functon_name(),
# rather using this method, we can directly use the functions 
from functions import * 

x = add(100, 200)





print(x)








