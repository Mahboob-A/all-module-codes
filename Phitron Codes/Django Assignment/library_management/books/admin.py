from django.contrib import admin

from .models import Book, BookGenre

# Register your models here.


@admin.register(BookGenre)
class BookGenreAdmin(admin.ModelAdmin): 
        list_display = ['id', 'genre']
        

@admin.register(Book)
class BookAdmin(admin.ModelAdmin): 
        list_display = ['id', 'isbn', 'title', 'author', 'pulication_date', 'last_publication']