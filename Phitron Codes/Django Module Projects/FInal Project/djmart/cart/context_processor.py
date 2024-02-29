
from .models import Cart, CartItems
from .views import _get_cart_id


def cart_items_counter(request):
    cart_count = 0
    if 'admin' in request.path:
        return {}
    else:
        try:
                cart_id = _get_cart_id(request)
                cart = Cart.objects.filter(cart_id=cart_id)
                # if request.user.is_authenticated:
                #         cart_items = CartItems.objects.all().filter(user=request.user)
                # else:
                cart_items = CartItems.objects.all().filter(cart=cart[:1])
                for cart_item in cart_items:
                        cart_count += cart_item.quantity
        except Cart.DoesNotExist:
                cart_count = 0
    return dict(cart_count=cart_count)