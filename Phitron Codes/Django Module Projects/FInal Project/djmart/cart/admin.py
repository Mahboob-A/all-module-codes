from django.contrib import admin

# Register your models here.
from .models import CartItems, Cart


@admin.register(Cart)
class CartAdmin(admin.ModelAdmin): 
        list_display = ['cart_id', 'date_added']
        
@admin.register(CartItems)
class CartItemsAdmin(admin.ModelAdmin): 
        list_display = ['id', 'product', 'cart', 'quantity', 'is_active']