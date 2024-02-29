
from rest_framework import serializers 
from . import models

'''
when we want to build a relationship, in nested serializers, 
        we need to put the the below in the serializer in which no relationship keys are placed (put this serializer below to which it has relation) 
        - related_name of model in which relationship is build (ie onetoone or foreign key is placed) =
        serializer in which relationship is build(many = True)
        
        in the below example, in models, the Course model has a foreign key with StudentData table. 
        so in serializer, to put a relation here also, 
        make the StudentData serializer in below of Course serializer. And as Course serializer has a relationship 
        with StudentData, put course(related_name of Course) = Course serialier name(many=True)
        
        It implies that the student serializer can have multiple course. 
'''

class CourseSerializer(serializers.ModelSerializer): 
        class Meta: 
                model = models.Course
                fields = '__all__'

# nested serializers 
class StudentSerializer(serializers.ModelSerializer): 
        course = CourseSerializer(many=True, read_only=True)   # related_name of Course model here and Course serialier 
        # course = serializers.StringRelatedField(many=True, read_only=True)
        # course = serializers.PrimaryKeyRelatedField(many=True, read_only=True)
#         course = serializers.HyperlinkedRelatedField(
#                 many=True,
#                 read_only=True,
#                 view_name='course_details'
#     )
        class Meta: 
                model = models.StudentData
                fields = '__all__'
                
                
