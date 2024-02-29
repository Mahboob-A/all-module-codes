


        /// D- 21-4 String revision

    #include <stdio.h>
    #include <string.h>
    int main () {
        char str[] = "hello";
        char str2[] = {'h', 'e', 'l', 'l', 'o', '\0'};

        int x = strcmp(str2, str);
        printf ("%d", x);
    }
