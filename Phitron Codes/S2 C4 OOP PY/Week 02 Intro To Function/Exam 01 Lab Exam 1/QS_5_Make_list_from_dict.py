# """
# QS 05: Convert a dict to list. Key will 1st and value will be 2nd in the list 
# 151022, Saturday, 11.00 am
#
# """

# x = {'a': 1, 'b' :  2, 'c': 3, 'd': 4}

d = {'!': 1, '@': 2, '#': 3, '$': 4, '%': 5, '^': 6}


def create_list(a_dict):
        result_list = []
        for k, v in a_dict.items():
                result_list.append(k)
                result_list.append(v)

        print(result_list)


create_list(d)

