from django import forms 
from .models import DemoModel


class DemoModelForm(forms.ModelForm): 
        class Meta: 
                model = DemoModel
                fields = ['name', 'email', 'password']
                
                labels = {
                        'name' : 'Your Name', 
                        'email' : 'Your Email', 
                        'password' : 'Your Password'
                }

                error_messages = {
                        'name' : {'required' : 'Enter name'},
                        'email' : {'required' : 'Enter email'},
                        'password' : {'required' : 'Enter password'},
                }
                
                widgets = {
                        'name' : forms.TextInput(attrs={'class' : 'demo_class', 'placeholder' : 'Enter Your Name'}),
                        'email' : forms.EmailInput(attrs={'class' : 'demo_email', 'placeholder' : 'Enter Your Email'}),
                        'password' : forms.PasswordInput(attrs={'class' : 'demo_pass', 'placeholder' : 'Enter Your Password'}),
                }



