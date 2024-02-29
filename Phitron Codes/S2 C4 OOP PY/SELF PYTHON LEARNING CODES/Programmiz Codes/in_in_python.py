## 021022 Sunday 'in' in python 

"""  
in is used to test if a sequence (list, tuple, string etc.) contains a value. 
It returns True if the value is present, else it returns False. For example:

"""

a = "mahboob alam"

# returs true as 'alam' is present in a 
print('alam' in a) 

# returns false as 'ok' in a is not present 
print('ok' in a )

# The secondary use of in is to traverse through a sequence in a for loop.

x = 'hello world'

for i in x :
        print(i)