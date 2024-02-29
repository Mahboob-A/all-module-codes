"""
URL configuration for filter_pagination project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/4.2/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
'''

Week 04: Deep Dive Into Django 
Module 13: API Authentication using Postman
Mod date: from june 5 to june 15, 2023
Watch date: 250623, Sunday, 06.00 am 

This is the extension of Module 13 code. Here adding some filtering sorting pagination to already build 
Product and ProductReview models done in Mod 13. 

Week 04: Deep Dive Into Django 
Module 14: Filtering And Pagination 
Mod date: from june 9 to june 15, 2023
Watch date begin: 260623, Monday, 04.30 pm 
Watch date end :  
'''

from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', include('postman.urls')),
    path('auth/', include('auth_user.urls')),
]
