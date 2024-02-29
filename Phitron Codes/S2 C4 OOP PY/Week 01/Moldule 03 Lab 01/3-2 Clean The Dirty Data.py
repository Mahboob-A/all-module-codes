# 081022, Saturday, 9.30 am; Mod date: 051022, Wednesday  
# clean the dirty data it means find the selected data from a string of set of data 
# here, in this example, we will be given a stirng and we need to find the vowels from it 

print()

data = input("give us a data to clean: ")

# making the data lowercase 
# make_data_lowercase = data.lower()

# taking a empty string 
output_data = ""

# getting the vowels only 
""" 
for char in data :
    if (char == 'a') or (char == 'e') or (char == 'i') or (char == 'o') or (char == 'u') or (char == 'A') or (char == 'E') or (char == 'I') or (char == 'O') or (char == 'U'):
                output_data += char + " "

"""

# getting the consonants only 
for char in data:
    if not(char == 'a') or (char == 'e') or (char == 'i') or (char == 'o') or (char == 'u') or (char == 'A') or (char == 'E') or (char == 'I') or (char == 'O') or (char == 'U'):
        output_data += char + "_"



print()
print(output_data)

print()
