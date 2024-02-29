from django.db import models

# Create your models here.

''' admin '''
# un : admin 
# email : admin#gmail.com
# pwd : admin1

class BookStoreAddBooksModel(models.Model):
        CATEGORY = (
                ('Mystery', 'Mystery'),
                ('Thriller', 'Thriller'), 
                ('Sci-Fi', 'Sci-Fi'), 
                ('Humor', 'Humor'), 
                ('Horror', 'Humor'), 
                ('Novel', 'Novel'), 
                ('Bengali Classic Novel', 'Bengali Classic Novel'),
                ('Sucpence', 'Sucpence'), 
                ('Short Story' , 'Short Story'), 
                ('Romance', 'Romance'), 
                ('Modern', 'Modern'), 
                ('Retro', 'Retro'), 
                ('History', 'History'), 
                ('Religious', 'Religious'), 
                ('Documentary', 'Documentary'),
                ('Self Help', 'Self Help'), 
                ('High Life Spirituality', 'High Life Spirituality'),
                ('How To', 'How To'),
                ('Bengali Novel', 'Bengali Novel'),
        )
        
        id = models.AutoField(primary_key=True)
        book_name = models.CharField(max_length=50)
        author = models.CharField(max_length=50)
        category = models.CharField(max_length=50, choices=CATEGORY)
        first_pub = models.DateField(auto_now_add=True)
        last_pub = models.DateField(null = True)   # making it optional for database tabale, and made it optonal ad required false in form. Black=True 
        # wont work I again any field is updated in the form field just the way form api. 
        
        













'''
auto_now_add 
auto_add


auto_now_add=True: When auto_now_add is set to True, the field will be automatically set to the
current date and time when the object is created for the first time. It won't update the value upon subsequent saves or modifications of the object.

auto_now=True: When auto_now is set to True, the field will be automatically updated to
the current date and time each time the object is saved or modified. It will update the value on every save, even if it's not the first creation of the object.

'''