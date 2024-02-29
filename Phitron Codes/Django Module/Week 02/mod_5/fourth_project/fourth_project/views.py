#views.py  

"""
ACC Django
Week 02  : Django Template
Module date : 220523, Monday 
Watch date : 3100523, Wednesday, 11.30 am  

5.1 Adding Bootstrap to our Django Project

"""

from django.shortcuts import render


def home(request):
        # context = {key : value}
        return render(request, 'index.html')

