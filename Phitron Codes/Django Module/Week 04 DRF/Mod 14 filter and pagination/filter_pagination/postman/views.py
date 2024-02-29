'''
This is the extension of Module 13 code. Here adding some filtering sorting pagination to already build 
Product and ProductReview models done in Mod 13. 

Week 04: Deep Dive Into Django 
Module 14: Filtering And Pagination 
Mod date: from june 9 to june 15, 2023
Watch date begin: 260623, Monday, 04.30 pm 
Watch date end :  
'''


from django.shortcuts import render
from rest_framework import viewsets
from rest_framework.permissions import IsAuthenticated, IsAuthenticatedOrReadOnly
from django_filters.rest_framework import DjangoFilterBackend    # django-filter 
from rest_framework import filters
# Create your views here.
from . import models, serializers 

# custom permissions
from . import permissions

# custom paginations 
from . import paginations 


# # SImple model view for product view 
# class ProductViewSet(viewsets.ModelViewSet): 
#         permission_classes = [permissions.IsUserOrReadOnly]
#         queryset = models.Product.objects.all()
#         serializer_class = serializers.ProductSerializer

# this view is in use currently 
class ProductViewSet(viewsets.ModelViewSet): 
        ''' ordering the table with price  '''
        permission_classes = [permissions.IsUserOrReadOnly]
        queryset = models.Product.objects.all()
        serializer_class = serializers.ProductSerializer
        # Searching and Ordering 
        filter_backends = [filters.OrderingFilter, filters.SearchFilter]   # this is rest framework's module. we can now search using this in the product 
        search_fields = ['price', 'name', 'description']  # price is to order, and name , description is for search   # to search : http://127.0.0.1:5050/products/?search=apple, advanced || to order : http://127.0.0.1:5050/products/?ordering=-price
        # Paginations 
        pagination_class = paginations.ProductPageNumberPaginatin  # PageNumberPagination pagiantion 
        # pagination_class = paginations.ProductLimitOffsetPagination   # limit offset paginaton 
        # pagination_class = paginations.ProductCursorPagination  # in cursor pagination, we can not use any filtering or ordering in the view | see pagination file for details 
        
# class ProductViewSet(viewsets.ModelViewSet): 
        ''' searcing in the product table with rest framework filters.searchfilter (we can also apply search, ordering like this in Product Review also) '''
#         permission_classes = [permissions.IsUserOrReadOnly]
#         queryset = models.Product.objects.all()
#         serializer_class = serializers.ProductSerializer
#         filter_backends = [filters.SearchFilter]   # this is rest framework's module. we can now search using this in the product 
#         search_fields = ['name', 'description']   #http://127.0.0.1:5050/products/?search=apple, advanced


# model viw for productreview model | this is the extension of mod 13 . In the get_queryset 
# we are getting all the reviews of a user being passed its username in the parameter adn returning all the reviwes of the user 
# http://127.0.0.1:8000/reviews/?username=halim this is how in the postman the link goes in GET method (this will return all the reviews of the user halim)
# class ProductReviewViewSet(viewsets.ModelViewSet): 
        ''' Filtering against query parameters '''
#         permission_classes = [IsAuthenticatedOrReadOnly, permissions.ReviewerOrReadOnly]
#         serializer_class = serializers.ProductReviewSerializer
      
#         # overriding default get_queryset mehtod 
#         def get_queryset(self):
#                 queryset = models.ProductReview.objects.all()
#                 username = self.request.query_params.get('username')   # taking the parameter from the query parameter 
#                 if username is not None:
#                         # queryset = queryset.filter(user__username=username)
#                         queryset = queryset.filter(user__username__icontains=username) # by using icontains -> the query params upper or lower case would be treated same 
#                 return queryset
        
''' ProductReview '''
# here django-filter package is used. 
class ProductReviewViewSet(viewsets.ModelViewSet): 
        ''' Filtering using djnago-filters package '''
        permission_classes = [IsAuthenticatedOrReadOnly, permissions.ReviewerOrReadOnly]
        queryset = models.ProductReview.objects.all()
        serializer_class = serializers.ProductReviewSerializer
        filter_backends = [DjangoFilterBackend, filters.SearchFilter]
        # by this the api like this : http://127.0.0.1:8000/reviews/?product=1&rating=3 we can filter result using all the values in 
        # the filterset_fileds. This filterset_filelds can also be passed as a tuple. Apart form filtering the both, we can alao
        # filter on any single value of the filterset_fields
        filterset_fields = ['rating','product'] # this is for DjangoFilterBackend (the django-filter package)
        search_fields = ['review']  # we can now search the reviews by any keyword | http://127.0.0.1:5050/reviews/?search=good



