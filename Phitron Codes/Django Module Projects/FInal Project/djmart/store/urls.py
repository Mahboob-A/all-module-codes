
from django.urls import path

from .views import store, product_details, search_product

urlpatterns = [
        path('', store, name='store'),
        path('category/<slug:category_slug>/', store, name='products_by_category'),
        path('category/<slug:category_slug>/<slug:product_slug>/', product_details, name='product_details'),
        path('search/', search_product, name='search'),
]
