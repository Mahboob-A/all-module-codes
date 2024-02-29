
# 180623, Sundya, 01.00 pm 

from django.db import models

# Create your models here.

# FORM API 
class ExampleModel(models.Model): 
        roll = models.IntegerField(verbose_name='Student Roll', primary_key = True)
        name = models.CharField(verbose_name='Student Name', max_length=30)
        email = models.EmailField(verbose_name='Student Email', max_length=30)
        address = models.TextField(verbose_name = 'Student Address', max_length=150)
        
        def __str__(self): 
                return self.name 
        
        
        
# MODEL FORM 
class StudentModel(models.Model):
        roll = models.IntegerField(primary_key=True)
        name = models.CharField(max_length=30)
        email = models.EmailField(max_length=30)
        password = models.CharField(max_length=30)
        
        def __str__(self): 
                return f"Student Name :   {self.name}"