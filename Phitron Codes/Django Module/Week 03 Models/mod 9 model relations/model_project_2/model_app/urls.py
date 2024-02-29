
# 180623, Sundya, 01.00 pm 

from django.urls import path

from . import views

urlpatterns = [
        path('show-data/', views.show_student_data, name='show_data_link'),
        path('delete-data/<int:roll>', views.delete_data, name='delete_data_link'),
        path('get-student-details/', views.get_student_details, name='get_student_details_link'), 
        
]

