# Mod watch date : 220623, Thursday, 06.30 am 
from django.shortcuts import render

# Create your views here.

def home(request): 
        return render(request, 'core/home.html')