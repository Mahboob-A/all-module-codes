from django.shortcuts import render

# Create your views here.
# module details is written in inner project's urls.py 

def home(request): 
        template_path = 'core/home.html'
        return render(request, template_path)