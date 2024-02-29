#urls.py  


from django.urls import path

from . import views 

urlpatterns = [
        path('add-books-to-book-store/', views.add_books_to_book_store, name='add_books_to_book_store_link'),
        path('book-added-successfully/', views.book_customization_successful, name='book_customization_successful_message_link'),
        path('countdown-ridirect-to-add-book-page/', views.countdown_redirect_to_add_book, name='countdown_redirect_to_add_book_link'), 
        path('show-books/show-books-options/', views.show_book_options, name='show_book_options_link'), 
        path('show-books/process/<book_show_option_id>', views.process_show_books, name='process_show_books_link'), 
        path('show-books/show-books-by-book-id/', views.show_books_by_book_id, name='show_books_by_book_id_link'), 
        
        path('show-books/show-all-books/', views.show_all_books, name='show_all_books_link'),
        path('show-books/show-books-result/', views.show_books_successfully_to_user, name='show_books_successfully_to_user_link'),
        
        # edit book
        path('edit-books/edit/<int:book_id>/', views.edit_books, name='edit_books_link'), 
        
        # delete book
        path('delete-books/delete/<int:book_id>/', views.delete_book, name='delete_books_link'),
        
]
