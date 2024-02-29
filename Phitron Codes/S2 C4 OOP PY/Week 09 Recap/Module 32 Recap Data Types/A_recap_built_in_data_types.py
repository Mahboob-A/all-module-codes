"""  
Py week 09: Recap week 
mod date: 281122, Monday
mod: 32 - Recap built-in data types, slicing, lambda function, zip 
32-1: Built - in data types in python 
291122, Tuesday, 10.30 am 
"""

# list 
lst = [1, 2, 3, 4, 5]
lst2 = [6, 7, 8, 9]

# add two list 
# print(lst + lst2)

# accessing value of a complex list | access 32 from lst 
lst = [1, 2, [3, 4, [5, 6, [7, 8, [9, 10, [11, 12, [13, 14, [15, 16, [17, 18, 19, 20, [21, 22, 23, [24, 25, 27, 28, [29, [30, 31, 32]]]]]]]]]]]]]
# print(lst)
# accessing 32 by indexing 
x = lst[2][2][2][2][2][2][2][2][4][3][4][1][2]
# print(x)

# checking if the value is present in lst[2]
# print(3 in lst[2])

lst.insert(0, 100)
# print(lst)
# insert takes a index and a value and it inserts the value in that index 
lst.insert(3, 100)
# print(lst)

# index takes a value and returns its index 
# print(lst.index(100))

newList = [12, 3, 45, 6, 7, 10]

# using append, we can add a value to the end of a list 
newList.append(100)

# using extend, we can add a list to the end of a list 
# newList.extend([101, 102, 103])
# print(newList)

# we can count how many a number are in a datatype using count 
# print(newList.count(3))

##########
# ########### tuple ############## immutable 
tp = (1, 2, 3, 4, 5, [7, 8, 9, 10])
# can not reassign 
# tp[0] = 100 

# but can assign value if tuple has mutable dt
tp[5][0]= 100
# but can not change tp[5] = 100 cause tp[5] is itself an element of the tuple 
# print(tp)

#################
######### dict ################ 

child1 = {
        'name' : 'john',
        'year' : 2004
}

child2 = {
        'name' : 'emelia',
        'year' : 2003
}

child3 = {
        'name' : 'tom',
        'year' : 2002
}

myfamily = {
        "child1" : child1,
        "child2" : child2,
        "child3" : child3
}

# accessing value of dict | this way is dangarous because if the key is wrong then the programme crashes 
# print(myfamily['child1']['year'])

# assessing the value using get()
# print(myfamily.get('child1', 'The key is invalid').get('name', 'The key is invalid'))

# convert a tuple of list into a dict 
# a = [(1, 'A'), (2, 'B'), (3, 'C')]
# a[0] = (1, 'Z')
# new_dict = dict(a)
# print(new_dict)
a = dict([(1, 'A'), (2, 'B'), (3, 'C')])
print(a)
# deleting one key value pair using pop | pop takes the key to delete 
a.pop(1)

# assessing if a key is present in a dict
# print(2 in a)
# print(3 in a.keys())
# # assessign a value is present in a dict 
# print('B' in a.values())
# print(a)



###############
####### set ######## unordered dt ##### removes all the dupes | no indexing 
st = {1, 2, 3, 3,3, 3, 3,3, 4, 5}
print(st)
# print(st[2]) no indexing 
st.add(10)   # adding new element 
print(st)

########### string ######### immutable 
s = 'I 100 love python'
print(s[0])

# can access the value using indexing but cannot reassign value 
# s[0] = 'i'
# print(s)

# check if str has  numeric or alphabet 
print(s[0].isalpha())
print(s[2].isnumeric())
print(s[2].isalnum())








