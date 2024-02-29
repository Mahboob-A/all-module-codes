
from django.core.exceptions import ObjectDoesNotExist, EmptyResultSet 
from django.shortcuts import render, redirect
from time import sleep 

# Create your views here.

from . forms import BookStoreAddBooksModelForm, GetBookIdForm

from . models import BookStoreAddBooksModel

def add_books_to_book_store(request): 
        if request.method == 'POST': 
                add_book_form = BookStoreAddBooksModelForm(request.POST)
                if add_book_form.is_valid(): 
                        # print(add_book_form.cleaned_data)
                        add_book_form.save()
                        request.session['redirect_type'] = 'add_book'  # so that we can show in book_customization_successful_message_link about add or edit book message respectively 
                        return redirect('book_customization_successful_message_link')
        else : 
                add_book_form = BookStoreAddBooksModelForm()
        
        template_path = 'book/add_books_to_book_store.html'
        return render(request, template_path, {'form' : add_book_form, 'form_type' : 'add_book'})   # the form type is taken for so that  template add_books_to_book_store, the headline should show add book now else edit book 

def book_customization_successful(request): 
        redirect_type = request.session['redirect_type']
        del request.session['redirect_type']
        template_path = 'book/book_add_succssful_message.html'
        return render(request, template_path, {'redirect_type' : redirect_type})

'''
we can use this helper func if in the script, we add 1000 milisecond, but if we there add 5000 miliseconds, then no need. 
if 1000 miliseconds is used, then in that url, put the url of the below view func. and after 1000 miliseconds, 
5 seconds will be in sleep, then this helper func would redirect it to the add book page. This will make this a lil bit smoother. 

Currently I am redirecting to the add book page from the script itself. so now no need of this helper func. 
'''
def countdown_redirect_to_add_book(request): 
        # sleep(5)
        # redirecting to the add_books_to_book_store view agin after 5 seconds. 
        return redirect('add_books_to_book_store_link')




def show_book_options(request): 
        ''' show books from book_store model  to frontend '''
        input_options = {
                '1' : 'Show books by book name', 
                '2' : 'Show books by author name', 
                '3' : 'Show books by books category', 
                '4' : 'Show books by books id',
                '5' : 'See all books', 
        }
        
        template_path = 'book/show_book_options.html'
        return render(request, template_path, {'input_options' : input_options})


def process_show_books(request, book_show_option_id): 
        ''' this views is responsible for taking the dynamic link and sub route the view depending upon the acton type in the show books/ all action operations '''
        if book_show_option_id == '1': 
                return redirect('bookname')
        elif book_show_option_id == '2' : 
                return redirect('authorname')
        elif book_show_option_id == '3' : 
                return redirect('bookscategory')
        elif book_show_option_id == '4' : 
                return redirect('show_books_by_book_id_link')
        # print("id: ", book_show_option_id)
        elif book_show_option_id == '5' : 
                return redirect('show_all_books_link')
        
        
# this viwe is for showing all the data : this uses EmptyResultSet error if there are no data in the table 
def show_all_books(request): 
        ''' showing all the books data to user  '''
        # if request.metod == 'POST' : 
        #         all_books_form = GetBookIdForm(re)
        template_path = 'book/show_books_successfully_to_user.html'
        try : 
                all_books_data = BookStoreAddBooksModel.objects.all()
                return render(request, template_path, {'all_books_data' : all_books_data})
        except EmptyResultSet: 
                error_message_all_books = "No books are available now"
                return render(request, template_path, {'error_message_all_books' : error_message_all_books})
                
                
        

def show_books_by_book_id(request): 
        ''' showing books by taking valid book id from the user '''
        if request.method == 'POST': 
                book_form = GetBookIdForm(request.POST)
                if book_form.is_valid(): 
                        try : 
                                book_id = book_form.cleaned_data['book_id']
                                book_data = BookStoreAddBooksModel.objects.get(pk=book_id)
                                template_path = 'book/show_books_successfully_to_user.html'
                                return render(request, template_path, {'book_data' : book_data, 'edited_book' : False})
                        except ObjectDoesNotExist: 
                                template_path = 'book/show_books_successfully_to_user.html'
                                error_message_id = f"Book with ID {book_id} does not exist.\nPlease enter a valid book id"
                                return render(request, template_path, {'error_message_id' : error_message_id})
        elif 'book_id' in request.session and request.session['book_id']  :   # showing here only the book id that is updated || it is executed when the edit book view redirects it to here  
                book_id = request.session.get('book_id')
                del request.session['book_id']
                book_data = BookStoreAddBooksModel.objects.get(pk=book_id)
                template_path = 'book/show_books_successfully_to_user.html'
                return render(request, template_path, {'book_data' : book_data, 'edited_book' : True})
        else : 
                book_form = GetBookIdForm()
                template_path = 'book/get_book_id.html'
                return render(request, template_path, {'form' : book_form})        
        

# this view is not currently being used. I tried to save the book object in the session data in the show_books_by_book_id view, 
# and then redirect from the show_books_by_book_id to this below view, and from here, taking the data from the session data, 
# I tried to show the data using the template. but I got an error that object is not serializable 
# that's why I returned the data from the show_books_by_book_id view itself to the template 
def show_books_successfully_to_user(request):
        book_info = request.session.get('book_info')
        del request.session['book_info']
        template_path = 'book/show_books_successfully_to_user.html'
        return render(request, template_path, {'book_data' : book_info})





def edit_books(request, book_id): 
        ''' This view is responsible for editing book data '''
        # GET case : the book id will always be valid as the valid id will always be passed automatically using the dynamic url 
        book_data = BookStoreAddBooksModel.objects.get(pk=book_id)
        book_form = BookStoreAddBooksModelForm(instance=book_data)   # if we pass the table instance to the form class using instance param, the form will show that exact instance data 
        # POST case : 
        if request.method == 'POST' : 
                book_form = BookStoreAddBooksModelForm(request.POST, instance=book_data)    
                if book_form.is_valid() : 
                        book_form.save()
                        request.session['book_id'] = book_id   # to show the data from show book by book id     
                        request.session['redirect_type'] = 'edit_book'   # so that we can use a single template to show custom message and redirect to previous page 
                        return redirect('book_customization_successful_message_link')
        # renders in get case : 
        template_path = 'book/add_books_to_book_store.html'
        return render(request, template_path, {'form' : book_form, 'form_type' : 'edit_book'})  # the form_type will be shown in the add_books_to_book_store whether this is add book or edit book as headline 
                                        

def delete_book(request, book_id): 
        ''' this view is responsible for deleting a bok by its id '''
        selected_book_to_delete = BookStoreAddBooksModel.objects.get(pk=book_id).delete()   #.delete() we can call delete here also directly 
        # selected_book_to_delete.delete()
        request.session['redirect_type'] = 'delete_book'  # sessoion data for delete book so that the custom message say book delete successful. 
        return redirect('book_customization_successful_message_link')
        

# this is yet to implement : I have taken some hints form gpt, see the details here in the middle of the chat : https://chat.openai.com/share/93142720-e248-4cd8-b2e2-86c523a22810
def show_books_by_book_category(request): 
        pass 
        
        
        
        
        
        
        
        
        