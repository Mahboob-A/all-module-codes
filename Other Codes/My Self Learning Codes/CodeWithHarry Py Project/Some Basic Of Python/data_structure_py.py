

'''
Python Project : Code WIth Harry (5 projects, length of video 03 ht, 08 minute )
waych beginning : 070423, Friday, 14th Roja, 07.00 pm
Some basics like varialble, tycasting, comments etc. 

Video covered from : 53:00 to 01:01 hours today. 
'''

"""


"""

# LIST : METHODS 

lst = [1, 1, 2, 2, 2,  2, 3, 4, 'hello']

# lst.sort()  cant sort because it has mixed data types 

print(lst)

lst.remove('hello')   # remove : removes element form list 

print(lst)

print(lst.count(2))  # count : count counts elemets in a list 
 
lst.sort()   # sort : sort sorts a list in ascending order 

lst.pop()    # pop : pop removes the last element from the list 

print("lst: ", lst)

lst.append(123)  # append : append adds elements in a list 

lst2 = lst 

print("lst 2: ", lst2)

# lst.clear() # clear : clear clears everything from the list 
""" if lst.clear() is called, then lst2 is also being cleared. ask why?
lst2 is not supposed to be cleared. 
  """


print("lst: ", lst)

lst2.extend(['hello, hi, 30, bye', 2020])  # extend : extend adds a new list into an existing list 
# while extending a list of string, the whole list gets a single index in the list in 
# which it is being appended
lst2.extend([1000, 2000, 3000])

print("lst2 : ", lst2)

print(lst2.index(123))
print(lst.index(1000))  # I have extened lst2, but I have getting the same value in lst also. why?

print(lst2.index('hello, hi, 30, bye'))  