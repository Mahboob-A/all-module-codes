"""  
Week 08 : AI and ML 
Week begin: 191122, Saturday 
Module 28 : ML Basic 
Watch Date: 231122, Wednesday, 09.30 pm
"""


import requests
from bs4 import BeautifulSoup
import re 
from csv import writer


url = 'https://en.wikipedia.org/wiki/IPhone'

resp_text = requests.get(url).text.encode('utf-8').decode('ascii', 'ignore')
soup = BeautifulSoup(resp_text, 'lxml')

table = soup.find('table',class_= 'wikitable')
# print(table)
rows = table.find_all('tr')[1:]
# print(rows)

iphone_price_dict = {}
for row in rows:
        data = row.find_all(['th', 'td'])
        try:
                version_text = data[0].a.text.split(" ")[1]
                version = re.sub(r"\D", "", version_text)
                version = int(version)
                # print(model)
                price_text = data[-1].text.split('/')[-1]
                # print(price_text)
                price = re.sub(r"\D", "", price_text)
                price = int(price)
                if version and price > 100:
                        # print(version, " ", price)
                        # removing the dupes. Taking only one model of each iphone, so making the version as key, so it removes the previous dupe version 
                        iphone_price_dict[version] = price   
        except:
                pass

# print(iphone_price_dict)
# storing the data as csv file
# csv writerow takes iterable to write 
csv_fields = ['version', 'price'] 
with open('iphone_version_price', 'w', newline="") as csvFile:
        csvWriter = writer(csvFile)
        csvWriter.writerow(csv_fields)
        for version, price in iphone_price_dict.items():
                csvWriter.writerow([version, price])   #as writerow takes iterable, hence a list is given 
        csvFile.close()
