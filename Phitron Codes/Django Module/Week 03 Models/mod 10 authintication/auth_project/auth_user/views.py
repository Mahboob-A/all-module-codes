
# Mod watch date : 220623, Thursday, 06.30 am 

from django.shortcuts import render, redirect
# Create your views here.
from django.contrib import messages 
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash  # (to change the password : update_session_auth_hash )
from .forms import SignUpUser, ChagneUserData


# for signing up 
# here by using built in UserCreationForm, I have created a custom model form and using it here. and data is 
# stored in built in User model. See forms.py for more   
def signup_user(request): 
        if not request.user.is_authenticated:   # only if the user is not authenticated, then allow him to sign up 
                if request.method ==   'POST': 
                        form = SignUpUser(request.POST)
                        if form.is_valid(): 
                                messages.success(request, 'Your account has been created successfully')
                                form.save()
                                # print(form.cleaned_data)
                                # return redirect('log_in_user_link')
                else : 
                        form = SignUpUser()
                template_path = 'auth_user/signup_user.html'
                return render(request, template_path, {'form' : form})
        else:  
                return redirect('profile_user_link') # else , he is already a logged in user, so redirect him to profile page 


# for login the user. (the data is saved in the django builtin User model 
# everything is done here is all with built in form and user models)
def login_user(request): 
        if not request.user.is_authenticated: # only if the user is not authenticated, then allow him to login 
                template_path = 'auth_user/login_user.html'
                if request.method == 'POST': 
                        form = AuthenticationForm(request=request, data=request.POST)
                        if form.is_valid(): 
                                username = form.cleaned_data['username']
                                password = form.cleaned_data['password']
                                user = authenticate(username=username, password=password)
                                if user is not None: 
                                        login(request, user)  # loggin in the user 
                                        return redirect('profile_user_link')
                else : 
                        form = AuthenticationForm()
                return render(request, template_path, {'form' : form})   # returning not under any if or else will also handle if the user credentials are wrong, it will then show the same log in page 
        else: 
                return redirect('profile_user_link')  # else , he is already a logged in user, so redirect him to profile page 

# when the user is logged in, then the user is redirected to this view 
def profile_user(request): 
        if request.user.is_authenticated:   # give access to profile only if the user is authenticated i.e already logged in  
                template_path = 'auth_user/profile_user.html'
                return render(request, template_path, {'user' : request.user})   # request.user is django built in | it holds the current user 
        else: 
             return redirect('log_in_user_link')   # else redirect to the login page 

# to log out user 
def logout_user(request): 
        logout(request) # just pass the request in the logout builtin func 
        return redirect('log_in_user_link')



# change password with old password 
# PasswordChangeForm takes old passeord to change the password 
def change_password_with_old_pass(request): 
        if request.user.is_authenticated: 
                template_path = 'auth_user/change_password.html'
                if request.method == 'POST': 
                        form = PasswordChangeForm(user=request.user, data=request.POST)
                        if form.is_valid(): 
                                form.save()
                                # print(form.user)
                                update_session_auth_hash(request, request.user)    # updating the hashing | changin the pass (we can pass here either request.user or form.user)
                                return redirect('profile_user_link')
                else: 
                        form = PasswordChangeForm(user=request.user)
                return render(request, template_path, {'form' : form})
        else: 
                return redirect('log_in_user_link')  # if user is not authenticated i.e not already logged in, then redirect him to log in page if he tries to access this view link 
        

# change password without old password 
# SetPasswordForm does not take old password to change password 
def change_password_without_old_pass(request): 
        if request.user.is_authenticated: 
                template_path = 'auth_user/change_password.html'   # using the same template 
                if request.method == 'POST': 
                        form = SetPasswordForm(user=request.user, data=request.POST)
                        if form.is_valid(): 
                                form.save()
                                update_session_auth_hash(request, form.user)  # updating the hashing | changin the pass using here the form.user | request.user will also work (cross check this using gpt and runnning code again)
                                return redirect('profile_user_link')
                else: 
                        form = SetPasswordForm(user=request.user)
                return render(request, template_path, {'form' : form})
        else: 
                return redirect('log_in_user_link')  # if user is not authenticated i.e not already logged in, then redirect him to log in page if he tries to access this view link 



# changing the user personal data 
def change_data_user(request): 
        if request.user.is_authenticated:   # only if the user authenticated, then allow him to change his personal data 
                if request.method ==   'POST': 
                        form = ChagneUserData(request.POST, instance=request.user)  # this is required to pass otherwise data will not be updated   # to show the already stored data, we need to pass the instance=request.user 
                        if form.is_valid():  
                                messages.success(request, 'Your account has been updated successfully!')
                                form.save()
                                print(form.cleaned_data)
                else : 
                        form = ChagneUserData(instance=request.user)
                template_path = 'auth_user/change_user_data.html'
                return render(request, template_path, {'form' : form})
        else:  
                return redirect('log_in_user_link')















