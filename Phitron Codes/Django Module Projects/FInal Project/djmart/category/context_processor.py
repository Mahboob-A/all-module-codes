
from .models import Category

def category_list(request): 
        all_categories = Category.objects.all()
        return dict(all_categories=all_categories)