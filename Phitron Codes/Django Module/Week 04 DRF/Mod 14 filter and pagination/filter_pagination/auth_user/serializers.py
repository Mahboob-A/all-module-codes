# 260623, Monday, 06.30 am 

from django.contrib.auth.models import User 
from rest_framework import serializers


'''
in rest_framework, we can not create form. so here we have to use serializers to take data from the user to 
validate. This RegistrationSerializer is the logic how the data will be authenticated and in the view, 
we will take and show the output. But this is the logic. 
'''

class RegistrationSerializer(serializers.ModelSerializer): 
        password2 = serializers.CharField(style={"input_type": "password"}, write_only=True)

        class Meta:
                model = User
                fields = ["username", "email", "password", "password2"]
                
                
        def save(self): 
                # print(self.validated_data)
                username = self.validated_data['username']
                email = self.validated_data['email']
                password = self.validated_data['password']
                password2 = self.validated_data['password2']
                
                if password != password2: 
                        raise serializers.ValidationError({'error' : 'password does not match'})
                if User.objects.filter(email=email).exists(): 
                        raise serializers.ValidationError({'error' : 'email already exists'})
                
                account = User(username=username, email=email)
                account.set_password(password)
                account.save()
                return account
        
                
        # we can also use the below ways to do this #
        # def validate(self, data):
        #         print(data)
        #         password = data.get('password')
        #         password2 = data.get('password2')

        #         if password != password2:
        #                 raise serializers.ValidationError({'error': 'Passwords do not match'})
        #         if User.objects.filter(email=data['email']).exists():
        #                 raise serializers.ValidationError({'error': 'Email already exists'})

        #         return data

        # def create(self, validated_data):
        #         password = validated_data.pop('password2')
        #         user = User(**validated_data)
        #         user.set_password(password)
        #         user.save()
        #         return user
                
        
        
        # we can also override the create method to do this # 
        # def create(self, validated_data):
        #         username = validated_data["username"]
        #         password = validated_data["password"]
        #         password2 = validated_data["password2"]
        #         email = validated_data['email']
                
        #         print(validated_data)        

        #         if password != password2:
        #                 raise serializers.ValidationError({"error": "Passwords do not match"})
        #         if User.objects.filter(email=email).exists(): 
        #                 raise serializers.ValidationError({'error' : 'email already exists'})

        #         user = User(username=username, email=email)
        #         user.set_password(password)
        #         user.save()

        #         return user


                

                

                
                
                
                
