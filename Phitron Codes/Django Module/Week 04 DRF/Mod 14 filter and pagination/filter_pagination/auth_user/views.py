# 260623, Monday, 06.30 am 

from django.shortcuts import render

# Create your views here.
from rest_framework import serializers, status
from rest_framework.response import Response
from rest_framework.views import APIView
from rest_framework.authtoken.models import Token  # to cretate Token at the time of user registration 

from .serializers import RegistrationSerializer
from . import signals

# notmal view to handle RegistrationSerializer without creaitng any token while a user is registered 
"""class RegistrationView(APIView): 
        def post(self, request): 
                serializer = RegistrationSerializer(data=request.data)
                if serializer.is_valid(): 
                        serializer.save()
                        return Response(serializer.data, status.HTTP_201_CREATED)
                return Response(serializer.errors, status.HTTP_400_BAD_REQUEST)"""
                

# this veiw handles the token creation at the time when a user is registered. 
class RegistrationView(APIView): 
        ''' creates an user with token '''
        def post(self, request): 
                data = {}
                serializer = RegistrationSerializer(data=request.data)
                if serializer.is_valid(): 
                        user = serializer.save()
                        data['response'] = 'Registration Successful'
                        data['username'] = user.username
                        data['email'] = user.email
                        token = Token.objects.get(user=user).key
                        data['token'] = token 
                else: 
                        data = serializer.errors 
                return Response(data)
        
        

# same as above but returning is in another way 
# class RegistrationView(APIView): 
#         def post(self, request): 
#                 data = {}
#                 serializer = RegistrationSerializer(data=request.data)
#                 if serializer.is_valid(): 
#                         user = serializer.save()  # .save() returns an object / instance of current request 
#                         data['response'] = 'Registration Successful'
#                         data['username'] = user.username
#                         data['email'] = user.email
#                         token = Token.objects.get(user=user).key
#                         data['token'] = token 
#                         return Response(data, status.HTTP_201_CREATED)
#                 else: 
#                         return Response(serializer.errors, status.HTTP_400_BAD_REQUEST)



''' view to log out. when the user is logging out, here, his existing token that was created is being deleted '''
class LogoutView(APIView): 
        ''' delets the existing token of user when he logs out  '''
        def post(self, request): 
                request.user.auth_token.delete()
                return Response('Log out Successful', status.HTTP_200_OK)


''' the below code is the implementation of obtain_auth_token passing some additonal data 
( from rest_framework.authtoken.views import obtain_auth_token  )
'''
# from rest_framework.authtoken.views import ObtainAuthToken
# from rest_framework.authtoken.models import Token
# from rest_framework.response import Response

# class CustomAuthToken(ObtainAuthToken):

#     def post(self, request, *args, **kwargs):
#         serializer = self.serializer_class(data=request.data, context={'request': request})
#         serializer.is_valid(raise_exception=True)
#         user = serializer.validated_data['user']
#         token, created = Token.objects.get_or_create(user=user)
#         return Response({
#             'token': token.key,
#             'user_id': user.pk,
#             'email': user.email
#         })



