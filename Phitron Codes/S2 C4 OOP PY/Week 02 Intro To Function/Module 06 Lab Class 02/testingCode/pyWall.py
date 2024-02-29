#Module 06, Lab Class 02
# 121022, Wednesday, 04.30 pm
# 6_5_test_code


from multiprocessing import get_context
from random import getrandbits
import requests
import json
import PyWallpaper


api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

def get_response(url):
        return requests.get(url)

if __name__ == "__main__":
        print(__name__)
        api_response = get_response(api_url)



