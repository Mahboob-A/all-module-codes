

"""
ACC Django Course : Week 01 
Moudle 2 : Building a basic project application 
Mod date : 150523, Monday 
Watch date : 160523, Tuesday 

"""


from django.http import HttpResponse


def home(request):
    return HttpResponse("<h1>Welcome to my first Django page created on 160523, Tuesday")


def about(request):
    resp = """
                        <h2>Hi, this is my about page.
                        This page is created on 160523, Tuesday on Week 01 
                        Of ACC Django Course in Phitron.</h2>  
                        """
    return HttpResponse(resp)
