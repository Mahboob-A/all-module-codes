
# 020723, Sunday, 06.00 am 


from django.db import models
from django.contrib import auth
from django.contrib.auth.base_user import BaseUserManager

class UserManager(BaseUserManager): 
        ''' handler method to create user '''
        
        use_in_migrations = True 
        def _create_user(self, email, password, **kwargs): 
                if not email: 
                        raise ValueError('email must be set')
                email = self.normalize_email(email)
                user = self.model(email=email, **kwargs)
                user.set_password(password)
                user.save(using=self._db)
                return user 
        
        def create_user(self, email=None, password=None, **kwargs):
                ''' interface method to handle create user  '''
                
                # set the superuser permission to False for general users 
                kwargs.setdefault('is_staff', False)
                kwargs.setdefault('is_superuser', False)
                
                # call handler method to create user 
                return self._create_user(email, password, **kwargs)

        
        def create_superuser(self, email, password=None, **kwargs): 
                ''' method to create the superuser and handle permissons  '''

                # set the superuser permission to True 
                kwargs.setdefault('is_staff', True)
                kwargs.setdefault('is_superuser', True)

                # if general user tries to access admin panel 
                if kwargs.get('is_staff') is not True : 
                        raise ValueError('Superuser must have is_staff=True')
                
                if kwargs.get('is_superuser') is not True : 
                        raise ValueError('Superuser must have is_superuser=True')
                
                return self._create_user(email, password, **kwargs)