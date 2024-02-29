# """
# QS 10: make string using the string in list a + the i+1 word in string s 
# 151022, Saturday, 06.00 pm
#
# """

""""
a = ['Oh', 'Emelia', 'to']
s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

# making the list of string items into lower case
# x = map(lambda wrd: wrd.lower(), a)
# lower_list = list(x)

# making the string words into lower case
# lower_str = s.lower()


# skipping the unwanted special characters
skip = [',', '.']
new_string = ""
for ch in s:
    if ch not in skip:
        new_string += ch

# spliting the new_string with white space
split_new_str = new_string.split()


result_str = ""
for ch in a:
    new_str = ""
    for i, wrd in enumerate(split_new_str):
        if ch.lower() == wrd.lower():
            new_str = split_new_str[i+1]

    result_str += new_str + " "

result_file = open('new_txt', 'w')
result_file.write(result_str)
result_file.close()

"""

a = ['Oh', 'Emelia', 'to']
s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."


def create_new_string(a_list, a_str):

    # skipping the unwanted special characters
    skip = [',', '.']
    new_string = ""
    for ch in a_str:
        if ch not in skip:
            new_string += ch

    # spliting the new_string with white space
    split_new_str = new_string.split()

    result_str = ""
    for ch in a_list:
        new_str = ""
        for i, wrd in enumerate(split_new_str):
            if ch.lower() == wrd.lower():
                new_str = split_new_str[i+1]

        result_str += new_str + " "

    result_file = open('new_txt', 'w')
    result_file.write(result_str)
    result_file.close()


create_new_string(a, s)
