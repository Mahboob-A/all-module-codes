# Mod watch date : 220623, Thursday, 06.30 am 

from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm, UserChangeForm    
from django import forms

'''  
UserCreationForm sign up type form 

UserChangeForm user data change related form. we can change data using this form 
'''

# I am using the built in user model and usercreationform form of django 
# to create this model form 
class SignUpUser(UserCreationForm): 
        # we can make any field required as any of thsee ways 
        first_name = forms.CharField(widget=forms.TextInput(attrs={'id' : 'required' }))
        last_name = forms.CharField(required=True)
        email = forms.CharField(widget=forms.EmailInput(attrs={  'id' : 'required'}))
        class Meta: 
                model = User 
                fields = ['username', 'first_name', 'last_name', 'email', ]

# to change signned up user personal data 
class ChagneUserData(UserChangeForm): 
        password = None
        class Meta: 
                model = User 
                fields = ['username', 'first_name', 'last_name', 'email', ]