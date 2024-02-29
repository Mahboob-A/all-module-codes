
# 250623, Sunday, 08.30 pm 

from django.urls import path
# to get the auth token | whenever a user is loggin in, a auth token will be created (if the below link is used)
from rest_framework.authtoken.views import obtain_auth_token  
from . import views 

urlpatterns = [ 
        path('login/', obtain_auth_token, name='login'),   # the obtain_auth_token is built in view and that is handling to create a new token when an existing user is loggin in 
        path('register/', views.RegistrationView.as_view(), name='register'),  # in this view, I have implemented that whenever a new user registers, a new token is generated using signals
        path('logout/', views.LogoutView.as_view(), name='logout'),   # whenever a user visits this link, i.e log our, his existing token gets deleted. 
]
