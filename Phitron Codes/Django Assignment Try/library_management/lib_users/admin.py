from django.contrib import admin

# Register your models here.
from .models import DemoModel

@admin.register(DemoModel)
class DemoModelAdmin(admin.ModelAdmin): 
        list_display = ['id', 'name', 'email', 'password']