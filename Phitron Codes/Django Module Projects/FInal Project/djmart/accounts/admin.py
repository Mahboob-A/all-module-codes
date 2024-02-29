from django.contrib import admin
from django.contrib.auth.admin import UserAdmin
# Register your models here.
from .models import Account

# Custom User Model Reginstration 
class AccountAdmin(UserAdmin): 
        list_display = ['email', 'username', 'first_name', 'last_name', 'phone_no', 'last_login', 'date_joined', 'is_active']
        list_display_links = ('email', )
        readonly_fields = ['last_login', ]
        ordering = ['-date_joined',]
        filter_horizontal = ()
        list_filter = ()
        fieldsets = ()
        
                
                
admin.site.register(Account, AccountAdmin)