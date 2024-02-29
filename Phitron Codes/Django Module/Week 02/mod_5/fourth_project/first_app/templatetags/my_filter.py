
'''
ACC Django
Week 02  : Django Template
Module date : 220523, Monday 
Watch date : 3100523, Wednesday, 11.30 am  (this day I just watched it, then I begun Geeky Shows 
I have watched geeky shows videos till vid 45 (diff between get and post))

Now again I am continuing from where I left : 5.5 Creating Custom Template and Template Tags
On 160323, Friday, 08.00 am 

'''

'''
A. Custom Filter : 
        a custom filter is similart to the built-in filters. Here we will create our own as per needed filters. 
        register.filter('filter_name', func_name) 
        
B. Custom Template : 
        we can use {% include 'template name' %} to include any template in the current template to make 
        the code more moduler and readable. 
        
        But if we want more control on how we include the template, we need to create custom template. 
        
        If we have some data to show, we need the to be passed in the template. For this we use
        views.py and create a func there and pass the data, and we can make a seperate template and do all the 
        stuffs to show the data. And we can include that template whereever we need to show the data. 
        But this won't work as we need to hit that views.py func url to get the data passed form that func to the
        template and then it will show in the current template. 
        
        So, to overcome this, we will create custom template and we can create func and pass any data we need 
        to show. And lastly, get the data rendered in a seperate template and use all these like a tag in any 
        template to show the data anywhere. This will enable us to make code moduler if we have same data
        to be shown multiple times. So, we can create custom tempale for this. 
        
        template_rendered = get_template('seperate tempate file path where I will render this code')
        register.inclusion_tag(template_rendered)(my func in this file where the data is located)
        
        Note : Create a folder in the app named : "templatetags " and inside the folder create __init__.py
        so that the files can be loaded or imported. 
        
        Note : 
                A. Wherever we need to use the custom filer :
                        1. {% load file_name_of_custom_filter %}
                        (get data passed form the views to be filtered)
                        2. {{name|filter_name:argument}}  #filtername ta register.filter('filter_name', func_name) ai filter_name dite hobe 
                        
                B. Whenever we need to use the custom template :
                        {% load my_custom_template_file_name %} 
                        
                        use :
                        {% my_custom_template_function_name %}

'''

# In this file a customer filter tag is create 

from django.template import Library

register = Library()

def sorkari_filter(value, arg):
        if arg == 'title': 
                return value.title()
        
        elif arg == 'truncate':
                length = len(value)
                if length > 1 : 
                        if length % 2 == 0 : 
                                return value[: length // 2]
                        else : 
                                return value[: length // 2 + 1]
                return value 

        elif arg == 'in_ascii':
                return [ord(char) for char in value]  #making all the value converted into ascii and return a list. 
        
        else : 
                return value # if no arg is matched (if else is not given and no arg is matched, then automatically None is returned)
        

register.filter('generalFilter', sorkari_filter)
                