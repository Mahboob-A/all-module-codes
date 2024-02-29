# """  
# QS 02: Make a script to fetch local weather every 30 minutes 
# 141022, Friday, 09.30 pm
# 
# """

"""  
https://api.openweathermap.org/data/2.5/weather?q=chittagong&appid=4b5f5c378962441c1c0063e2bb400c5c

"""
"""  
https://www.freecodecamp.org/news/args-and-kwargs-in-python/

"""
"""  
import schedule 
import requests 


def weather_data():
        url = 'https://wttr.in/Jangipur'
        received = requests.get(url)
        print(type(received.text))


def main():
        schedule.every(2).seconds.do(weather_data)

        while True:
                schedule.run_pending()


main()


""" 

#Module 06, Lab Class 02
# 121022, Wednesday, 08.00 am
# 6 - 1 Auto Wallpaper 01

# """
# We will get an api, then reuqest the json file from it.
# Then convert the utf-8 file into a string and convert the string into a dictionary.
# Then we will get the url of the image
# And we will request again to get the file from the url.
# After getting the file from the url, we will save the file.content in the file
#
# """

""""
import requests
import json
from time import sleep 

def weather_data():
                
        api_url = "https://api.openweathermap.org/data/2.5/weather?q=raghunathganj&appid=4b5f5c378962441c1c0063e2bb400c5c"

        get_response = requests.get(api_url)

        api_content_str = get_response.content

        dict_content = json.loads(api_content_str)

        while True:
                sleep(10)
                print("after sleep: ")
                print(dict_content['weather'])
                print()
                print(dict_content['main'])
                print()
                print(dict_content['sys'])
                print()

weather_data()
"""




from time import sleep
import requests
def weather_data():
    url = 'https://wttr.in/Jangipur'
    received = requests.get(url)
    print(received.text)


def main():

    while True:
        sleep(1800)
        weather_data()


main()
