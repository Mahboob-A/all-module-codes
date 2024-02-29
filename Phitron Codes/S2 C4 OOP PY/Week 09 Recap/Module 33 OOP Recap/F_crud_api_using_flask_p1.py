"""  
Week 09: Recap week 
Module 33: OOP Recap
33-6_ CRUD operation using Flask Part 1
Mod date: 291122, Tuesday
Watch date: 041222, Sunday, 10.20 pm
"""


# this is called query type api, where we perform the actions in the web browser.
# in query type api, we need to give GET method in each query we make, and 
# in the case of erquest.args -> it will be in case of query type api
# and in postman api, we use request.get_json() not request.args 

from flask import Flask, jsonify, request

app = Flask(__name__)

data = [{"id" : 1, "name" : "kemal"}]

@app.route('/')
def home():
        # return "Welcome Home!"
        return jsonify(data)

# adding new elements
@app.route('/add', methods=['GET', 'POST'])  # as I will be using reaquest, so I must use get in all request 
def add_data():
        data.append(request.args)
        return "Data added successfully"

# updating elements
@app.route('/update', methods=['GET', 'PUT'])
def update():
        for dt in data:
                # matching with the data key id and the key id got from request i.e the key user has passed 
                if str(dt.get('id')) == request.args.get('id'):     # converting the data key in str as the requested value is in str 
                        dt.update(request.args)   # then updating the value 
        return "Data updated successfully!"

@app.route('/delete', methods=['GET', 'DELETE'])
def delete():
        val = ""
        for i in range(len(data)):
                if str(data[i].get('id')) == request.args.get('id'):
                        val = data[i]
                        del data[i]
                        break
        return f'{val}: Data deleted successfully!'

app.run(debug=True)