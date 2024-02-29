
    ///13-5 Concatenating two strings

    #include <stdio.h>
    #include <string.h>

    int main () {

        char a[8] = "Hello";
        char b[] = "WorldHello";

        strncat(a, b, 10);
        a[15] = '\0';
        printf("%s\n", a);



        /// cat using strcat function
        /**

        strcat(a, b);
        printf("%s", a);

        **/



        /**

        /// concatenate using loop in 3rd string
        char a[] = "Hello";
        char b[] = "World";

        int len_a = strlen(a);
        int len_b = strlen(b);
        int len_c = len_a + len_b;
        char c[len_c+1];

        for (int i=0; i<len_a; i++) {
            c[i] = a[i];
        }
        for (int i=0; i<len_b; i++) {
            c[len_a+i] = b[i];
        }
        c[len_a+len_b] = '\0';
        printf("%s", c);

        **/

    }
