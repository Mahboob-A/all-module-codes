from django.contrib import admin

# Register your models here.
from .models import Product


@admin.register(Product)
class ProductAdmin(admin.ModelAdmin): 
        prepopulated_fields = {'slug' : ('product_name', )}
        list_display = [
                'category', 'product_name', 'slug', 'description', 'price', 'stock', 'is_available', 'added_at', 'modified_at', 
        ]