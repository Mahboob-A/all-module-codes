from django.contrib import admin

# Register your models here.
from .models import Category

@admin.register(Category)
class CategoryAdmin(admin.ModelAdmin): 
        prepopulated_fields = {'slug' : ('cat_name', )}
        list_display = ('cat_name', 'slug')
        
        
