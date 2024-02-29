


        ///Q 5  find vowels and their index in a string 070622
    /*

    #include <stdio.h>
    int main () {
        char str[50];
        int out[51] = {0};
        int i, k=0;
        gets(str);

        for (i=0; i<strlen(str); i++)
        {
            if (str[i] == 'a' ||
                str[i] == 'e' ||
                str[i] == 'i' ||
                str[i] == 'o' ||
                str[i] == 'u'  )
                {
                    out[k] = i; // str[i] er index ta out[k] er index e deowa hocche
                    k++; // k index ke increase kore out[k] te i er index neowa hocche
                 }
        }

        for (i=0; i<k; i++)   // k er index porjonto loop cholche
        {
            printf("%d %c\n", out[i], str[out[i]]); // original array te vowel er index print kore vowel print kora hocche
        }

        /// the above loop same as
        /* for (i=0; i<k; i++)
        {
            // out[i] index ke indx var e rakha hocche indx akhn out[i] er index mane vowel er index hold korche
            int indx = out[i];
            printf("%d %c\n", indx, str[indx]);
        }
        //*/

    //}
         // */



        /// revised code printing vowels


    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        char str[50];
        gets(str);

        int vwl = 0, cnsnt = 0;
        for (i=0; i<strlen(str); i++)
        {
            if ((str[i] >= 'a' || str[i] <= 'z') ||
                (str[i] >= 'A' || str[i] <= 'A'))
            {
                if (str[i] == 'a' ||
                    str[i] == 'e' ||
                    str[i] == 'i' ||
                    str[i] == 'o' ||
                    str[i] == 'u' ||
                    str[i] == 'A' ||
                    str[i] == 'E' ||
                    str[i] == 'I' ||
                    str[i] == 'O' ||
                    str[i] == 'U' )
                {
                    vwl++;
                    printf ("%c -> %d \n", str[i], i); // printing vowels and their index
                }
                else
                    cnsnt++;
                    printf ("%c -> %d ", str[i], i); // how consonants could be printed outside loop?
            }
                 //printf ("\nTotal vowel: %c -> %d\n", str[i], vwl);  // printing the whole process of indexing
                //printf ("\nTotal Consonant: %c -> %d\n", str[i], cnsnt);

        }
        printf ("\nTotal vowel: %d", vwl);
        printf ("\nTotal Consonant: %d", cnsnt);


    }


