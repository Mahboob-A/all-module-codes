
# 250623, Sunday, 04.30 pm 
# wrire all custom permissions here 

from rest_framework import permissions


class IsUserOrReadOnly(permissions.BasePermission): 
        def has_permission(self, request, view): 
                if request.method in permissions.SAFE_METHODS: 
                        return True 
                else: 
                        return request.user.is_authenticated  
        

class ReviewerOrReadOnly(permissions.BasePermission): 
        def has_object_permission(self, request, view, obj): 
                if request.method in permissions.SAFE_METHODS: 
                        return True
                else: 
                        # if obj's user and request's user is not same then return get 
                        return obj.user == request.user or request.method == 'GET'
