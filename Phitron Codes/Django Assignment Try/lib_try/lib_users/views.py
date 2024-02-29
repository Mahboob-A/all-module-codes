from django.shortcuts import render, redirect, HttpResponse
from .froms import DemoModelForm, CustomUserCreationForm, UserLoginForm
from django.contrib.auth.decorators import login_required
from django.contrib.auth import authenticate, login, logout
from django.shortcuts import get_object_or_404
from django.contrib import messages

from .models import DemoModel, Book, BookGenre
# Create your views here.




##################### BOOK RELATED FUNCTION ##########################




@login_required(login_url='login')  # Redirect to 'login' if the user is not authenticated
def book_list(request):
        books = Book.objects.all()
        genres = BookGenre.objects.all()
        context = {
                'books': books,
                'genres': genres,
        }
        return render(request, 'lib_users/book_list.html', context)


@login_required(login_url='login')
def borrow_book(request, book_id):
        template_path_error = 'lib_users/show_errors.html'
        template_path_success =  'lib_users/book_detail.html'
        
        book = get_object_or_404(Book, id=book_id)
        user = request.user
        
        if user.borrowed_books.filter(id=book_id).exists(): 
                return render(request, template_path_error, {'book_exists_borrowed' : True})

        if book.total_copy >= 1:
                book.total_copy -= 1
                book.save()
                
                user.borrowed_books.add(book)
                user.save()

                # borrowed_book = Book.objects.get(pk=book_id)
                return render(request, template_path_success, {'book' : book, 'book_borrow_successful' : True})
        else:
                # this is handled in the iterate_books.html showing unavailable (if book.total_copy) no need to handle here 
               pass 










@login_required(login_url='login')
def user_borrowed_books(request): 
        '''
        Shows all the borrowed books of the user 
        '''
        template_path = 'lib_users/borrow_or_wishlist.html'
        user = request.user
        all_borrowed_books = user.borrowed_books.all()
        
        if all_borrowed_books.exists(): 
                return render(request, template_path, {'all_borrowed_books' : all_borrowed_books})
        else: 
                return render(request, template_path, {'no_borrowed_books' : True})

@login_required(login_url='login')
def user_wishlist(request): 
        '''
        Shows all the wishlist books of the user 
        '''
        template_path = 'lib_users/borrow_or_wishlist.html'
        user = request.user
        wishlist = user.wishlist.all()
        return render(request, template_path, {'wishlist' : wishlist})


@login_required(login_url='login')
def make_wishlist(request, book_id): 
        '''
        Makes a book into Users wishlist using book id 
        '''
        template_path = 'lib_users/show_errors.html'
        book = get_object_or_404(Book, id=book_id)
        user = request.user
        
        if user.wishlist.filter(id=book_id).exists(): 
                return render(request, template_path, {'book' : book,  'book_exists_already_wishlisted' : True})


        user.wishlist.add(book)
        user.save()
        request.session['book_wishlist'] = True  # see book detail func
        return redirect('book_detail', book_id=book_id)


@login_required(login_url='login')
def remove_from_wishlist(request, book_id): 
        book = get_object_or_404(Book, id=book_id)
        user = request.user 
        user.wishlist.remove(book)
        return redirect('wishlist')



@login_required(login_url='login')
def book_detail(request, book_id): 
        ''' 
        shows a single book details using book id 
        '''
        template_path = 'lib_users/book_detail.html'
        
        # To show custom message that this book is wishlisted 
        book_wishlist = False 
        if request.session['book_wishlist']: 
                book_wishlist = True 
                del request.session['book_wishlist']
        
        book = Book.objects.get(pk=book_id)
        return render(request, template_path, {'book' : book, 'book_wishlist' : book_wishlist})











##################### AUTH FUNCTIONS ################################

def user_login_2(request): 
        template_path = 'lib_users/user_login.html'
        if request.method == 'POST': 
                form = DemoModelForm(data=request.POST)
                if form.is_valid(): 
                        name = form.cleaned_data['name']
                        email = form.cleaned_data['email']
                        password = form.cleaned_data['password']
                        form.save()
                        print(name, " ", email, " ", password)
                        return redirect('login')
                        
        else : 
                form = DemoModelForm()
        return render(request, template_path, {'form' : form})


def user_login(request): 
        if not request.user.is_authenticated: 
                tempalte_path = 'lib_users/user_login.html'
                if request.method == 'POST': 
                        form = UserLoginForm(request, data=request.POST)
                        if form.is_valid(): 
                                username = form.cleaned_data['username']
                                password = form.cleaned_data['password']
                                user = authenticate(username=username, password=password)
                                if user is not None: 
                                        login(request, user)
                                        return redirect('dashboard')
                        else: 
                                return render(request, tempalte_path, {'form' : form, 'error' : 'Invalid username or password'})
                else : 
                        form = UserLoginForm()
                        return render(request, tempalte_path, {'form' : form})
        else: 
                return redirect('dashboard')


def user_signup(request): 
        if not request.user.is_authenticated: 
                template_path = 'lib_users/user_signup.html'
                if request.method == 'POST': 
                        form = CustomUserCreationForm(data=request.POST)
                        if form.is_valid(): 
                                form.save()
                                return redirect('dashboard')   
                else : 
                        form = CustomUserCreationForm()
                return render(request, template_path, {'form' : form})
        else : 
                return redirect('dashboard')


def user_logout(request): 
        if request.user.is_authenticated: 
                logout(request)
                messages.success(request, 'You are now logged out!')
                return redirect('login')
        else: 
                return redirect('login')