from django.urls import path
from .views import UserRegView, user_login

urlpatterns = [
        path('reg/', UserRegView.as_view(), name='user_reg'),
        path('login/', user_login, name='login'),
]
