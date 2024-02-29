from django.contrib.auth.base_user import BaseUserManager


class AccountUserManager(BaseUserManager): 
        def create_user(self, username, first_name, last_name, email, phone_no, password): 
                
                # check is email and username is provided 
                if not email: 
                        raise ValueError('Email Must Be Provided')

                if not username: 
                        raise ValueError('Username Must Be Provided')
                
                # create the user 
                user = self.model(
                        username = username, 
                        first_name = first_name, 
                        last_name = last_name, 
                        phone_no = phone_no,
                        email = self.normalize_email(email)
                )
                
                # set the password to the user 
                user.set_password(password)
                
                # save the user in db
                user.save(using=self._db)
                
                # return the user 
                return user 
        
        
        def create_superuser(self, username, first_name, last_name, email, phone_no,  password): 
                
                # create the superuser 
                user = self.create_user(
                        username = username, 
                        first_name = first_name, 
                        last_name = last_name, 
                        phone_no = phone_no,
                        # email = self.normalize_email(email),  why normalize again while create_user is also normalizing ti before saving it into the db
                        email = email, 
                        password = password, 
                )
                
                # add the permissions 
                user.is_admin = True
                user.is_active = True 
                user.is_staff = True 
                user.is_superadmin = True 
                
                # save the superuser in db 
                user.save(using=self._db)
                return user 
        
        
                