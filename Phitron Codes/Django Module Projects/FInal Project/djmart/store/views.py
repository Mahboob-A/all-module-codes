from django.shortcuts import render, get_object_or_404
from django.core.paginator import Paginator
from django.db.models import Q 

# Create your views here.

from category.models import Category
from .models import Product

def store(request, category_slug=None):
        template_path = 'store/dj_store.html'
        
        products = None 
        # print(category_slug)
        if category_slug != None: 
                product_category = get_object_or_404(Category, slug=category_slug)
                products = Product.objects.filter(category=product_category, is_available=True)
                
                # if the user has clicked the catagory, then show 2 relavant items per page 
                paginator = Paginator(products, 2)
                page = request.GET.get('page')
                paged_products = paginator.get_page(page)
                
                
                total_products = products.count()
        else: 
                products = Product.objects.filter(is_available=True)
                
                # in default case, i.e no catagory is selected, show 3 items per page  
                paginator = Paginator(products, 3)
                page = request.GET.get('page')
                paged_products = paginator.get_page(page)
                
                total_products = products.count()
        
        # context = {'products' : products, 'total_products' : total_products, 'categories' : all_categories}
        return render(request, template_path, {'products' : paged_products, 'total_products' : total_products}) # pass paged_products instead of  products (all products in products key)
 


def product_details(request, category_slug, product_slug):
        template_path = 'store/product_details.html'
        try : 
                single_product = Product.objects.get(category__slug=category_slug, slug=product_slug)
        except Exception as e: 
                raise e 
        
        return render(request, template_path, {'single_product' : single_product})



def search_product(request): 
        template_path = 'store/dj_store.html'
        try: 
                if 'keyword' in request.GET: 
                        keyword = request.GET['keyword']
                        if keyword: 
                                products = Product.objects.order_by('-added_at').filter( Q(product_name__icontains=keyword))
                                product_count = products.count()
                        
                                context = {
                                        'products' : products,
                                        'product_count' : product_count,
                                        'keyword' : keyword, 
                                }
                                return render(request, template_path, context)
                        else: 
                                return render(request, template_path, {'empty_search' : True})
        except : 
                pass 

