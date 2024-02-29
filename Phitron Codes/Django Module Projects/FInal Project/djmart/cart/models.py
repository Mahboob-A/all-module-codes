
from django.db import models

from store.models import Product


class Cart(models.Model): 
        '''
        main cart. a single cart should have multiple cart items. 
        '''
        cart_id = models.CharField(max_length=150, blank=True)
        date_added = models.DateField(auto_now_add=True)
        
        def __str__(self): 
                return self.cart_id
        

class CartItems(models.Model): 
        '''
        let a product be in multiple cartItems.
        let a cart have multiple cartItems. 
        '''
        product = models.ForeignKey(Product, on_delete=models.CASCADE)
        cart = models.ForeignKey(Cart, on_delete=models.CASCADE, blank=True)
        quantity = models.IntegerField()
        is_active = models.BooleanField(default=True)
        
        
        def __str__(self): 
                return self.product
        
        
        def sub_total(self): 
                return self.product.price * self.quantity 
        
        
        
        
        
        
