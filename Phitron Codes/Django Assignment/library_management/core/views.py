from django.shortcuts import render
from django.http import HttpResponse
from datetime import datetime
# Create your views here.

def home(request): 
        now = datetime.now()
        html = "<html><body>It is now %s.</body></html>" % now
        return HttpResponse(html)