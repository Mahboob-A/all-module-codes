# 180623, Sundya, 01.00 pm 

from django.contrib import admin

# superuser : 
# un : admin email : admin@gmail.com pwd : admin1 
# Register your models here.

from . import models 

'''  registering the example model   '''

# admin.site.register(models.ExampleModel)

'''   model admin class for model emample   ''' 
# class ExampleAdmin(admin.ModelAdmin):
#         list_display = ('roll', 'name', 'email', 'address')
        
# admin.site.register(models.ExampleModel, ExampleAdmin)

''' registering model and modeladmin class using decorator  '''

@admin.register(models.ExampleModel)
class ExampleAdmin(admin.ModelAdmin): 
        list_display = ('roll', 'name', 'email', 'address')
        

''' Registering the Student Model '''
@admin.register(models.StudentModel)
class StudentAdmin(admin.ModelAdmin): 
        list_display = ('roll', 'name', 'email', 'password')