from django import forms 
from .models import ShortCodes

class ShortCodesForm(forms.ModelForm): 
        long_url = forms.URLField(widget=forms.URLInput(
                attrs={'class' : 'form control form-control-lg', 'placeholder' : 'Your URL to shorten'}
        ))
        
        class Meta: 
                model = ShortCodes
                fields = ('long_url',)