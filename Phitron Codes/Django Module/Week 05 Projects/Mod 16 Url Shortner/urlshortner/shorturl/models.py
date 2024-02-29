from django.db import models
from django.utils import timezone
from .utils import create_shortened_url

class ShortCodes(models.Model): 
        created = models.DateTimeField(auto_now_add=True)
        last_accessed = models.DateTimeField(null=True, blank=True)
        times_followed = models.PositiveIntegerField(default=0)
        long_url = models.URLField()
        url_short_code = models.CharField(max_length=16, unique=True)
        
        class Meta: 
                ordering = ['-created']
                
        def __str__(self): 
                return f'{self.long_url} to {self.url_short_code}'
        
        def save(self, *args, **kwargs): 
                # if short url is not specified, generate a new code 
                if not self.url_short_code: 
                        self.url_short_code = create_shortened_url(self)
                        
                # if the last accessed time compared to todays time is >= 365, then empty the code 
                if self.last_accessed and (timezone.now() - self.last_accessed).days >=365: 
                        self.last_accessed = ''
                
                # update the last update time to the current time as when save is triggered, it means the link is accessed
                self.last_accessed = timezone.now()
                
                # save 
                super().save(*args, **kwargs)
        
        
        
        