# 230623, Friday, 06.00 am

from django.urls import path

from . import views


urlpatterns = [
        
        # for cookie views 
        path('', views.home, name='home'),
        path('get/', views.get_cookie, name='get_cookie'), 
        path('del/', views.del_cookie, name='del_cookie'), 
        
        # for session views 
        path('set-session/', views.set_session, name='set_session'),
        path('get-session/', views.get_session, name='get_session'),
        path('del-session/', views.del_session, name='del_session'),
]
