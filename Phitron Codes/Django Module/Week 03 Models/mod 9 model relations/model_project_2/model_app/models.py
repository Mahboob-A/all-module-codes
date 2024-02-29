
# 180623, Sunday, 01.00 pm 
# More about models (relationships in django)


from email.policy import default
from random import choices
from django.db import models

# Create your models here.


# MODEL FORM 
class ExampleModel(models.Model): 
        roll = models.IntegerField(verbose_name='Student Roll', primary_key = True)
        name = models.CharField(verbose_name='Student Name', max_length=30)
        email = models.EmailField(verbose_name='Student Email', max_length=30)
        address = models.TextField(verbose_name = 'Student Address', max_length=150)
        
        def __str__(self): 
                return self.name 
        
        
        
class StudentModel(models.Model):
        roll = models.IntegerField(primary_key=True)
        name = models.CharField(max_length=30)
        email = models.EmailField(max_length=30)
        password = models.CharField(max_length=30)
        
        def __str__(self): 
                return f"Student Name :   {self.name}"
        
        
        
        
        
        
        

        
'''                                     ###########################################                                                 '''
# 200623, Tuesday, 04.00 pm 
# FROM here onwards, MODULE 09 More about models beign 
# I have copied the module 7'th or seventh project (in moduel) or model_project of mine into this project 
# the upper portion of codes, and some templates are still remains 



''' abstract base class

1. we can only inherit  abstract base class
2. we can not instantiate  abstract base class
3. no database / table will be created for any abstract base class
4. we can not register abstract base class in model admin 

'''

# abstract base class 
class CommonDetailsAbstractModelClass(models.Model): 
        ''' creating an abstract class placing all the common attributes 
        | no instance can be created of abstract class, no table is created 
        in the database of abstract class, no form can be created and abstract calss can be registered in model
        admin '''
        user_id = models.AutoField(primary_key = True, default=0)
        name = models.CharField(verbose_name='Student Name', max_length=30)
        email = models.EmailField(verbose_name='Student Email', max_length=30)
        password = models.CharField(verbose_name='Password', max_length=30)
        address = models.TextField(verbose_name = 'Student Address', max_length=150)
        
        class Meta : 
                abstract = True         


# inheriting the abstract class. It makes code less and more organized. adding only the not-common attributes here 
class StudentInfoModel(CommonDetailsAbstractModelClass): 
        roll = models.IntegerField(verbose_name='Student Roll')
        student_class = models.CharField(verbose_name='Student Class', max_length=15)
        section = models.CharField(verbose_name='Student Section', max_length=10)
        payment = models.IntegerField()
        
        
class TeacherInfoModel(CommonDetailsAbstractModelClass): 
        subject_name = models.CharField(verbose_name='Teacher Subject', max_length=15)
        salary = models.IntegerField()
        
        



''' Multitable Inheritance 

1. we can instantiate Multitable parent class
2. we can register Multitable parent class in model admn 
3. database / table will be created for Multitable parent class 
4. all the data of the child classes that inherit Multitable parent class, will also be added / visible in Multitable parent class
5. but no data of the Multitable parent class will be added / visible in any of its child class 
6. any deletion form the child class of any data would delete the same data stored in Multitable parent class also. 


'''

# multiltalbe parent class  
class EmployeeModel(models.Model) : 
        name = models.CharField(max_length=30)
        email = models.EmailField(max_length=50)
        designation = models.CharField(max_length = 20)
        salary = models.IntegerField()
        address = models.TextField()
        
        
class ManagerModel(EmployeeModel) : 
        take_interview = models.BooleanField()
        hiring = models.BooleanField()
        
        
        
'''Proxy Model Inhertance  

1. a model that labeled as proxy - no database table is created for that model 
2. it relies on the base class it inherited.
3. all the data of the base class of the proxy model are mirrored in the proxy model. 
4. as no database table is created, a abstract class with defined fields can not be a base or parent class of a proxy model 
5. all the curd operations are possible on both the proxy and the base class. 
6. all the effect of the curd operations are same on the both class. 
7. no new fields can be added into the proxy model 
8. more about proxy and 3 types of inheritance can be found here : 
        a. https://wellfire.co/learn/using-django-proxy-models/
        b. https://docs.djangoproject.com/en/4.2/topics/db/models/#proxy-models
        c. https://ilovedjango.com/django/models-and-databases/model-inheritance/
        
'''

class PersonModel(models.Model): 
        name = models.CharField(max_length=30)
        email = models.EmailField(max_length=50)
        
        
class PersonModelProxy(PersonModel): 
        
        class Meta : 
                proxy = True 
                ordering = ['id']
                
                
'''OneToOneRelationSHip '''
class  People(models.Model): 
        name = models.CharField(max_length=30)
        email = models.EmailField(max_length=50)
        address = models.TextField(max_length=150)

        def __str__(self): 
                return self.name 
        

class Passport(models.Model):
        people = models.OneToOneField(to=People, on_delete=models.CASCADE)   # amking a one to one relation with the People class 
        pass_num = models.IntegerField(verbose_name='Passport Number')
        pass_page = models.IntegerField(verbose_name='Total Page')
        pass_validity = models.IntegerField(verbose_name='Passport Validity')
        
        def __str__(self): 
                return str(self.people)
        

# NB : the attribute name when creating the one to one field is generally the small case of the model we are creating the relationship with 
# here , we are creating a one to one relation with People class in the Passport class. It means, for every one object of People class, 
# there could be only one data of passport

'''ManyToOne relationship  or OneToMany relationship 

When one or more rows of table B can be linked with one row of table A, 
then we can call it as ManyToOne relationship. 

That means, one row of talbe A can create multiple row in table B. (Which was not possbile in onetoone relationship)

The rest of the keyword are same. 
'''

class User(models.Model): 
        name = models.CharField(max_length=30)
        email = models.EmailField(max_length=50)
        address = models.TextField(max_length=150)
        
        def __str__(self): 
                return self.name 
        
class Post(models.Model): 
        CHOICES = (
                ('f', 'funny'),
                ('g', 'general'),
                ('e', 'emotional'), 
                ('p', 'political'),
                ('m', 'motivative'), 
                ('n', 'news'), 
                ('u', 'other updates'),
        )
        user = models.ForeignKey(to=User, on_delete=models.CASCADE)
        post_title = models.CharField(max_length=30)
        post_category = models.CharField(max_length=1, choices=CHOICES)
        post_published_date = models.DateTimeField()
        
        


''' ManyToMany relationship  

when a row of Taable A can be linked with more than one row of Table B, and vice versa - then it is called ManyToMany relationship. 

For this relationship, a table in this naming format -  appname_modelA_modelB is created in the backgroud to 
hold the realtions of the both models. 

In this relation, we can not use on_delete and no hidden modelA_id column is created and we also can not
use the relationship field variable in the list_display of tableB 
instead we need to create a func in tableB to see the realtions in the admin panel. 

'''

class Student(models.Model): 
        name = models.CharField(max_length=30)
        roll = models.IntegerField()
        class_name = models.CharField(max_length=30)
        
        def __str__(self): 
                return self.name 

class Teacher(models.Model): 
        CHOICES = (
                ('s', 'sunday'),
                ('m', 'monday'),
                ('t', 'tuesday'), 
                ('w', 'wednesday'),
                ('th', 'thursday'), 
                ('f', 'friday'), 
                ('sa', 'saturday'),
        )
        student = models.ManyToManyField(Student)
        name = models.CharField(max_length=30)
        subject = models.CharField(max_length=30)
        teach_on_days = models.CharField(max_length=2, choices=CHOICES, default='Sunday')
        mobile = models.CharField(max_length=13)
        
        def all_students(self): 
                return ', '.join([str(st) for st in self.student.all()])
        












