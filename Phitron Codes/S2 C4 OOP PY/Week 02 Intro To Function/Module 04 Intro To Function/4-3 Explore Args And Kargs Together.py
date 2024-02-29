# 091022, Sunday, 04.30 pm
# Week 02, Intro To Function
#  4-3 Explore Args And Kargs Together

# args works as touple and kargs works as dictionary. 
# we need to use ** two star to use kargs 
# and we need to pass both the key and value 
def add(num1, *args, **kargs) :
        print("Just num1: ",num1)
        print("args as touple: ", args)
        print("kargs as dictionary: ", kargs)
        for num in args:
                print("args: ",  num)
        
        for key, value in kargs.items() :
                print("key: ", key, " | " "value: ", value)


add(10, 20, 30, name = 'ok', age = 40)

