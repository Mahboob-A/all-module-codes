from django.urls import path

from .views import home, simulator

urlpatterns = [
        path('', home, name='home'),
        path('paly-game/', simulator, name='play_game'),
]
