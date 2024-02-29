

'''
This file demonstrate how to create a custom template file to include it 
in any tempalte with own data. 

to see more, see the my_filter.py file in this same directory. This file is continuation of the 5.5 
video. 

160623, Friday, 09.00 am 
'''


from django.template import Library
from django.template.loader import get_template

register = Library()

def show_courses():
        courses = [
                
                {
                        'id': 1,
                        'course': 'C',
                        'teacher': 'Rahim'
                },
                {
                        'id': 2,
                        'course': 'C++',
                        'teacher': 'Fahim'
                },
                {
                        'id': 3,
                        'course': 'Python',
                        'teacher': 'Mahim'
                },
        
                {
                        'id': 4,
                        'course': 'DBMS',
                        'teacher': 'Rahim'
                },
                {
                        'id': 5,
                        'course': 'OS',
                        'teacher': 'Jahim'
                },
                {
                        'id': 6,
                        'course': 'DSA',
                        'teacher': 'Hakim'
                }, 
                {
                        'id': 7,
                        'course': 'Open Source',
                        'teacher': 'Malik'
                }
        ]
        
        return {'courses' : courses}


courses_template = get_template('form_app/courses_template.html')
register.inclusion_tag(courses_template)(show_courses)