
# 180623, Sunday, 09.30 pm 
# Model Form 


from django import forms
from . import models 

class StudentModelForm(forms.ModelForm):
        # we can also add validators here just like the FORM API 
        class Meta: 
                model = models.StudentModel 
                fields = '__all__'
                labels = {
                        'roll' : 'Your roll', 
                        'name' : 'Your name', 
                        'email' : 'Your email', 
                        'password' : 'Your password'
                }
                
                widgets = {
                        'name' : forms.TextInput(attrs={'class' : 'form_name_class', 'id' : 'form_name_id', 'placeholder' : 'Enter your name'}), 
                        'password' : forms.PasswordInput, 
                        'email' : forms.EmailInput
                }
                
                help_texts = {
                        'name' : 'Enter your full name', 
                        'email' : 'Enter your valid email', 
                        'password' : 'Password should be minimum of 5 characters'
                }
                erroe_messages = {
                        'name' : {'required' : 'You must enter your name'}, 
                        'password' : {'required' : 'You must enter your password'}, 
                        'email' : {'required' : 'You must enter your email'}
                }
