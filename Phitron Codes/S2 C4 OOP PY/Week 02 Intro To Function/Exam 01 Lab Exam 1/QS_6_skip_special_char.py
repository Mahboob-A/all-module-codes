# """
# QS 06: Remove the special characters from the string 
# 151022, Saturday, 11.30 am
#
# """
"""
skip = [':', ',', '-', ';', '.', '!', '@', '#', '%',
    '$', '^', '&', '*', '+', '_', '=', '?', '<', '>']


def clean_string(text):
    new_str = ""
    for ch in text:
        if ch not in skip:
            new_str += ch

    return new_str


s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)


"""
# Another method: 

skip = [':', ',', '-', ';', '.', '!', '@', '#', '%',
    '$', '^', '&', '*', '+', '_', '=', '?', '<', '>', ' ']


def clean_string(text):
        text = ''.join(ch for ch in text if not ch in skip)

        return text 

s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)


