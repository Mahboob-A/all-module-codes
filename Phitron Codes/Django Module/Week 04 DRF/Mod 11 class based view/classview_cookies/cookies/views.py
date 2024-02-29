# 230623, Friday, 06.00 am
from django.shortcuts import render
from datetime import datetime, timedelta 

# Create your views here.

'''
Creating views for set, get and delete cookies 
'''

def home(request): 
        ''' setting cookies in the home page '''
        response = render(request, 'cookies/home.html')
        # response.set_cookie('name', 'Rahim')
        # response.set_cookie('name', 'Fahim', max_age=10)
        response.set_cookie('name', 'Fahim', expires=datetime.utcnow()+timedelta(days=3))  # it will expire in 3 days 
        return response

def get_cookie(request): 
        ''' getting the cookie with the key -> name  '''
        name = request.COOKIES.get('name')
        return render(request, 'cookies/show_cookie.html', {'name' : name})

def del_cookie(request): 
        ''' deleting the cookie with the key -> name '''
        response = render(request, 'cookies/del_cookie.html')
        response.delete_cookie('name')
        return response 


'''
Views for sessions 
(240623, Saturday, 06.00 am)
'''

def set_session(request): 
        ''' setting some data in session  '''
        data = {
                'name' : 'Halim', 
                'age' : 30, 
                'language' : 'Bengali'
        }
        request.session['data'] = data 
        # request.session.update(data)
        
        # i am gettin gkey error if trying to set and get this big_data 
        # big_data = {
        #         'details' : {
        #                 'name' : 'Halim', 
        #                 'age' : 30, 
        #                 'language' : 'Bengali'
        #         },
        #         'job' : {
        #                 'work_place' : 'govt',
        #                 'title' : 'headmaster',
        #                 'salary' : 50000
        #         },
        #         'education' : {
        #                 'primary' : '60%', 
        #                 'secondary' : '80%',
        #                 'college' : '50%'
        #         }
        # }
        

        return render(request, 'cookies/set_session.html')


def get_session(request):
        ''' show session data  '''
        data = request.session['data']
        # name = request.session.get('name', 'ok')

        
        return render(request, 'cookies/show_session_data.html', {'data' : data}) 



def del_session(request): 
        
        # this will delete entire sessions 
        request.session.flush()
        # del request.session['name']
        return render(request, 'cookies/del_session.html')








