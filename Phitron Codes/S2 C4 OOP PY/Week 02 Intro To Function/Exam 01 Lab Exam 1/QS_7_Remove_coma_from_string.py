
# """
# QS 07: Remove the coma with space from a sting 
# 151022, Saturday, 11.30 am
#
# """




def replace_comma_with_space(text):
    text = ' '.join(ch for ch in text.split(','))
    return text


s = "I,have,been,practising,python,since,the,course,started"

output = replace_comma_with_space(s)
print(output)
