from django.urls import path
from .views import * 

urlpatterns = [
    path('', cart, name='cart'),
    path('add_cart/<int:product_id>/', add_cart, name='add_cart'),
    path('remove_cart/<int:product_id>/<int:cart_item_id>/', remove_single_quantity_from_cart, name='remove_cart'),
    path('remove_cart_item/<int:product_id>/<int:cart_item_id>/', remove_whole_item_from_cart, name='remove_cart_item'),
#     path('checkout/', checkout, name='checkout'),
]
