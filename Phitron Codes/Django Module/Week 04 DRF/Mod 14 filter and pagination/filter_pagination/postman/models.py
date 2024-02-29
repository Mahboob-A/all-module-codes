from django.db import models
from django.contrib.auth.models import User
# Create your models here.



class Product(models.Model): 
        name = models.CharField(max_length=200)
        description = models.TextField()
        price = models.DecimalField(max_digits=10, decimal_places=2)  # 9999999999.99 max 
        
        def __str__(self): 
                return self.name 
        
class ProductReview(models.Model): 
        product = models.ForeignKey(Product, on_delete=models.CASCADE, related_name='reviews')
        user = models.ForeignKey(User, on_delete=models.CASCADE, related_name='user')
        rating = models.IntegerField(choices=[(i, i) for i in range(1, 6)])
        review = models.TextField()
        created_at = models.DateTimeField(auto_now_add=True)
        updated_at = models.DateTimeField(auto_now=True)
        
        class Meta: 
                # this unique_together ensuers both of the object shouls be unique in to do any operations.
                # that being said, product and user both should be unique, i.e any single unser can review on a single same product 
                # a user can not review more that one to a single product 
                # in other way, any product can not take more than one review by the same user 
                unique_together = ('product', 'user')   
                
        def __str__(self): 
                return f"User : {self.user.username} | Product : {self.product.name} | Rating : {self.rating} | Review : {self.review} | Review id : {self.id}"