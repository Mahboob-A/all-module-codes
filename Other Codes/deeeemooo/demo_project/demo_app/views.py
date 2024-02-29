from django.shortcuts import render

# Create your views here.


from rest_framework.views import APIView
from rest_framework import status 
from rest_framework.response import Response

class RenderReactPageAPI(APIView): 
        def get(self, request, format=None): 
                response_data = {
                        'learn' : 'Today we are learning django, drf, node, and some live streaming backend technologies'
                }
                 
                return Response({'status' : 'success', 'data' : response_data}, status=status.HTTP_200_OK)
        
