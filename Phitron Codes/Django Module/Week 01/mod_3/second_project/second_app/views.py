



from django.shortcuts import render

# Create your views here.
from django.http import HttpResponse

def offers(request):
        return HttpResponse(
                
                                        '''
                                        <h1>This is a Offers page</h1>
                                        <a href = '/second_app/discounts/' >Discounts </a>
                                        <a href = '/first_app/about' >About Us </a>
                                        <a href = '/first_app/contact' > Contact Us </a>
                                        
                                        ''')

def discounts(request):
         return HttpResponse(
                
                                        '''
                                        <h1>This is a discounts page</h1>
                                        <a href =' /second_app/offers/' >Offers  </a>
                                        <a href = '/first_app/about' >About Us </a>
                                        <a href = '/first_app/contact' > Contact Us </a>
                                        
                                        ''')
        