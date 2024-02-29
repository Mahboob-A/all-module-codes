

# 240623, Saturday, 03.30 pm 
# Module 12 Intro To DRF 

from django.urls import path, include

from . import views 

from rest_framework.routers import DefaultRouter

router = DefaultRouter()
router.register(r'student', views.StudentViewSet, basename='student') # basename is optional | go to student link to access || go so /student/pk to access the particular student data 
router.register(r'course', views.CourseViewSet)

urlpatterns = [
        # path('', views.StudentView.as_view()),
        # path('<int:pk>/', views.StudentDetailsView.as_view()),
        
        # the below views do the same as the uppper views  | for student data table || CONCRETE VIEW 
        path('', views.StudentListCreateView.as_view()),
        path('<int:pk>/', views.StudentRetriveUpdateDestroyView.as_view()),
        # # for course table 
        path('course/', views.CourseListCreateView.as_view()),
        path('course/<int:pk>/', views.CourseRetriveUpdateDestroyView.as_view(), name='course_details'),
        
        # THIS IS FRO MODEL VIWE SET view sets 
        # for student data 
        path('', include(router.urls))   # all the viewset (model view set urls will be added with this )
]
