# """
# ALL MIXED CODE 2
# CONCEPT DATE: 101022, MONDAY
# WATCH DATE: 131022, THURSDAY
# 05.00 PM 
# """

y_dict = {1: 123, 2: 346, 3: 345}
print(type(y_dict))
y_dict[1] = 111
print(y_dict)
print(y_dict[1])


a_set = {1, 3, 4, 5, 5, 6}
print(a_set)
# print(a_set[1])
b_set = {'ok', 'oj', 'af', 'ef', 'af', 'iuy'}
print(b_set)

# set er moddhe mutable dt thakte pare na,
# altough set holo mutable, but set er value gulo immutable hote hobe
# c_set = {[1, 2, 3, 4], [2, 4, 5, 6], [4, 6, 78, 'ok']}
# c_set = {y_dict}
# print(c_set)

b_set.add('add it')
print(b_set)
