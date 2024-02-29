from django.shortcuts import render
from .froms import DemoModelForm
from .models import DemoModel
# Create your views here.


def home(request): 
        template_path = 'lib_users/home.html'
        return render(request, template_path)


def user_login(request): 
        template_path = 'lib_users/user_login.html'
        if request.method == 'POST': 
                form = DemoModelForm(data=request.POST)
                if form.is_valid(): 
                        name = form.cleaned_data['name']
                        email = form.cleaned_data['email']
                        password = form.cleaned_data['password']
                        form.save()
                        print(name, " ", email, " ", password)
        else : 
                form = DemoModelForm()
        return render(request, template_path, {'form' : form})