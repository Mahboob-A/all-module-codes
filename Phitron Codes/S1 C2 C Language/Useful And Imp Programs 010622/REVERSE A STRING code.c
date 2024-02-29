

        /// reverse a string


    #include <stdio.h>
    #include <string.h>
    int main(){
        char a[]="hello";
        for(int i=0,j=strlen(a)-1;i<strlen(a)/2;i++,j--)
        {
            char tmp = a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
            printf("%s", a);
        return 0;
    }
