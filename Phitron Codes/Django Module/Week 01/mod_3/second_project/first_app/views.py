

from django.shortcuts import render

from django.http import HttpResponse


# Create your views here.

def about(request):
        return HttpResponse(
                
                                                '''
                                                <h1>This is a about page</h1>
                                                <a href =  '/first_app/contact/' >Contact Us </a>
                                                <a href = '/second_app/offers' >Offers </a>
                                                <a href = '/second_app/discounts' > Discounts </a>
                                        
                                                ''')


def contact(resuest):
        return HttpResponse(
                
                                        '''
                                        <h1>This is a contact us page</h1>
                                        <a href =' /first_app/about/' >About Us </a>
                                        <a href = '/second_app/offers' >Offers </a>
                                        <a href = '/second_app/discounts' > Discounts </a>
                                        
                                        ''')
