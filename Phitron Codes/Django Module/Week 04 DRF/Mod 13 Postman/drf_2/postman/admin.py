from django.contrib import admin
from . import models 
# Register your models here.


@admin.register(models.Product)
class ProductAdmin(admin.ModelAdmin): 
        list_display = ['id', 'name', 'description', 'price']
        
@admin.register(models.ProductReview)
class ProductReviewAdmin(admin.ModelAdmin): 
        list_display = ['id', 'product', 'user', 'rating', 'review', 'created_at', 'updated_at']