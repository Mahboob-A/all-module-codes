
from django.urls import path, include
from rest_framework import routers
from . import views

router = routers.DefaultRouter()
router.register('products', views.ProductViewSet, basename='products')
router.register('reviews', views.ProductReviewViewSet, basename='product_reviews')

urlpatterns = [

        path('', include(router.urls)),
        # path('log-in/', include('rest_framework.urls')),
        
]
