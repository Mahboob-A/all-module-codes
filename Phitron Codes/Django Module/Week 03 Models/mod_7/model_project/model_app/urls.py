
# 180623, Sundya, 01.00 pm 

from django.urls import path

from . import views

urlpatterns = [
        path('example-data/', views.show_example_data, name='show_example_data_link'),
        path('delete-data/<int:roll>', views.delete_example_data, name='delete_example_data_link'),
        path('user-details/', views.get_student_details, name='get_user_details_link'), 
        
]

