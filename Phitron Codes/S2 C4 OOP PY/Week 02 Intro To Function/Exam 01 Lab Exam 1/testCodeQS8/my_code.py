# """
# QS 08: Test Script for code
# 151022, Saturday, 04.30 pm
#
# """


def make_upper(a_str):
    return a_str.upper()



def make_lower(a_str):
    return a_str.lower()


def make_capital(a_str):
    return a_str.capitalize()

# if __name__ == "__main__":

def main():
    # making a into upper
    a = 'mahboob alam'

    # making b into lower
    b = 'MAHBOOB ALAM'

    # making c into capitalized
    c = 'mahboob alam'

    x = make_upper(a)
    print(x)
    y = make_lower(b)
    print(y)
    z = make_capital(c)
    print(z)

    


main()
