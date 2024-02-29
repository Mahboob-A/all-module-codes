#second app's urls.py 

"""
ACC Django Course : Week 01 
Moudle 3 : Simple Page Navigation Project 
Mod date : 170523, Wednesday 
Watch date : 180523, Thursday, 06.30 pm  

"""

from django.urls import path

from . import views

urlpatterns = [
        path('offers/', views.offers), 
        path('discounts/', views.discounts), 
]


