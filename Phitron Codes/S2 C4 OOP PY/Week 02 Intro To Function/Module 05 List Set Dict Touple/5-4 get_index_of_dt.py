# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 07.00 am
# 5-4 How to Loop through list, set, tuple and dictionary

# if we need index of the dt, then we can use " enuremerate " to get the index 
# for list, touple and set, getting the index value is same just like below: 

a_list = [10, 45, 67, 34, 65]

# getting the value and the index of the list 
# in the below example, we will get each index and its value as a touple 
for val in enumerate(a_list) : 
        print(val)

print()

# what if we need the index seperately? then we just need to use an extra variable 
# here we will get the indexs in the i seperately 
for i, val in enumerate(a_list) :
        print(i, val)


print()


# getting the index value of a dict 
# dict 
a_dict = {"math": 99, "phy": 88, "chem": 80}

# while getting the index of a dict, we need to follow the below procedure only, 
# we canot use .items() here. We need to get the value through the key from the dict 
for i, key in enumerate(a_dict) :
        val = a_dict[key]
        print(i, key, val)
