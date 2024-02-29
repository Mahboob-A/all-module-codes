
from django import forms

from .models import Account


class RegistrationFormUser(forms.ModelForm): 
        pasword = forms.ChoiceField(widget=forms.PasswordInput(
                attrs={
                        'placeholder' : 'Enter Password',
                       'class' : 'form-control', 
                }
        ))
        
        confirm_password = forms.CharField(widget=forms.PasswordInput(
                attrs={
                        'placeholder' : 'Enter Password',
                }
        ))
        
        class Meta: 
                model = Account 
                fields = ['first_name', 'last_name', 'phone_no', 'email', 'password']
                
        def clean(self): 
                cleaned_data = super(RegistrationFormUser, self).clean()
                pass1 = cleaned_data.get('password')
                pass2 = cleaned_data.get('confirm_password')
                
                if pass1 != pass2 : 
                        raise forms.ValidationError('Password does not match')
                
                
        def __init__(self, *args, **kwargs): 
                super(RegistrationFormUser, self).__init__(*args, **kwargs)
                self.fields['first_name'].widget.attrs['placeholder'] = 'Enter first name'
                self.fields['last_name'].widget.attrs['placeholder'] = 'Enter last name'
                self.fields['phone_no'].widget.attrs['placeholder'] = 'Enter phone no'
                self.fields['email'].widget.attrs['placeholder'] = 'Enter email'
                
                for field in self.fields: 
                        self.fields[field].widget.attrs['class'] = 'form-control'                
                
                