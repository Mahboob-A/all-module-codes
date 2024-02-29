

from django.urls import path, include

from . import views 

urlpatterns = [
        path('contact/', views.contact, name='contactus'), 
        path('about/', views.about, name='aboutus'),
        path('products/', views.products, name='product_link'),
        path('login/', views.login_form, name='login_form_link'),  # to show the login form 
        path('login/success/', views.show_successful_message, name='login_form_successful_link'),  # to show the success msg 
        path('rating/', views.movie_rating, name='movie_rating_link'),   # to show the rating form 
        path('rating/rating_success/', views.movie_rating_done, name='movie_rating_done_link'),   # to show the rating successful 
        path('login/user_login/', views.user_login, name='user_login_link'),
        path('feedback/', views.user_feedback, name='user_feedback_link'),
        path('feedback/feedback_success/', views.user_feedback_success, name='user_feedback_success_link'),
        path('feedback/website_not_liked/', views.website_not_liked_feedback, name='website_not_liked_feedback_link'),
        path('feedback/website_not_liked/website_not_liked_feedback_success/', views.website_not_liked_feedback_success, name='website_not_liked_feedback_success_link'), 
        path('user-details/', views.get_user_details, name='get_user_details_link'),
        path('file-upload/', views.user_file_upload, name='user_file_upload_link'),
        path('updated-user-details/', views.get_updated_user_details, name='updated_user_details_link'),
        path('validated-user-details/', views.get_validated_user_details, name='get_validated_user_details_link'),
        path('validated-user-login/', views.validated_user_login, name='validated_user_login_link'), 
        
]
