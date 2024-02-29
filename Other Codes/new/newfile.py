

# EVE Healthcare coding problem 
# 030923, Sunday, 11.00 pm 
# I am selected for the Internship!
def get_book_api(request): 
  
        
        all_books = Book.objects.all()
        serializer = BookSerializer(all_books, many=True)
        return Response({'data' : seializer.data}, status=200)
        