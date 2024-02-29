# """
# QS 09: change the string with the string in list replaced_with's i+1 if word in list and string s matches 
# 151022, Saturday, 06.00 pm
#
# """

replace_with = ["chief", "thief", "superintendent",
                "sweeper", "married", "left", "tried", "died"]

s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."


def replace_word(a_list, a_str):

    split_s = a_str.split()

    for i, ch in enumerate(a_list):
        for wrd in split_s:
            if ch == wrd:
                a_str = a_str.replace(ch, a_list[i+1])

    print(a_str)


replace_word(replace_with, s)
