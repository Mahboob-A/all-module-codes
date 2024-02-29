from django.db import models

# Create your models here.

from django.contrib.auth.models import User

'''
GOALS
The application might be used by several companies
Each company might add all or some of its employees
Each company and its staff might delegate one or more devices to employees for
a certain period of time
Each company should be able to see when a Device was checked out and returned
Each device should have a log of what condition it was handed out and returned
'''


class Electronics(models.Model): 
        name = models.CharField(max_length=30)
        brand = models.CharField(max_length=30)
        product_category = models.CharField(max_length=15)
        producer = models.CharField(max_length=30)


class Gadgets(models.Model): 
        electronics = models.ForeignKey(Electronics, on_delete=models.CASCADE, related_name='electronics')
        checkout_date = models.DateTimeField(auto_now_add=True)  # also assume from this date, the validity for usage has beign 
        return_date = models.DateTimeField()
        checkout_log = models.TextField(blank=True)
        return_log = models.TextField(blank=True)
        validity = models.DateField()  # the max duration an employee can hold/use the electronics 

        


























class Gadgets(models.Model): 
        name = models.CharField(max_length=55)
        brand = models.CharField(max_length=55)
        category = models.CharField(max_length=15)
        producer = models.CharField(max_length=15)
        checkout_date = models.DateTimeField(auto_now_add=True)  # also assume from this date, the validity for usage has beign 
        return_date = models.DateTimeField(auto_now=True)
        checkout_log = models.CharField(max_length=255)
        return_log = models.CharField(max_length=255)
        usage_validity_end_date = models.DateField(auto_now=True)

        
class Electronics(models.Model): 
        name = models.CharField(max_length=30)
        brand = models.CharField(max_length=30)
        product_category = models.CharField(max_length=15)
        producer = models.CharField(max_length=30)
        checkout_date = models.DateTimeField(auto_now_add=True)  # also assume from this date, the validity for usage has beign 
        return_date = models.DateTimeField()
        checkout_log = models.TextField(blank=True)
        return_log = models.TextField(blank=True)
        validity = models.DateField()  # the max duration an employee can hold/use the electronics 
        
        class Meta: 
                abstract = True 
                
class Phone(Electronics):
        pass 

class Mackbook(Electronics): 
        pass 

class iPad(Electronics): 
        pass 

class Laptop(Electronics): 
        pass 

class Gadget(models.Model): 
        phone = models.OneToOneField(Phone, on_delete=models.CASCADE)
        mackbook = models.OneToOneField(Mackbook, on_delete=models.CASCADE)
        ipad = models.OneToOneField(iPad, on_delete=models.CASCADE)
        laptop = models.OneToOneField(Laptop, one_delete=models.CASCADE)
                


class Employee(models.Model): 
        company = models.ForeignKey(User, on_delete=models.CASCADE, related_name='employee_company')
        gadget = models.ForeignKey(Gadget, on_delete=models.CASCADE, related_name='employee_gadget')
        name = models.CharField(max_length=30)
        email = models.EmailField(max_length=50)
        designation = models.CharField(max_length=30)
        