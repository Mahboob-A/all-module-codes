
#main project views.py  
"""
ACC Django Course : Week 01 
Moudle 3 : Simple Page Navigation Project 
Mod date : 170523, Wednesday 
Watch date : 180523, Thursday, 06.30 pm  

"""

from django.http import HttpResponse

def home(request):
        return HttpResponse("<h1>This Is A Home Page</h1>")



