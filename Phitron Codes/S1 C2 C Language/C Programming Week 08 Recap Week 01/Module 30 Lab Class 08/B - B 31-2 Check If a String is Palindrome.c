

        /// B - B 31-2 Check If a String is Palindrome
        // 070622

    #include <stdio.h>
    #include <string.h>
    int main () {
        int i;
        char str[100], xtr[100];
        gets(str);
        strcpy(xtr, str); // copying original string to xtr array
        strrev(xtr);        // reversing the string
        for (i=0; i<strlen(str); i++)
        {
             if (str[i] != xtr[i])
             {
                 printf ("Sorry! the string is not a Palindrome\n");
                return 0;
             }

        }

        printf ("Yes! the string is a Palindrome\n");

        return 0;

    }


    /// same code but without return 0 condition, with break statement

    /*

    #include <stdio.h>
    #include <string.h>
    int main () {
        int i;
        char str[100], xtr[100];
        gets(str);
        strcpy(xtr, str); // copying original string to xtr array
        strrev(xtr);        // reversing the string
        int x = 0;
        for (i=0; i<strlen(str); i++)
        {
             if (str[i] != xtr[i])
             {
                 printf ("Sorry! the string is not a Palindrome\n");
                x = 1;
                break;
             }

        }
        if (x == 0)
        {
            printf ("Yes! the string is a Palindrome\n");
        }

        return 0;

    }

    */



