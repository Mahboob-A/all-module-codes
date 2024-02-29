
# from 160623, Friday to 180623, Sunday. 10.00 am 

from django import forms 
from django.core import validators 

class UserLogin(forms.Form):
        name = forms.CharField(label='Your Name', )
        email = forms.EmailField(label='Your Email')
        

class ExampleForm(forms.Form):
    like_website = forms.TypedChoiceField(
        label = "Do you like this website?",
        choices = ((1, "Yes"), (0, "No")),
        coerce = lambda x: bool(int(x)),
        widget = forms.RadioSelect,
        initial = '1',
        required = True,
    )

    favorite_food = forms.CharField(
        label = "What is your favorite food?",
        max_length = 80,
        required = True,
    )

    favorite_color = forms.CharField(
        label = "What is your favorite color?",
        max_length = 80,
        required = True,
    )

    favorite_number = forms.IntegerField(
        label = "Favorite number",
        required = False,
    )

    notes = forms.CharField(
        label = "Additional notes or feedback",
        required = False,
    )




class WebsiteNotLikedFeedback(forms.Form):
    additional_notes = forms.CharField(
        widget=forms.Textarea(attrs={'rows': 4, 'cols': 40}),
        label='Input your thought on how we can do better:',
        required=True,
        max_length=500
    )


# Module 6 vid form class 
class UserDetails(forms.Form): 
        name = forms.CharField(label='User name')
        email = forms.EmailField(label='User email')
        age = forms.IntegerField(label='You age')
        weight = forms.FloatField()
        balance = forms.DecimalField(label='Your desired balance', help_text='Initial amount is Rs. 1000')
        birthday = forms.DateField(label='Your birthday')
        appointment = forms.DateTimeField(label='Appointment time')
        check_box = forms.BooleanField(label='Remember me', widget=forms.CheckboxInput(), required=False)
        # check_box = forms.BooleanField()
        # Choice Fields | we can pass tuple of tuples or list of tuples | in the inner tuple, the 1st value would be for backend, 
        # and 2nd value would be for front end i.e this 2nd value would be shown to the user. (  ( 'S', 'Small' )   ) S is for backend
        # and Samall is for the frontend 
        GARMENT_CHOICES = (('S', 'Small'), ('M', 'Medium'), ('L', 'Large'))
        size = forms.ChoiceField(label='Enter your waist size ', choices=GARMENT_CHOICES)
        PIZZA_CHOICES = [('P', 'Pepperoni'), ('M', 'Mashroom'), ('B', 'Beef'), ('O', 'Onion'), ('T', 'Tomatto'), ('C', 'Cheez'), ('EC', 'Extra Cheez')]
        pizza = forms.MultipleChoiceField(label='How would you like to spice your pizza ', choices=PIZZA_CHOICES)
        

# vid 6.7 file upload 
class UserFileUpload(forms.Form): 
        user_name = forms.CharField(label='Enter your name')
        user_file = forms.FileField()
        
        
# vid 6.8 form fields and widgets 
class UserDetailsUpdated(forms.Form): 
        feedback = forms.CharField(
                label='User Feedback',  help_text='Max Length 1000 Characters', 
                required=False, widget=forms.Textarea(attrs={'class' : 'feedback_class', 'placeholder' : 'Enter your feedback'})
            )
        
        # using charfield to take email input using widget 
        email = forms.CharField(
                label='User email', 
                widget=forms.EmailInput(attrs={'class' : 'user_email_class', 'placeholder' : 'Enter your email'})
            )
        
        # the widget will give html format to take date input 
        birthday = forms.DateField(
                label='Your birthday', 
                widget=forms.DateInput(attrs={'type' : 'date'})
            )
        
        appointment = forms.DateTimeField(
                    label='Appointment time', 
                    widget=forms.DateInput(attrs={'type' : 'datetime-local'})
                )
        
        check_box = forms.BooleanField(label='Remember me', required=False)
        
        # radioselect will give round boxes to select instead of drop down menu select 
        GARMENT_CHOICES = (('S', 'Small'), ('M', 'Medium'), ('L', 'Large'))
        size = forms.ChoiceField(
                    label='Enter your waist size ', 
                    choices=GARMENT_CHOICES, 
                    widget=forms.RadioSelect
                )
        
        # checkboxseelctmultiple will give multiple check box to selelct 
        PIZZA_CHOICES = [('P', 'Pepperoni'), ('M', 'Mashroom'), ('B', 'Beef'), ('O', 'Onion'), ('T', 'Tomatto'), ('C', 'Cheez'), ('EC', 'Extra Cheez')]
        pizza = forms.MultipleChoiceField(
                    label='How would you like to spice your pizza ', 
                    choices=PIZZA_CHOICES, 
                    widget=forms.CheckboxSelectMultiple
                )
        
        
    
class ValidatedUserDetails(forms.Form):
    name = forms.CharField(label='Name', widget=forms.TextInput(attrs={'placeholder' :  'Enter your name'}))
    email = forms.EmailField(label='Email', widget=forms.EmailInput(attrs={'placeholder' :  'Enter your email'}))  
    # email = forms.EmailField(label='Email') we can also put like this but it will be a simple with no placeholder 
    age = forms.IntegerField(label='Age', widget=forms.TextInput(attrs={'placeholder' : 'Enter your age'}))
    
    
    ''' validating the form fields individually || use cleaned_data '''
    # def clean_name(self):
    #     validated_name = self.cleaned_data['name']
    #     if len(validated_name) < 10 : 
    #         raise forms.ValidationError('Name must contain atleast 10 characters')
    #     return validated_name
        
    # def clean_email(self):
    #     validated_email = self.cleaned_data['email']
    #     if '.com' not in validated_email: 
    #         raise forms.ValidationError('Email must contain .com')
    #     return validated_email  
    
    # def clean_age(self): 
    #     validated_age = self.cleaned_data['age']
    #     if validated_age < 18 : 
    #         raise forms.ValidationError('Your age must be at least 18')
    #     return validated_age 
    
    ''' validating in a single func | the func name must be clean()  '''
    
    def clean(self): 
        cleaned_data = super().clean()   
        
        validated_name = self.cleaned_data['name']
        if len(validated_name) < 10 : 
            raise forms.ValidationError('Name must contain atleast 10 characters')
        
        validated_email = self.cleaned_data['email']
        if '.com' not in validated_email: 
            raise forms.ValidationError('Email must contain .com')
        
        # in this case, if some string is passed, 'age' is showing as keyerror. but in the individual check, this is checked as 'enter whole number
        # shows if string is passed || with the same age form field. 
        validated_age = self.cleaned_data['age']
        if validated_age < 18 : 
            raise forms.ValidationError('Your age must be at least 18')
    
    

    ''' validating using built in validator (form django.core import validators)  '''
    
def len_check(value):
    if len(value) > 20: 
        raise forms.ValidationError('Note must be less than 20 characters')
    
# I am using this class to the same view function where ValidatedUserDetails form calss is used
class BuiltInValidatedUserDetails(forms.Form):
    name = forms.CharField(label='Name', validators=[
                                            validators.MinLengthValidator(10, message='Name must have at least 10 characters'),  
                                            validators.MaxLengthValidator(30, message='Name can not have more than 30 characters')]
                           )
    
    email = forms.EmailField(label='Email', validators=[validators.EmailValidator(message='Email is not valid')])

    age = forms.IntegerField(label='Age', validators=[validators.MinValueValidator(
                                            18, message='You must be 18 to proceed'),  validators.MaxValueValidator(90, message='Your age must not be more than 90')]
                             )
    
    file = forms.FileField(label='Upload PDF or Image',  validators=[validators.FileExtensionValidator(
                                        allowed_extensions=['pdf'], message='Allowed extentions are .pdf and .png')]
                           )
        
    note = forms.CharField(label='Additional Note', required=False, 
                                         widget=forms.Textarea(attrs={'placeholder' : 'enter any additinal note'}), validators=[len_check], 
                                         help_text='Additional note between 20 charachets'
                        )
        
        
        
        

# vid 6-11 password validation 
class ValidatedLogin(forms.Form):
    user_name = forms.CharField(label='Name', widget=forms.TextInput(attrs={'placeholder' : 'Enter your name'}))
    password = forms.CharField(label='Password', widget=forms.PasswordInput(attrs={'placeholder' : 'Enter your password'}))
    confirm_password = forms.CharField(label='Confirm Password', widget=forms.PasswordInput(attrs={'placeholder' : 'Re-enter your password'}))
    
    def clean(self): 
        cleaned_data = super().clean()
        
        val_user_name = self.cleaned_data['user_name']
        val_password = self.cleaned_data['password']
        val_confirm_passward = self.cleaned_data['confirm_password']
        
        if val_password != val_confirm_passward: 
            raise forms.ValidationError('Password does not match')
        
        if len(val_user_name) < 10 : 
            raise forms.ValidationError('Name must contain minimum 10 characters')
    
        
        
        
        
        
        
        
        
        