

"""
ACC Django Course : Week 01 
Moudle 2 : Building a basic project application 
Mod date : 150523, Monday 
Watch date : 180523, Thursday 

"""


from django.urls import path

from . import views 

urlpatterns = [
        
        path('blog/', views.blog), 
        path('news/', views.news),        
        
]