from django.db import models

# Create your models here.
from django.contrib.auth.models import AbstractUser


from django.db import models
from django.contrib.auth.models import AbstractUser

class User(AbstractUser):
        bio = models.TextField(max_length=500, blank=True)
        location = models.CharField(max_length=30, blank=True)
        birth_date = models.DateField(null=True, blank=True)
                

class DemoModel(models.Model): 
        name = models.CharField(max_length=30)
        email = models.EmailField()
        password = models.CharField(max_length=30)
