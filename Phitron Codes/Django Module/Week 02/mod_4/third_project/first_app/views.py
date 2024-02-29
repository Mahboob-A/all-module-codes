from django.shortcuts import render

# Create your views here.

# def contact(request):
#         # the is the normal return || in this case do not add this in indexhtml file <p> Text : {{dict_key}} </p>
#         # return render(request, './first_app/index.html')
        
#         # also passing a contest. we can pass anything inside the dict - just a normal dict or  a list tuple or just a string etc 
#         # we can also render string like below. in the index file access it in this way : 
#         # <p> Text : {{dict_key}} </p>
#         return render(request, './first_app/index.html', context= {'author' : 'Mahboob Alam', 'age' : '18', 'marks' : 90 })
        
#         # if in the context any integer value is given as string, then in the 
#         # html file, in the django template language -> the comparison should also be in string type  
#         # and if in the context the integer is in int form, then in the DTL, the comparison should also be in int form 



# from vids 4-4 for loop in DTL onwards 

def contact(request):
        
        courses = {
                
              
                        
                'list_1': 
                [
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
                        }
                ],
                
                'list_2': 
                [
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
        }
        
        # context_dict = {'course_dict' : courses}
        
        # return render(request, './first_app/index.html', context=  {'list_1': 
        #         [
        #                 {
        #                         'id': 1,
        #                         'course': 'C',
        #                         'teacher': 'Rahim'
        #                 },
        #                 {
        #                         'id': 2,
        #                         'course': 'C++',
        #                         'teacher': 'Fahim'
        #                 },
        #                 {
        #                         'id': 3,
        #                         'course': 'Python',
        #                         'teacher': 'Mahim'
        #                 }
        #         ]})
        
        context = {'course_dict' : courses}

        return render(request, './first_app/index.html',   context)


# For 4 -5 module || filters 
        

def filters(request):
        context = {
                
                        'name'  :  'Hello, I am Mahboob Alam', 'lst' : [1, 2, 3, 4, 5], 
                        'blog' : 'This is a demo blog text. Today is 250523, Thursday. Module no is 4 - 5 about Django filters', 
                        'marks' : 90
                   
                }
        
        template_path = './first_app/filters.html'
        return render(request, template_path, context)



































 