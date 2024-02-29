#views.py 

"""
ACC Django
Week 02  : Django Template
Module date : 200523, Saturday 
Watch date : 2100523, Sunday, 06.30 am 

Vid : 4.1 Rendering Template From Project Folder 

"""

from django.shortcuts import render

def home(request):
        return render(request, 'index.html')