"""
URL configuration for classview_cookies project.

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
Module date : 050623, Monday
Week 04 : Class Based View, Cookies and Session 
Mod 11 : Class Based Views 
Mod watch date : 230623, Friday, 06.00 am (11.1 to 11.6 all are class based view videos, I have skipped them
for now as I am short on time. So, complete class based view when you get time)

'''

from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', include('cookies.urls')),
    
]
