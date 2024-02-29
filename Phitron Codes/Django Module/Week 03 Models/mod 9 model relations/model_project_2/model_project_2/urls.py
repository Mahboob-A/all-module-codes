"""
URL configuration for model_project_2 project.

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

Week 03 : More About Models (Model Relations)
Module : 9
Mod release date : 310523, Wednesday
Mod watch begin date : 200623, Tuesday, 04.00 pm 
Mod watch end date : 210623, Tuesday, 11.00 am 


'''


from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', include('core.urls')), 
    path('app/', include('model_app.urls')),
]