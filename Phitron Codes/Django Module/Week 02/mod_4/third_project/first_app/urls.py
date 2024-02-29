#urls.py 



"""
ACC Django
Module date : 200523, Saturday 
Watch date : 2100523, Sunday, 06.30 am 

4.2 Rendering Template From Application

"""

from django.urls import path
from . import views     

urlpatterns = [
        path('contact/', views.contact, name='contact'),
        path('filters/', views.filters, name='filters')
]
