from django.shortcuts import render, redirect, get_object_or_404
from django.core.exceptions import ObjectDoesNotExist

from store.models import Product
from .models import Cart, CartItems


def _get_cart_id(request): 
        '''
        getting the session key. if the user it not authenticated, then use the session key as parameter to hold the items in cart 
        
        '''
        cart = request.session.session_key
        if not cart: 
                cart = request.session.create()
        return cart 

def add_cart(request, product_id): 
        product = Product.objects.get(id=product_id)
        
        # creating a cart object using the session key 
        try: 
                cart_id = _get_cart_id(request)
                # getting the seesion key as the parameter to create a cart as user in not authenticated 
                cart = Cart.objects.get(cart_id=cart_id)
        except ObjectDoesNotExist: 
                cart = Cart.objects.create(cart_id=cart_id)
                cart.save()     
                
        # creating CartItems object | adding the product in the cart 
        try: 
                cart_item = CartItems.objects.get(product=product, cart=cart)
                cart_item.quantity += 1 
                cart_item.save()
        except ObjectDoesNotExist:
                cart_item = CartItems.objects.create(
                        product=product, 
                        cart=cart, 
                        quantity=1
                ) 
                
                cart.save()
        return redirect('cart')
        
def cart(request, total=0, quantity=0, cart_items=None):
        template_path = 'cart/cart.html' 
        try: 
                tax = 0 
                total_bill = 0 
                cart_id = _get_cart_id(request)
                cart = Cart.objects.get(cart_id=cart_id)
                cart_items = CartItems.objects.filter(cart=cart, is_active=True)
                
                for cart_item in cart_items: 
                        total += (cart_item.product.price * cart_item.quantity)
                        quantity += cart_item.quantity
                
                tax = (2 * total) / 100 # 2% tax 
                total_bill = total + tax 
                
        except ObjectDoesNotExist:
                pass 
        
        context = {
                'total' : total, 
                'quantity' : quantity, 
                'cart_items' : cart_items, 
                'tax' : tax, 
                'grand_total' : total_bill
        }
        return render(request, template_path, context)
        
def remove_single_quantity_from_cart(request, product_id, cart_item_id): 
        try: 
                product = get_object_or_404(Product, id=product_id)
                cart_id = _get_cart_id(request)
                cart =  get_object_or_404(Cart, cart_id=cart_id)
                
                cart_item = CartItems.objects.get(product=product, cart=cart, id=cart_item_id)
                if cart_item.quantity > 1 : 
                        cart_item.quantity -= 1 
                        cart_item.save()
                else : 
                        cart_item.delete()
                        
        except: 
                pass 
        
        return redirect('cart')

        
        
def remove_whole_item_from_cart(request, product_id, cart_item_id): 
        try: 
                product = get_object_or_404(Product, id=product_id)
                cart_id = _get_cart_id(request)
                cart =  get_object_or_404(Cart, cart_id=cart_id)
                
                cart_item = CartItems.objects.get(product=product, cart=cart, id=cart_item_id)
                cart_item.delete()
        except: 
                pass 
        return redirect('cart')
                







