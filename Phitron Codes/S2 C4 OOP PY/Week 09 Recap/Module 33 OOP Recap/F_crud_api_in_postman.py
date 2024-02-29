"""  
Week 09: Recap week 
Module 33: OOP Recap
33-6_ CRUD operation using Flask Part 1
Mod date: 291122, Tuesday
Watch date: 051222, Monday, 08.30 am 
"""

# we will run this api using postman 
# thus we do not need to give GET in each quesry as postman handles this.
# And in case of request, we have to use request.get_json() not request.args like query type api 

from flask import Flask, request, jsonify

app = Flask(__name__)

data = [{"id" : 1, "name" : "jamal"}]

@app.route('/')
def home():
        return jsonify(data)

@app.route('/add', methods=['POST'])
def add():
        data.append(request.get_json())
        return "Data added successfully!", 200 

@app.route('/update', methods=['PUT'])
def update():
        for dt in data:
                if dt.get('id') == request.get_json().get("id"):
                        dt.update(request.get_json())
        print(request.get_json())
        return "Data updated successfully!" 

@app.route('/delete', methods=['DELETE'])
def delete():
        for i in range(len(data)):
                if data[i].get("id") == request.get_json().get("id"):   # check if we need to convert the key into str to check with request data
                        del data[i]
                        break
        return "Data deleted successfully!"

app.run(debug=True)