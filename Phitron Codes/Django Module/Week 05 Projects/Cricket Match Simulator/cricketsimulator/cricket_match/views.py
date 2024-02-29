from django.shortcuts import render

from .driver import run
# Create your views here.


def home(request): 
        return render(request, 'cricket_match/home.html')

def simulator(request): 
        template_path = 'cricket_match/home.html'
        play_game = run()
        context = {'play_game' : play_game}
        
        return render(request, template_path, context)

        