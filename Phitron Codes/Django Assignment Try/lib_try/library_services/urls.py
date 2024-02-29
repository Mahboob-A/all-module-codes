from django.urls import path 

from .views import book_request_book_list, book_request_form, search_books, return_book, pay_overdue_fine, check_book_return_date
urlpatterns = [
        path('book-request/<int:book_id>/', book_request_book_list, name='book_request_book_list'),
        path('book-request/form/', book_request_form, name='book_request_form'),
        
        # book search 
        path('seach-books/', search_books, name='search_books'),
        
        # return book 
        path('return-book/<int:book_id>/', return_book, name='return_book'),
        
        # check due date 
        path('check-book-return-due-date/<int:book_id>/', check_book_return_date, name='check_book_return_date'),
        
        # pay fine 
        path('pay-overdue-fine/', pay_overdue_fine, name='pay_overdue_fine'),
]
