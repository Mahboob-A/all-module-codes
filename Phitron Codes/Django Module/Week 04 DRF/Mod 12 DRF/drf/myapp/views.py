from django.shortcuts import render
from django.http import Http404
from rest_framework.views import APIView
from rest_framework.response import Response
from rest_framework import status, viewsets

from rest_framework import generics  # for concrete view 

from . import models 
from . import serializers 

# Create your views here.

'''
Week 04 : Deep Dive Into Django
Module 12 : Introduction To DRF, Views and Serializers 
Module date : probably 05 to 10 june, 2023. 
Mod watch date : 240623, Saturday, 03.30 pm 
'''

# simple get and pust view | get shows all the data 
class StudentView(APIView):

    def get(self, request, format=None):
        student_data = models.StudentData.objects.all()
        serializer = serializers.StudentSerializer(student_data, many=True)
        return Response(serializer.data)

    def post(self, request, format=None):
        serializer = serializers.StudentSerializer(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)


# view for get put and delete (here the get takes a primary key and based on that pk, response is created. the pk is passed dynamically form the browser)
class StudentDetailsView(APIView):
        def get_object(self, pk): 
                try : 
                        return models.StudentData.objects.get(pk=pk)
                except models.StudentData.DoesNotExist: 
                        raise Http404
                
        def get(self, request, pk, format=None): 
                student_detail = self.get_object(pk)
                serializer = serializers.StudentSerializer(student_detail)
                return Response(serializer.data)
        
        def put(self, request, pk, format=None): 
                student_detail = self.get_object(pk)
                serializer = serializers.StudentSerializer(student_detail, data=request.data)
                if serializer.is_valid():
                        serializer.save()
                        return Response(serializer.data)
                return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
        
        def delete(self, request, pk, format=None): 
                student_detail = self.get_object(pk)
                student_detail.delete()
                return Response(status=status.HTTP_204_NO_CONTENT)
        
        


# using the below two classes, the entire upper codes will be replaced i.e this will work as the same the upper codes do 
# for Student Data table 
'''concrete view'''
class StudentListCreateView(generics.ListCreateAPIView):  # this will handle the normal get and post 
        queryset = models.StudentData.objects.all()
        serializer_class = serializers.StudentSerializer
        

class StudentRetriveUpdateDestroyView(generics.RetrieveUpdateDestroyAPIView):    # this will handle the put and delete 
        queryset = models.StudentData.objects.all()
        serializer_class = serializers.StudentSerializer
        
# for course data table 
class CourseListCreateView(generics.ListCreateAPIView):  # this will handle the normal get and post 
        queryset = models.Course.objects.all()
        serializer_class = serializers.CourseSerializer
        

class CourseRetriveUpdateDestroyView(generics.RetrieveUpdateDestroyAPIView):    # this will handle the put and delete 
        queryset = models.Course.objects.all()
        serializer_class = serializers.CourseSerializer
        
        
        
        
''' model view set (entire CURD opetations done on this single class for each database table mentioned) '''
''' for using model view set, we need to use routing in the url so that all the opetaions get link dynamically in a single url '''
# for StudentData table 
class StudentViewSet(viewsets.ModelViewSet):
    queryset = models.StudentData.objects.all()
    serializer_class = serializers.StudentSerializer


# for Course table 
class CourseViewSet(viewsets.ModelViewSet):
    queryset = models.Course.objects.all()
    serializer_class = serializers.CourseSerializer
#     permission_classes = [IsAccountAdminOrReadOnly]



