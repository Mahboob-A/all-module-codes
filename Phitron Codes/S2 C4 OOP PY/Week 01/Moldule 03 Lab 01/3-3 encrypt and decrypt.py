# 081022, Saturday, 10.00 am 

print()

# to decrypt, we just need to minus shirt that exact times we encrypted the key with the amount of shift 

data = input("Give a data to encrypt: ")

shift = 10

output = ""

for char in data :
        output += chr((ord(char)+shift-97) %26 + 97)

print()

print(output)

print()