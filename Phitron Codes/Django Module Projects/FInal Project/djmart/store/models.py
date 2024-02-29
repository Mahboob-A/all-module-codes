from django.db import models
from django.urls import reverse

# Create your models here.

from category.models import Category


class Product(models.Model): 
        category = models.ForeignKey(Category, related_name='product', on_delete=models.CASCADE)
        product_name = models.CharField(max_length=100, unique=True)
        slug = models.SlugField(max_length=100, unique=True)
        description = models.TextField(max_length=700, blank=True)  # dj auto stores an empty string for empty field. not necessary to provide null unless trully required 
        price = models.DecimalField(max_digits=8, decimal_places=2)
        image = models.ImageField(upload_to='photos/products')  # upload picture in this folder 
        stock = models.IntegerField()
        is_available = models.BooleanField(default=True)
        added_at = models.DateField(auto_now_add=True)
        modified_at = models.DateField(auto_now=True)
        
        
        class Meta: 
                verbose_name = 'Product'
                verbose_name_plural = 'Products'
        
        
        def __str__(self): 
                return self.product_name
        
        
        def get_product_url(self): 
                return reverse('product_details', args=[self.category.slug, self.slug])
        