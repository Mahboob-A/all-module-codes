#Module 06, Lab Class 02
# 121022, Wednesday, 04.00 pm 
# 6_4_from_list_to_dict

# """  
# There will a list. We need to form a dict
# using the vaues in the list. The key will be the string which has @ in its beginning and the 
# value will be the next string of @ string 
# """

a_list = ['@f1', 'I', '4', '!', '@f2', 'am', '&f', ')', '@f3', 'learnig', '*', '1@', 'p', '@f4', 'programming']

# expected: {@f as key : and later string as value}

op_dict = {}

for idx, val in enumerate(a_list) : 
        if val[0] == '@' : 
                op_dict[val] = a_list[idx+1]
        if op_dict.values == idx+1 :
                continue
        print(idx)

print(op_dict)