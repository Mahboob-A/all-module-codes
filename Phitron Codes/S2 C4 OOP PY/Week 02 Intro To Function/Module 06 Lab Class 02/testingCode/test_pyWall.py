#Module 06, Lab Class 02
# 121022, Wednesday, 04.30 pm
# 6_5_test_code_testing_code 

# importing the code we need to test 
import pyWall

# taking the api 
api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

# testing the functionality of get_response funct of pyWall code 
def test_get_response():
        retrn_val = pyWall.get_response(api_url)
        # asserting the return value with the status code if it is 200 then it is running fine
        assert retrn_val.status_code == 200 


def test_sum():
        return 10 == 10 


def tes_add():
        return 'a' == 'a' 

