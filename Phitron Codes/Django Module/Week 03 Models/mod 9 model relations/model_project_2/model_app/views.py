
# Module release date : 270523, Saturday 
# Watch date : 180623, Sunday 

from django.shortcuts import render, redirect

from . models import  ExampleModel, StudentModel
from . forms import StudentModelForm 

# func to show all db data 
def show_example_data(request):
        example_db = ExampleModel.objects.all()
        # print(example_db)
        return render(request, 'model_app/show_data.html', {'example_db' : example_db})


# func to delete data from db table example db 
def delete_data(request, roll): 
        obj = StudentModel.objects.get(pk=roll).delete()
        return redirect('show_data_link')  #redirecting to the same page after deleting  


'''  ModelForm  '''
# 190623, Monday, 06.00 am 
def get_student_details(request): 
        if request.method == 'POST': 
                model_form = StudentModelForm(request.POST)
                if model_form.is_valid(): 
                        model_form.save()     # saving the data in the StudentModelForm table   if form.save(commit=False) then no data will be saved. default save(commit=True)
                        print(model_form.cleaned_data)
                        return redirect('get_student_details_link')  #erdirecting to the same page so fresh page may come 
        else : 
                model_form = StudentModelForm()
        return render(request, 'model_app/get_student_details.html', {'model_form' : model_form})


def show_student_data(request): 
        all_students_data = StudentModel.objects.all()
        return render(request, 'model_app/show_data.html', {'all_student_data' : all_students_data, 'is_student_data' : True})