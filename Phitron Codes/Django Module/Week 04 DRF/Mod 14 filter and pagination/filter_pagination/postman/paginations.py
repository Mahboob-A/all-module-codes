# 010723, Saturday, 06.30 am 

from rest_framework.pagination import PageNumberPagination, LimitOffsetPagination, CursorPagination

class ProductPageNumberPaginatin(PageNumberPagination): 
        page_size = 5   # default url :   http://127.0.0.1:8000/products/?page=2
        page_query_param = 'page_number'  # changed url : http://127.0.0.1:8000/products/?page_number=2 


class ProductLimitOffsetPagination(LimitOffsetPagination): 
        default_limit = 3  # default link : http://127.0.0.1:8000/products/?limit=3&offset=3
        limit_query_param = 'L'
        offset_query_param = 'Of'
        max_limit = 5    # updated url : http://127.0.0.1:8000/products/?L=5&Of=9
        
        
class ProductCursorPagination(CursorPagination): 
        page_size = 3     # default url : http://127.0.0.1:8000/products/?cursor=cD0xNjkuOTk%3D
        cursor_query_param = 'c'   # modified url : http://127.0.0.1:8000/products/?c=cD0xNjkuOTk%3D
        ordering = 'price'   # cursor pagination takes ordering it is mandatory and in the view, we can not use any filtering or ordering if we use the
        # cursor pagination the view that uses filtering or ordering