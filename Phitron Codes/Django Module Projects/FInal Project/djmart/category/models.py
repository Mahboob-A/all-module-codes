from django.db import models
from django.urls import reverse
# Create your models here.


class Category(models.Model): 
        cat_name = models.CharField(max_length=50)
        description = models.TextField(max_length=255, blank=True, null=True)
        slug = models.SlugField(max_length=255, unique=True)
        cat_img = models.ImageField(upload_to='photos/category', blank=True, null=True)
        
        class Meta: 
                verbose_name = 'Category'
                verbose_name_plural = 'Categories'
        
        def __str__(self): 
                return self.cat_name
        
        # return the link like : /store/category/jeans       and redirect to products_by_category view (in store, see store view)
        def get_category_url(self): 
                return reverse('products_by_category', args=[self.slug])
        