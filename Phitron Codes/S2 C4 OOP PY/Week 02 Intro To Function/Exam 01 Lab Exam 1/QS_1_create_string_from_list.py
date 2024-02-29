# """
# QS 01: make a new string from the elements of a list 
# 151022, Saturday, 8.30 am
#
# """

lst = ["This", "is", "very", "fantastic"]


def create_string(a_list):
    joined_str = " ".join(a_list)
    print(joined_str)

create_string(lst)
