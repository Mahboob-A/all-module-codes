from django.db import models
from django.contrib.auth.base_user import AbstractBaseUser

from .managers import AccountUserManager


class Account(AbstractBaseUser): 
        
        # general attributes 
        first_name = models.CharField(max_length=50)
        last_name = models.CharField(max_length=50)
        username = models.CharField(max_length=15, unique=True)
        email = models.EmailField(max_length=50, unique=True)
        date_joined = models.DateField(auto_now_add=True)
        last_login = models.DateField(auto_now=True)
        phone_no = models.CharField(max_length=15)
                
        # permissions 
        is_active = models.BooleanField(default=False)
        is_staff = models.BooleanField(default=False)
        is_admin = models.BooleanField(default=False)
        is_superadmin = models.BooleanField(default=False)
        
        # customization 
        USERNAME_FIELD = 'email'
        REQUIRED_FIELDS = ['username', 'first_name', 'last_name', 'phone_no']
        
        # Link with CustomManager 
        objects = AccountUserManager()
        
        # general methods 
        def __str__(self): 
                return self.email
        
        def get_full_name(self): 
                return f'{self.first_name} {self.last_name}'
        
        def get_short_name(self): 
                return f'{self.first_name}'
        
        def has_perm(self, perm, obj=None): 
                return self.is_admin
        
        def has_module_perms(self, add_label): 
                return True 
         
        
        
                