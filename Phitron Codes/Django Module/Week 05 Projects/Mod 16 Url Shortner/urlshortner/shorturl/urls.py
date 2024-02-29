
from django.urls import path 

from . import views 

app_name = 'urlshortner'

urlpatterns = [
        path('', views.home, name='home'),
        path('<str:shortened_code>', views.redirect_url_view, name='redirect'),
]
