#main file 

""" 
A simple CRUD file 
It takes theysaidso.com free quote of the day api and using twilio, it delivers the quote to whatsapp number. 

Build Begin Date : 240523, Wednesday 
Link : https://youtu.be/G0cPeWv3flk
"""

import os 
import requests 

# url = "https://quotes.rest/qod?language=en"
# # api_key = os.environ.get("THEYSAIDSO_API_KEY")

# headers = {
    
#         "Authorization": "Bearer RPzBr4pK9ecYSv46GHEfKEF2EflyFIwG2OMuIvaL" 
    
#     }

# # print(api_key)
# resp = requests.get(url=url, headers=headers)
# dataa = resp.json()

# # print(dataa)




# # data = {'success': {'total': 1}, 
# # 'contents': {'quotes': [{'id': 'cfDPmVkuKVadLkHsmY5hxAeF', 'quote': 'Logic will get you from A to B. Imagination will take you everywhere.', 'length': 69, 'author': 'Albert Einstein', 'language': 'en', 'tags': ['imagination', 'inspire', 'logic', 't-shirt'], 'sfw': 'sfw', 'permalink': 'https://theysaidso.com/quote/albert-einstein-logic-will-get-you-from-a-to-b-imagination-will-take-you-everywh', 'title': 'Inspiring Quote of the day', 'category': 'inspire', 'background': 'https://theysaidso.com/assets/images/qod/qod-inspire.jpg', 'date': '2023-05-24'}]}, 
# # 'copyright': {'url': 'https://quotes.rest', 'year': '2023'}}



# quote = dataa['contents']['quotes'][0]['quote']
# author = dataa['contents']['quotes'][0]['author']
# date = dataa['contents']['quotes'][0]['date']
# tags = dataa['contents']['quotes'][0]['tags']
# print(quote, "\n", author, "\n", date, "\n", tags)





# def get_quote_of_the_day():
#     url = "https://quotes.rest/qod?language=en"
#     # api_key = os.environ.get("THEYSAIDSO_API_KEY")
#     headers = {"Authorization": "Bearer RPzBr4pK9ecYSv46GHEfKEF2EflyFIwG2OMuIvaL" }
#     resp = requests.get(url=url, headers=headers)
#     data = resp.json()

#     statuscode = resp.status_code
#     print(statuscode)
#     match statuscode:
#         case 200: 
#             quote_line = data['contents']['quotes'][0]['quote']
#             author = data['contents']['quotes'][0]['author']
#             date = data['contents']['quotes'][0]['date']
#             tags = data['contents']['quotes'][0]['tags']
#             # quote = [quote_line, author, date, tags]
#             quote = quote_line
            
#         case 400: 
#             quote = data['error']['message']
            
#         case _: 
#             quote = "Sorry, your requested quote catagory is not valid."
        
#     return quote 


# quote = get_quote_of_the_day()
# print(quote)
                                
    
    

# import os
# import requests

# url = "https://quotes.rest/qod?language=en"

# headers = {
#     "Authorization": "Bearer RPzBr4pK9ecYSv46GHEfKEF2EflyFIwG2OMuIvaL"
# }

# try:
#     resp = requests.get(url=url, headers=headers)
#     resp.raise_for_status()  # Raises an exception if the response status code is not 2xx

#     dataa = resp.json()
#     quote = dataa['contents']['quotes'][0]['quote']
#     author = dataa['contents']['quotes'][0]['author']
#     date = dataa['contents']['quotes'][0]['date']
#     tags = dataa['contents']['quotes'][0]['tags']
#     print(quote, "\n", author, "\n", date, "\n", tags)

# except requests.exceptions.RequestException as e:
#     print("Error occurred:", e)


api_key = 4usmmoeRBDvW1iiJO7HwJw==x2Bx6uM0VWnmTOPE