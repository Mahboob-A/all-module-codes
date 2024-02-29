from django.contrib import admin

# Register your models here.
from .models import User, UserDetails

@admin.register(User)
class AuthUserAdmin(admin.ModelAdmin): 
        list_display = ['id', 'email', 'password']
        
@admin.register(UserDetails)
class UserDetailsAdmin(admin.ModelAdmin):
        list_display = ['id', 'user', 'first_name', 'last_name', 'account_no']