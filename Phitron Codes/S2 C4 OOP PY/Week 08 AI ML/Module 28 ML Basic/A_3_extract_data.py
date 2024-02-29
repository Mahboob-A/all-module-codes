"""  
Week 08 : AI and ML 
Week begin: 191122, Saturday 
Module 28 : ML Basic 
Watch Date: 211122, Monday, 07.00 pm 
"""

import requests

url = 'https://en.wikipedia.org/wiki/IPhone'

res = requests.get(url).text.encode('utf-8').decode('ascii', 'ignore')

print(res)
