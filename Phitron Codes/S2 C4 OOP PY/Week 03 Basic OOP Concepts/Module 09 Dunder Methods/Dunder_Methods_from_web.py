# 171022, Monday, 10.30 pm


# we can use magic methods or dunder to instruct the class to do something and
# in order to doing something, we can directly do the job when we are accessing the
# i.e if there's a __str__ method, then we directly can print the object and
# whatever we have instrucued, will be printed.
class softwares:
    names = []
    versions = {}

    def __init__(self, names):  # init method that creates instances
        if names:
            self.names = names.copy()
            for name in names:
                self.versions[name] = 1
        else:
            raise Exception("Please Enter the names")

    def __str__(self):  # __str__ method that can print the object
        s = "The current softwares and their versions are listed below: \n"
        x = ''
        for key, value in self.versions.items():
            s += f"{key} : v{value} \n"
        return s

    # __setitem__ method it can assign / re-assign value in a dict
    def __setitem__(self, name, version):
        if name in self.versions:
            self.versions[name] = version
        else:
            raise Exception("Software Name doesn't exist")

    # it is similar like how we access a value of iterable using [] operator like d = {'val':1} | print(d['val'])
    # as this would now print the value of the key, the similar thing will be created using the __getitem__ method
    def __getitem__(self, name):
        if name in self.versions:
            return self.versions[name]
        else:
            raise Exception("Software Name doesn't exist")


p = softwares(['S1', 'S2', 'S3'])

# invoking the __str__ method
print(p)

# invoking __setitem__ method
p['S1'] = 2  # as we have a key name S1, it wont raise any exception,
# p['2'] = 2 # as we do not have any key in the dict of the class as '2', it will raise an exception

# printing the updated softwares dict
print(p)

# getting the value of the object using __getitem__ method
# this will print the value of the object p's dict's S1 key's value
# and if the key is invalid, the exception is raised
print(p['S1'])
