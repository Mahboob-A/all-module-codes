
# Mod watch date : 220623, Thursday, 06.30 am 

from django.urls import path

from . import views 

urlpatterns = [

        path('', views.home, name='home_link'),
        
]
