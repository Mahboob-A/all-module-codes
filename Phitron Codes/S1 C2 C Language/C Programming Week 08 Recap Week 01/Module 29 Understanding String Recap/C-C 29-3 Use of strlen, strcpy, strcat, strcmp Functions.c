

        /// 29-3 Use of strlen, strcpy, strcat, strcmp Functions

    #include <stdio.h>
    #include <stdio.h>

     /// strlen function
     /*
    int main () {
        char ch[50];
        //printf ("%d\n", sizeof(ch)) ;
        //printf ("%d", strlen(ch));

        scanf ("%s", &ch);

        int i, len = 0;
        while (ch[len] != '\0') // mechanism of strlen function in while loop
        {
            len++;
        }
        printf ("%d\n", len );

        for (len=0; ch[len] != '\0'; len++) // mechanism of strlen function in for loop
        {
            // nothing here
        }
        printf("%d", len);

    }
    */

        /// strcpy function

        /*
    int main () {
        char a[50], b[50];
        scanf("%s %s", &a, &b);
        strcpy (a, b);   // b will be copied to a

        printf ("%s %s", a, b);

    }

    */

        /// strcat function for concatenation

        /*
    int main () {
        char a[50], b[50];
            scanf ("%s %s", &a, &b);

            int lena = strlen(a);
            int lenb = strlen(b);

            strcat(a, b);  // copies string b after string a elements

            int lenc = lena + lenb;
            for (int i=lena+1; i<lenc; i++)
            {
                a[lena+1] = b[lenb];
            }

            printf ("%s %s", a, b);

    }

    */

        /// strcmp function
        // lexicographical order
        ///
    int main () {
        char a[50], b[50];
        scanf ("%s %s", &a, &b);

        int val = strcmp(a, b);

        printf ("%d", val);

    }

    //*/














