


        /// QS 4 Function to copy a strong to another strign like strcpy
        // 150622

        /*
    #include <stdio.h>
    void string_cpy (char ch[], char ch1[])
    {
        int i, k=0; // using another index
        for (i=0; ch1[i] != '\0'; i++)
        {
            ch[k] = ch1[i];
            k++;

            // in simple
            /*
            ch[i] = ch1[i];

        }
        ch[k] = '\0';
    }
    int main () {
        char str[50], ch[50];
        scanf("%s %s", str, ch);

        string_cpy(str, ch);

        printf("str - %s\n\n ch- %s\n", str, ch);

    }

    */




    // function to copy 2nd string to 1st string:

    #include <stdio.h>
    #include <string.h>
    void string_cpy (char str[], char ch[])
    {
        int i;
        for (i=0; ch[i] != '\0'; i++)
        {
            str[i] = ch[i];
        }
        str[i] = '\0';
    }


    int main () {
        char s1[50], s2[50];
        scanf("%s %s", s1, s2);

        string_cpy(s1, s2);

        printf("%s", s1);

    }
