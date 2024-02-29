


    #include <stdio.h>
    #include <string.h>

    // 13-4 Copy Strings, strcpy


    int main () {
        char str[] = "Helloworld";
        char str2[10];

        //strcpy(str2, str);
        strncpy(str2, str, 10); // copying
        printf("%s", str2);

    }
