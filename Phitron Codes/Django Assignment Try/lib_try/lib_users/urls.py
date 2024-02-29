
from django.urls import path
from .views import  user_borrowed_books, book_detail, book_list, borrow_book, make_wishlist, user_login, user_logout, user_signup, user_wishlist, remove_from_wishlist
urlpatterns = [
        
        # auth 
        path('login/', user_login, name='login'),
        path('signup/', user_signup, name='signup'),
        path('logout/', user_logout, name='logout'),
        
        # book 
        path('book-list/', book_list, name='book_list'),
        path('borrow-book/<int:book_id>/', borrow_book, name='borrow_book'),
        
        path('borrowed-books/', user_borrowed_books, name='all_borrowed_books'),
        path('wishlist/', user_wishlist, name='wishlist'),
        path('remove-form-wishlist/<int:book_id>/', remove_from_wishlist, name='remove_from_wishlist'),
        
        path('make-wishlist/<int:book_id>/', make_wishlist, name='make_wishlist'),
        path('book-details/<int:book_id>/', book_detail, name='book_detail'),
]
