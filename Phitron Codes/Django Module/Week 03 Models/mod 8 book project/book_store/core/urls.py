#urls.py  

# module watch details is written in inner project's urls.py 

from django.urls import path
from . import views 

urlpatterns = [
        path('', views.home, name='home_link'),
]
