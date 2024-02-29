    #include <stdio.h>    ///13-5 Concatenating two strings
    #include <string.h>



    // strcat function work by loop

    int main () {
        char a[50] = "Hello";
        char b[50] = "World";

        int len_a = strlen(a);
        int len_b = strlen(b);

        for (int i=0; i<len_b; i++) {
            a[len_a+i] = b[i];
        }
        a[len_a+len_b] = '\0';
        printf("%s", a);

    }
