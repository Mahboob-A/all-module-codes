
from django.shortcuts import render, redirect
import logging
from django.shortcuts import render

# Create your views here.


from form_app.forms import UserLogin, ExampleForm, WebsiteNotLikedFeedback, UserDetails, UserFileUpload, UserDetailsUpdated, ValidatedUserDetails, BuiltInValidatedUserDetails, ValidatedLogin




# Create your views here.
def contact(request):
        return render(request, 'form_app/contact.html' )


def about(request):
        return render(request, 'form_app/about.html')
                

def products(request):
        """ Product view """
        return render(request, 'form_app/products.html', {'name' : 'mahboob alam'}) # this name dict is passed for custom 
        # filter in templatetags folder my filter 
        

def login_form(request):
        # print(request.POST)
                return render(request, 'form_app/login_form.html')
        

def show_successful_message(request):
        if request.method == 'POST':
                username = request.POST.get('username')
                email = request.POST.get('email')
                password = request.POST.get('password')
                context = {'username' : username, 'email' : email, 'password' : password }
                # return render(request, 'form_app/login_form.html',  {'username' : username, 'email' : email, 'password' : password })
                return render(request, 'form_app/show_successful_message.html',  context)
        else :    
                return render(request, 'form_app/show_successful_message.html')

        # when the link is hit directly then else will execute, and when form is submitted, the if will execute 
        # as the login_form template redirects the post operation to the show_successful_message template. 
        # and then this if is called as the method is POST. and then the show_successful_message template is returned 
        

def movie_rating_done(request):
        if request.method == 'POST':
                print(request.POST)
                username = request.POST.get('username')
                email = request.POST.get('email')
                select = request.POST.get('select')
                context = {'username' : username, 'email' : email, 'select' : select }
                return render(request, 'form_app/show_successful_message.html',  context)
        else :    
                return render(request, 'form_app/show_successful_message.html')        
        

def movie_rating(request):
        return render(request, 'form_app/movie_rating.html')
        
        
        
def user_login(request):
        form = UserLogin(request.POST)
        if form.is_valid(): 
                print(form.cleaned_data)
        return render(request, 'form_app/user_login_django_form.html', {'form' : form})




# VID 6.4 Adding crispy forms in form : 170623, Saturday, 06.00 am 
def user_feedback_success(request):
        feedback_data = request.session.get('feedback_data')
        if feedback_data:
                like_website = feedback_data['like_website']
                favorite_food = feedback_data['favorite_food']
                favorite_color = feedback_data['favorite_color']
                favorite_number = feedback_data['favorite_number']
                notes = feedback_data['notes']
        context = {
                
                'like_website' : like_website, 
                'favorite_food' : favorite_food, 
                'favorite_color' : favorite_color, 
                'favorite_number' : favorite_number, 
                'notes' : notes
        }
        return render(request, 'form_app/show_successful_message.html', context)
        
        

def user_feedback(request):
        feedback_form = ExampleForm(request.POST)        
        if feedback_form.is_valid(): 
                # print(feedback_form.cleaned_data)
                request.session['feedback_data'] = feedback_form.cleaned_data
                return redirect('feedback_success/')   # i am not redirecting in the template, so that I can store the data before success page to show the info 
        return render(request, 'form_app/user_feedback.html', {'feedback_form' : feedback_form})


# this two func is responsible for if the user does not like the website, 
# it then gives additional link to explain why in website_not_liked_feedback and show him the data in 
# website_not_liked_feedback_success view. 
def website_not_liked_feedback_success(request):
        website_not_liked_feedback_data = request.session.get('website_not_liked_feedback_data')
        if website_not_liked_feedback_data : 
                additional_notes = website_not_liked_feedback_data['additional_notes']
                return render(request, 'form_app/show_successful_message.html', {'additional_notes' : additional_notes})

def website_not_liked_feedback(request):
        website_not_liked_feedback_from = WebsiteNotLikedFeedback(request.POST)
        if website_not_liked_feedback_from.is_valid():
                request.session['website_not_liked_feedback_data'] = website_not_liked_feedback_from.cleaned_data
                return redirect('website_not_liked_feedback_success/')
        return render(request, 'form_app/website_not_liked_feedback.html', {'website_not_liked_feedback_from' : website_not_liked_feedback_from})


'''
Module 6 Forms in Django vid code below 
movie rating code also related to moduel 
'''

def get_user_details(request):
        user_details_form = UserDetails(request.POST)
        if user_details_form.is_valid(): 
                print(user_details_form.cleaned_data)
        template_path = 'form_app/user_details.html'
        context = {}
        context['user_details_form'] = user_details_form
        return render(request, template_path, context)


# vid 6.7 file upload 
def user_file_upload(request):
        if request.method == 'POST': 
                file_form = UserFileUpload(request.POST, request.FILES)
                if file_form.is_valid(): 
                        uploaded_file = file_form.cleaned_data['user_file']   # the key is the attribute of the form class 
                        user_name = file_form.cleaned_data['user_name']
                        file_name = user_name + '.jpg'
                        with open('form_app/upload/' + file_name, 'wb+') as dest:   # writes the file with its name value 
                                for chunk in uploaded_file.chunks():    # chunks() breaks the file into parts so it's easier to write the file 
                                        dest.write(chunk)
                        # print(file_form.cleaned_data)
                # with open('form_app/upload/' + uploaed_file.name, 'wb+') as dest:   if we want the file name to be 
                # the name of the original file itself. 
                # after the else part, after the file is uploaded, again return the same page 
                return render(request, 'form_app/user_file_upload.html', {'file_form' : file_form, 'user_name' : user_name,  'upload_done' : True})
        
        else :   # the direct call at the link will be executed this 
                file_form = UserFileUpload()
                return render(request, 'form_app/user_file_upload.html', {'file_form' : file_form})                


def get_updated_user_details(request):
        if request.method == 'POST': 
                form = UserDetailsUpdated(request.POST)
                if form.is_valid():
                        print(form.cleaned_data)
        else : 
                form = UserDetailsUpdated()
        # always return the form 
        return render(request, 'form_app/updated_user_details.html', {'form' : form})




# vid 6-9 | validating user details || I am using this view function for two form class 
# 1. ValidatedUserDetails and 2nd is BuiltInValidatedUserDetails 
def get_validated_user_details(request):
        if request.method == 'POST': 
                form = BuiltInValidatedUserDetails(request.POST, request.FILES)
                if form.is_valid():
                        print(form.cleaned_data)
        else : 
                form = BuiltInValidatedUserDetails()
        return render(request, 'form_app/validated_user_details.html', {'form' : form})


# vid 6.11 validate user password 

def validated_user_login(request):
        if request.method == 'POST': 
                form = ValidatedLogin(request.POST)
                if form.is_valid(): 
                        print(form.cleaned_data)
        else: 
                form = ValidatedLogin()
        return render(request, 'form_app/validated_user_login.html', {'form' : form})




