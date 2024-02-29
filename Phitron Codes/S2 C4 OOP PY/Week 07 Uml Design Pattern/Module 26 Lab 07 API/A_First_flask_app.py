""" My first api using flask """
"""  
Week 07: uml and design pattern 
171122, Thursday 
Module 26: lab class 07 - api , 07.00 am 
26-3 First Flask App
"""

# from crypt import methods
from flask import Flask, request

app = Flask(__name__)

database = {'phitron' : '1', 'youtube' : '123'}

# @app.route('/', methods=['GET'] ) '/' = this mean the main home. if we add anythong after the slash, then in
# the webpage we have also to go in the '/something' page to get the content 

# whichever route we give, we can get the content only on that route 
@app.route('/', methods=['GET'] )
def home():
        return "My first api in python"

@app.route('/next', methods=['GET'] )
def nextPageInt():
        # we can not directly return integer or float value 
        # if we want to return integet type value then we have to pass it with either dict or list 
        return {1 : 1}
        
@app.route('/get_data/', methods=['GET'] ) 
def get_data():
        return database


# api_link/pagename/?key=value 
# '/add_data/  --- if this / is given after the route_name, and we are requesting PUT, we can simply put ? then key value 
# and if / not given, then we have to put /? then key value 
@app.route('/add_data/', methods=['PUT'] ) 
def set_data():
        key, value = list(request.args.items())[0]   # ask why 0 index is given 
        database[key] = value
        return f"{key} is updated"

# as here no / is given after route mode, we can directly put ? and put key=value pair 
@app.route('/del_data/', methods=['DELETE'] ) 
def delete_data():
        key, value = list(request.args.items())[0]   # ask why 0 index is given 
        if key in database:
                database.pop(key)
                return f"{key} is deleted"
        else:
                return f'{key} is invalid'


if __name__ == '__main__':
        # if any access denied occurs, we can give host and port. port like 105, 8080, 500, 5000, or any num 
        # app.run(host='0.0.0.0', port=99)   
        app.run()