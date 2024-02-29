

        /// E- 21-5 Implementing str functions


        /// anatomy of strlen function ( using string as array   )
/*
    #include <stdio.h>   /// anatomy of strlen function ( using string as array   )
    int StrLen (char str[])
    {
        int idx = 0;
        while (str[idx] != '\0')
        {
            idx++;
        }
        return idx;
    }
    int main () {
        char str[] = "hello! how are you?";
        int len = StrLen(str);
        printf ("%d", len);


    }

    */

    /// anatomy of strlen function using a pointer

/*
    #include <stdio.h>
    int StrLen (char str[])
    {
        char *ptr = str;
        //int ans = 0;
        while (*ptr != '\0')
        {
            //ans++;
            ptr++;
        }
        //return ans;
        return ptr - str; // str has 1st value and ptr has last value
    }
    int main () {
        char str[] = "hello! how are you?";
        int len = StrLen(str);
        printf ("%d", len);


    }

    */
            /// strcat function using array as idx

/*

    #include <stdio.h>
    void stringCat (char a[], char b[], char out[])
    {
        int idx1 = 0, idx2 = 0, idx = 0;
        while (a[idx1] != '\0')
        {
            out[idx] = a[idx1];
            idx++;
            idx1++;
        }
        while (b[idx2] != 0)
        {
            out[idx] = b[idx2];
            idx++;
            idx2++;
        }
        out[idx] = '\0';
    }
    int main () {
        char str[100];
        char str2[100];

        scanf ("%s %s", str, str2);

        int sz = strlen(str) + strlen(str2);
        char out[sz+1];

        stringCat (str, str2, out);
        printf ("%s", out);

    }

*/

        /// strcat function using pointer

    #include <stdio.h>
    void stringCat (char a[], char b[], char out[])
    {
        char *ptr1 = a, *ptr2 = b, *ptr = out;
        while (*ptr1 != 0)
        {
            *ptr = *ptr1;
            ptr++;   // out ke increase
            ptr1++;    // a keo increase
        }
        while (*ptr2 != 0)
        {
            *ptr = *ptr2;
            ptr++;
            ptr2++;
        }
        *ptr = '\0';
    }


    int main () {
        char str[100];
        char str2[100];
        scanf("%s %s", str, str2);

        int sz = strlen(str) + strlen(str2);
        char out[sz+1];

        stringCat (str, str2, out);
        printf ("%s", out);

    }





