from django.contrib import admin
from . import models
# Register your models here.

@admin.register(models.StudentData)
class StudentDataAdmin(admin.ModelAdmin): 
        list_display = ['st_id', 'name', 'roll']


@admin.register(models.Course)
class CourseAdmin(admin.ModelAdmin): 
        list_display = ['course_id', 'name', 'marks']