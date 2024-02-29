from django.shortcuts import render

from django.http import HttpResponse

# Create your views here.

def blog(request):
        
        resp = """ 
                <h2>Hi, I am Mahboob Alam. 
                All the blog posts will be posted here 180523. </h2>
                """
        
        return HttpResponse (resp)

def news(request):
        return HttpResponse("<h2>All the news and updates will be posted here 180523.</h2>")