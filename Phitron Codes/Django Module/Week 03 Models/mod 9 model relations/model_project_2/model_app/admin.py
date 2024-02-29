
# 210623, Wednesday, 06.30 am 

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
class StudentModelAdmin(admin.ModelAdmin): 
        list_display = ('roll', 'name', 'email', 'password')
        

''' regintering abstract base class '''
@admin.register(models.StudentInfoModel)
class StudentInfoAdmin(admin.ModelAdmin): 
        list_display = ('user_id', 'roll', 'name', 'email', 'password',  'student_class', 'section', 'payment', 'address')
        

@admin.register(models.TeacherInfoModel)
class TeacherInfoAdmin(admin.ModelAdmin): 
        list_display =  ('user_id', 'name', 'email', 'password', 'subject_name', 'salary', 'address')
        
        
''' registering multitable inheritance class  '''
@admin.register(models.EmployeeModel)
class EmployeeModelAdmin(admin.ModelAdmin): 
        list_display = ('id', 'name', 'email', 'designation', 'salary', 'address')

@admin.register(models.ManagerModel)
class ManagerModelAdmin(admin.ModelAdmin): 
        list_display = ('id', 'name', 'email', 'designation', 'salary', 'address', 'take_interview', 'hiring')


''' registering the proxy modesl  '''
@admin.register(models.PersonModel)
class PersonModelAdmin(admin.ModelAdmin): 
        list_display = ['id', 'name', 'email']
        

@admin.register(models.PersonModelProxy)
class PersonModelProxyAdmin(admin.ModelAdmin): 
        list_display= ['id', 'name', 'email']


''' registering the models with # " one to one relations " #

(People and Passport has one to one relation) 

here inheritance does not occure. No model would get attributes of other. Instead, 
the model in which the onetoone relatio is defined, to create any objects of that model, an object is needed of the model to which 
it has a relation with to create any row / data in the table. So, in other way, to create any instance / object of the model in which 
we have defined the relation, we must need an object of the class to which the current model has a relation. 

So, the model we are referring with to, say this is higher class, can have so many objects that are not used to create any objects with the class 
that has relation with, say this is lower class, i.e the higher class can have many objects / data / row but to create any object in the lower
class, we must need an object of the higher class. so in lower class, we have all the data in the higher class has.  

to => with which model we are making a realtion 
on_delete => if we delete the object of the class in the to => model class, then what should happen to the current model's data - it is defined in the 
on_delete 
'''

@admin.register(models.People)
class PeopleAdmin(admin.ModelAdmin): 
        list_display = ['id', 'name', 'email', 'address']
        
        
        

@admin.register(models.Passport)
class PassportAdmin(admin.ModelAdmin): 
        list_display = ['id', 'pass_num', 'pass_page', 'pass_validity', 'people', 'people_id']   # here a foreign key is automatically created with Table A name + _ id. 
        
        

''' registering the many to one relation models  '''

@admin.register(models.User)
class UserAdmin(admin.ModelAdmin): 
        list_display = ['id', 'name', 'email', 'address']
        

@admin.register(models.Post)
class PostAdmin(admin.ModelAdmin): 
        list_display = ['id', 'post_title', 'post_category', 'post_published_date', 'user', 'user_id']  # here a foreign key is automatically created with Table A name + _ id. 
        
        

''' registering the many to many fields  '''

@admin.register(models.Student)
class StudentAdmin(admin.ModelAdmin): 
        list_display = ['id', 'name', 'roll', 'class_name']
        
@admin.register(models.Teacher)
class TeacherAdmin(admin.ModelAdmin): 
        list_display = ['id', 'name', 'subject', 'teach_on_days', 'mobile', 'all_students']
        
# from .models import Teacher, Student

# class TeacherStudentInline(admin.TabularInline):
#     model = Teacher.student.through

# @admin.register(Teacher)
# class TeacherAdmin(admin.ModelAdmin):
#     inlines = [TeacherStudentInline]

# @admin.register(Student)
# class StudentAdmin(admin.ModelAdmin):
#     inlines = [TeacherStudentInline]




