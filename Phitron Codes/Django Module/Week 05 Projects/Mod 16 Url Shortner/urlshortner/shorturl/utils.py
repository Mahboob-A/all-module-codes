

from django.conf import settings
from random import choice
from string import ascii_letters, digits

# url char size 
SIZE = 7 

AVAILABLE_CHARS = ascii_letters + digits

def create_random_url_code(chars=AVAILABLE_CHARS): 
        ''' create random code '''
        code = ''.join([choice(chars) for _ in range(SIZE)])
        return code 

def create_shortened_url(model_instance): 
        ''' check if the random code exists in the database '''
        random_code = create_random_url_code()
        model_class = model_instance.__class__
        if model_class.objects.filter(url_short_code=random_code).exists():   # short_url is model's attribute 
                return create_shortened_url(model_instance)
        # print(random_code)
        return random_code


