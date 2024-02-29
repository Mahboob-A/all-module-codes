# Mod watch date : 220623, Thursday, 06.30 am 

from django.urls import path
from . import views


urlpatterns = [
        path('signup/', views.signup_user, name='sign_up_user_link'),
        path('login/', views.login_user, name='log_in_user_link'),
        path('profile/', views.profile_user, name='profile_user_link'),
        path('logout/', views.logout_user, name='log_out_user_link'),
        
        path('profile/change-user-data/', views.change_data_user, name='change_user_data_link'),
        path('profile/change-password-with-old-pass/', views.change_password_with_old_pass, name='change_pass_with_old_pass_link'),
        path('profile/change-password-with-out-old-pass/', views.change_password_without_old_pass, name='change_pass_without_old_pass_link'),
        
]

