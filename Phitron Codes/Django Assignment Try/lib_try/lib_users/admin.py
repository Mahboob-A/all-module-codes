from django.contrib import admin

# Register your models here.
from .models import DemoModel, User, Book, BookGenre, BorrowBook, ReturnBook
@admin.register(User)
class UserAdmin(admin.ModelAdmin): 
        list_display = ['id', 'username', 'first_name', 'last_name', 'email', 'bio', 'display_borrowed_books', 'display_wishlist',]
        
        def display_borrowed_books(self, obj): 
                all_borrowed_books = obj.borrowed_books.all()
                return ', '.join([book.title for book in all_borrowed_books])

        display_borrowed_books.short_description = 'Borrowed Books'
        
        def display_wishlist(self, obj): 
                all_wishlist = obj.wishlist.all()
                return ', '.join([book.title for book in all_wishlist])

        display_wishlist.short_description = 'Wishlisted Books'
        
        # for existing Wishlist model (discarded)
        # def display_wishlist(self, obj):
        #         wishlist = obj.wishlist
        #         if wishlist:
        #                 books = wishlist.book_wishlists.all()
        #                 return ', '.join([book.title for book in books])
        #         else:
        #                 return "No Wishlist"

        # display_wishlist.short_description = 'Wishlist'
                

        
@admin.register(Book)
class BookAdmin(admin.ModelAdmin): 
        list_display = ['id', 'isbn', 'title', 'author', 'total_copy', 'book_image_url', 'description', 'first_pub', 'last_pub', ]


@admin.register(BookGenre)
class BookGenreAdmin(admin.ModelAdmin): 
        list_display = ['id', 'name', 'description']
        

@admin.register(BorrowBook)
class BorrowBookAdmin(admin.ModelAdmin): 
        list_display = ['id', 'user', 'book', 'borrow_date', 'provisional_return_date']
        

@admin.register(ReturnBook)
class ReturnBookAdmin(admin.ModelAdmin): 
        list_display = ['id', 'get_return_book',  'is_fine_paid', 'return_date', ]
        
        def get_return_book(self, obj): 
                return f'{obj.borrow.user.get_full_name()} returned {obj.borrow.book.title} book'
        
        get_return_book.short_description = 'Book Returned'

        


# @admin.register(Wishlist)
# class WishlistAdmin(admin.ModelAdmin):
#         list_display = ['id', 'name', 'created_at']

# @admin.register(DemoModel)
# class DemoModelAdmin(admin.ModelAdmin): 
#         list_display = ['id', 'name', 'email', 'password']
        