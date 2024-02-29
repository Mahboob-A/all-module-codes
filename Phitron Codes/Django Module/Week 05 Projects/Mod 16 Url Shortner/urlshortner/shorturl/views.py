from django.shortcuts import render
from django.contrib import admin
from django.http import HttpResponse, Http404, HttpResponseRedirect
from .models import ShortCodes
from .forms import ShortCodesForm

def home(request): 
        template = 'shorturl/home.html'
        context = {}
        context['form'] = ShortCodesForm()
        
        if request.method == 'GET': 
                return render(request, template, context)
        elif request.method == 'POST': 
                form = ShortCodesForm(request.POST)
                if form.is_valid(): 
                        url_obj = form.save()
                        long_url = url_obj.long_url 
                        url_short_code = url_obj.url_short_code
                        new_url = request.build_absolute_uri('/') + url_short_code  # built-in func
                        
                        context['new_url'] = new_url
                        context['long_url'] = long_url
                        context['url_short_code'] = url_short_code
                                
                        return render(request, template, context)
                
                context['errors'] = form.errors
                return render(request, template, context)
                        
                        

def redirect_url_view(request, shortened_code): 
        if shortened_code == 'admin': 
                return admin.site.urls 
        
        try: 
                shortner = ShortCodes.objects.get(url_short_code=shortened_code)
                shortner.times_followed += 1  
                shortner.save()   # only times_followed will be saved 
                return HttpResponseRedirect(shortner.long_url)  # redirecting now to the original url 
        except shortner.DoesNotExist: 
                raise Http404('Sorry, this link is broken :( ')