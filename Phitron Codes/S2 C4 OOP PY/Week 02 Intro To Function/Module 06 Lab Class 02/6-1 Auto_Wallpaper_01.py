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


from multiprocessing import get_context
from random import getrandbits
import requests 
import json 
import PyWallpaper


api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

# getting the json file 
# get request to the api 
get_response = requests.get(api_url)

# print(type(get_response))
# convert the utf-8 file i.e as the get_response is now in utf-8 encoding, convert in into string 
# apiii = get_response.content // this is now in byte 
api_content_str = get_response.content.decode('UTF-8')

# print(type(api_content_str))
# api_content is now string, to access the key of the string, we need to convert it into dict 
dict_content = json.loads(api_content_str)
# print(dict_content)


# as we have converted the api_content_str into a dict content, now we can access the key of the dictionary 
image_url = dict_content['url']
# print(image_url)

# As we have now the image url, we need to download it and to do so, we need to request again to get the content of the request i.e url 
download_image = requests.get(image_url)

# Now save the content of the download_image object into file 
# w as write and b as data as binary 
# we are storing the content of the object of the result of the 2nd get request 
with open ('image.png', 'wb') as image : 
        image.write(download_image.content)

# Now import package PyWallpaper and use change_wallpaper 
# PyWallpaper.change_wallpaper('C: \Users\iamhr\Code PlaygroundSourceCodes\Cource Module Source Codes\Src Code Sem 02 Course 04 OOP PY\Week 02 Intro To Function\Module 06 Lab Class 02\image.png)

