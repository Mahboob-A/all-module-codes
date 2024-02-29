
from django import forms 
from django.forms.widgets import DateInput
from book.models import BookStoreAddBooksModel

'''
        book_name = models.CharField(max_length=50)
        author = models.CharField(max_length=50)
        category = models.CharField(max_length=50, choices=CATEGORY)
        first_pub = models.DateField(auto_now_add=True)
        last_pub = models.DateField()
'''



class BookStoreAddBooksModelForm(forms.ModelForm):
        # last_pub = forms.DateField(required=False)  # not required here as I already have set blank = True in the model. 
        class Meta : 
                model = BookStoreAddBooksModel
                exclude = ['id']
                labels = {
                        'book_name' : 'Book Name', 
                        'author' : 'Author Name', 
                        'category' : 'Book Category', 
                        'first_pub' : 'First publication date', 
                        'last_pub' : 'Last publication date' 
                }
        widgets = {
                # 'last_pub' : DateInput(attrs={'type': 'date'})
        }
        error_messages = {
                'book_name' : {'required' : 'You must enter a book name'}, 
        }
         
        # after adding the date picker for last pub here, the label for it using the labels dict doesnot work, so again gave it here 
        last_pub = forms.DateField(label='Last Publication Date', required=False, widget=DateInput(attrs={'type': 'date'}))   
        
        
        
        
class GetBookIdForm(forms.Form): 
        book_id = forms.IntegerField(label='Book Id', widget=forms.NumberInput(attrs={'class' : 'book_id', 'placeholder' : 'Enter book id'}))
        

                
                
