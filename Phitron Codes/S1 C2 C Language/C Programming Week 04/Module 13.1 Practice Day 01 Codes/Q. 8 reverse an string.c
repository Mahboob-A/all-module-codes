
    /// Q. 8 - > Write a C program to find reverse of a given string.
    /// using 2nd array

/*

    #include <stdio.h>
    #include <string.h>

    int main() {
        char a[101], b[100];
        int i, j = 0;
        printf("Enter a string: ");
        scanf("%s", a);

        for (i=strlen(a)-1; i>=0; i--) {
            b[j] = a[i];
            j++;
        }
        b[j] = '\0';
        printf("\nThe reverse of the string is %s. \n", b);

        return 0;
    }

*/


    #include <stdio.h>
    #include <string.h>

    int main() {
        char a[101];
        int i, j;
        printf("Enter a string: ");
        gets(a);
        int len = strlen(a);

        for (i=0, j=len-1; i<j; i++, j--) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }

        puts(a);



        return 0;
    }

