'''
Week 04: Deep Dive Into Django 
Module 13: API Authentication using Postman
Mod date: from june 5 to june 15, 2023
Watch date: 250623, Sunday, 06.00 am 
'''
from django.shortcuts import render
from rest_framework import viewsets
from rest_framework.permissions import IsAuthenticated, IsAuthenticatedOrReadOnly
# Create your views here.
from . import models, serializers 

# custom permissions
from . import permissions


# model view for product view 
class ProductViewSet(viewsets.ModelViewSet): 
        permission_classes = [permissions.IsUserOrReadOnly]
        queryset = models.Product.objects.all()
        serializer_class = serializers.ProductSerializer
        

# model viw for productreview model 
class ProductReviewViewSet(viewsets.ModelViewSet): 
        permission_classes = [IsAuthenticatedOrReadOnly, permissions.ReviewerOrReadOnly]
        queryset = models.ProductReview.objects.all()
        serializer_class = serializers.ProductReviewSerializer

