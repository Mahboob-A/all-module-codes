from django.shortcuts import render

# Create your views here.
from .forms import UserRegistrationForm
from django.views.generic.edit import FormView

class UserRegView(FormView): 
        template_name = 'allusers/user_reg.html'
        form_class = UserRegistrationForm
        success_url = '/'
        
def user_login(request): 
        template_path = 'allusers/user_login.html'
        if request.method == 'POST': 
                form = UserRegistrationForm(data=request.POST)
                if form.is_valid(): 
                        name = form.cleaned_data['name']
                        email = form.cleaned_data['email']
                        password = form.cleaned_data['password']
                        form.save()
                        print(name, " ", email, " ", password)
        else : 
                form = UserRegistrationForm()
        return render(request, template_path, {'form' : form})