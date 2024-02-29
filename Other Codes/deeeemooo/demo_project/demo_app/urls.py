from django.urls import path

from .views import RenderReactPageAPI

urlpatterns = [
        path('api/', RenderReactPageAPI.as_view(), name='react_example_api'),
]
