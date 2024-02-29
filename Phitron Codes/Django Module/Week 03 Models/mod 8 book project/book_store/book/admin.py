
from django.contrib import admin

from . import models 
# Register your models here.

@admin.register(models.BookStoreAddBooksModel)
class BookStoreAddBooksModelAdmin(admin.ModelAdmin): 
        list_display = ['id', 'book_name', 'author', 'category', 'first_pub', 'last_pub']