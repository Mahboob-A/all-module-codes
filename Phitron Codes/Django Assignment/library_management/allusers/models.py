from django.db import models

# Create your models here.
from django.contrib.auth.models import AbstractBaseUser, BaseUserManager, AbstractUser
from .managers import UserManager



class User(AbstractUser): 
        ''' custom user class (use AbstractUser for creatig custom user model) '''
        
        # using the custom manager for user model 
        objects = UserManager()
        username = None
        email = models.EmailField(unique=True, null=False, blank=False)
        USERNAME_FIELD = 'email'
        REQUIRED_FIELDS = []
        
        def __str__(self): 
                return self.email 
        
        class Meta:
                swappable = 'AUTH_USER_MODEL'
                

class UserDetails(models.Model):
        user = models.OneToOneField(User, on_delete=models.CASCADE, related_name='details')
        first_name = models.CharField(max_length=50)
        last_name = models.CharField(max_length=50)
        account_no = models.IntegerField(unique=True, editable=False)

        def save(self, *args, **kwargs):
                if not self.id:
                        last_user = UserDetails.objects.order_by("-id").first()
                        if last_user:
                                self.account_no = last_user.id + 10000
                        else:
                                self.account_no = 10000
                super().save(*args, **kwargs)



# class AuthUser(AbstractUser):
#         user_email = models.EmailField(unique=True)
#         password = models.CharField(max_length=30)
#         is_active = models.BooleanField(default=True)
#         is_staff = models.BooleanField(default=False)

#         objects = UserManager()

#         USERNAME_FIELD = 'user_email'
#         # Add any additional fields required for authentication
#         # For example, USERNAME_FIELD = 'username'
        
#         class Meta:
#                 swappable = 'AUTH_USER_MODEL'



# from django.contrib.auth.models import AbstractUser

# class AllUser(AbstractUser):
#     account_no = models.IntegerField(unique=True, editable=False)

#     def save(self, *args, **kwargs):
#         if not self.id:
#             last_user = AllUser.objects.order_by("-id").first()
#             if last_user:
#                 self.account_no = last_user.id + 10000
#             else:
#                 self.account_no = 10000
#         super().save(*args, **kwargs)




#######################################################

# import datetime
# from django.db import models
# from decimal import Decimal
# from django.contrib.auth.models import AbstractUser
# from django.core.validators import MinValueValidator, MaxValueValidator


# from .constants import GENDER_CHOICES
# # Create your models here.

# class User(AbstractUser): 
#         ''' custom user class (use AbstractUser for creatig custom user model) '''
        
#         # using the custom manager for user model 
#         objects = UserManager()
#         username = None
#         email = models.EmailField(unique=True, null=False, blank=False)
#         USERNAME_FIELD = 'email'
#         REQUIRED_FIELDS = []
        
#         def __str__(self): 
#                 return self.email 
        
#         @property
#         def balance(self): 
#                 if hasattr(self, 'account'): 
#                         return self.account.balance
#                 return 0 
        
# # class User(AbstractUser):
# #     username = None
# #     email = models.EmailField(unique=True, null=False, blank=False)

# #     objects = UserManager()

# #     USERNAME_FIELD = 'email'
# #     REQUIRED_FIELDS = []

# #     def __str__(self):
# #         return self.email

# #     @property
# #     def balance(self):
# #         if hasattr(self, 'account'):
# #             return self.account.balance
# #         return 0



        
# class BankAccountType(models.Model): 
#         ''' model to handle the type of bank account '''
#         name = models.CharField(max_length=30)
#         maximum_withdrawl_amount = models.DecimalField(default=50000, max_digits=8, decimal_places=2)
        
#         def __str__(self): 
#                 return self.name 
        
        
# class UserBankAccount(models.Model): 
#         ''' model for user bank account  '''
#         user = models.OneToOneField(User, related_name='account', on_delete=models.CASCADE)
#         account_type = models.ForeignKey(BankAccountType, related_name='account_type', on_delete=models.CASCADE)
#         account_no = models.PositiveIntegerField(unique=True)
#         gender = models.CharField(max_length=1, choices=GENDER_CHOICES)
#         birth_date = models.DateField(null=False, blank=False)
#         balance = models.DecimalField(default=0, max_digits=10, decimal_places =2)
#         initial_deposite_date = models.DateTimeField(default=datetime.datetime.now())

#         def __str__(self): 
#                 return str(self.account_no)
        
# class UserAddress(models.Model): 
#         ''' model for user address '''
#         user = models.OneToOneField(User, related_name='address', on_delete=models.CASCADE)
#         street_address = models.CharField(max_length=150)
#         city = models.CharField(max_length=30)
#         postal_code = models.IntegerField()
#         country = models.CharField(max_length=30)
        
#         def __str__(self): 
#                 return self.user.email 