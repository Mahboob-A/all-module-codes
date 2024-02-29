
"""
ACC Django
Week 02  : Django Template
Module date : 220523, Monday 
Watch date : 3100523, Wednesday, 11.30 am  

5.1 Adding Bootstrap to our Django Project

"""


from django.shortcuts import render

# Create your views here.
def contact(request):
        return render(request, './first_app/contact.html' )


def about(request):
        return render(request, './first_app/about.html')
                

def products(request):
        """ Product view """
        return render(request, './first_app/products.html', {'name' : 'mahboob alam'}) # this name dict is passed for custom 
        # filter in templatetags folder my filter 