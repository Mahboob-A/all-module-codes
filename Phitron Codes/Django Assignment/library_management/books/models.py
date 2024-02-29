from django.db import models
from .constants import BOOK_GENRE_CATEGORY

# Create your models here.

class BookGenre(models.Model): 
        name = models.CharField(max_length=30, choices=BOOK_GENRE_CATEGORY)
        description = models.TextField(null=True, blank=True)


class Book(models.Model): 
        genre = models.ForeignKey(BookGenre, related_name='books', on_delete=models.CASCADE)
        isbn = models.CharField(max_length=15)
        title = models.CharField(max_length=50)
        author = models.CharField(max_length=50)
        book_image_url = models.URLField()
        pulication_date = models.DateField(auto_now_add=True)
        last_publication = models.DateField(auto_now=True, null=True, blank=True)
        