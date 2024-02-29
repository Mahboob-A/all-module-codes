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

# testing code 

# making a into upper 
a = 'phitron'

# making b into lower
b = 'PHITRON'

# making c into capitalized
c = 'phitron'

def test_script():
        res = make_upper(a)
        assert res == 'PHITRON'

        res = make_lower(b)
        assert res == 'phitron'

        res = make_capital(c)
        assert res == 'Phitron'

        

        
