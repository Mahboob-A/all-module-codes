#urls.py 

from django.urls import path, include

from . import views 

urlpatterns = [
        path('contact/', views.contact, name='contactus'), 
        path('about/', views.about, name='aboutus'),
        path('products/', views.products, name='product_link'),
]
