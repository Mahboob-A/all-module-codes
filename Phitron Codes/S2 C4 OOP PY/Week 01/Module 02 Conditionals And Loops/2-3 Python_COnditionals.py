# 2 - 3 conditionals if elif else 
# 011022 Saturday, 08.00 pm


from cgi import print_arguments


space = ("\n")
print(space)

print("This module is all about python conditionals: if elif else  ")

print(space)

price = 10

catalogue = 15

online = 12





if price < catalogue: 
        print("Price is less now ")
elif price > catalogue:
        print('Price is high now ')
elif online > catalogue: 
        print("online is high now")
elif price == online:
        print('price and online is same now')
else:
        print('Price is unchanged')


print(space)
