
# 250623, Sunday, 01.00 pm 

from rest_framework import serializers

from . import models

       
class ProductReviewSerializer(serializers.ModelSerializer): 
        class Meta: 
                model = models.ProductReview
                fields = '__all__'
                
class ProductSerializer(serializers.ModelSerializer): 
        # reviews = ProductReviewSerializer(many=True, read_only=True)
        reviews = serializers.StringRelatedField(many=True, read_only=True)
        class Meta: 
                model = models.Product
                fields = '__all__'