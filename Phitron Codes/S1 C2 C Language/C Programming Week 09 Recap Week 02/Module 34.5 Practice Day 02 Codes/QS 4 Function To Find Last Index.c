


        /// QS 4: Function to Find Last Index of A char In A String
        // 160622 12.30 p.m

        /*
        Write a function named find_lastIndex() which will take a string and a
        character as parameters and return the last index where the character is
        found in that string. If it is not found then return -1
        */


     #include <stdio.h>
    int find_firstIndex(char str[], char ch)
    {
        int len = strlen(str);
        for (int i=len; i>=0; i--)
        {
            if (str[i] == ch)
            {
                return i;
            }
        }
        return -1;
    }

    int main () {
        char str[50], ch;
        scanf("%s %c", str, &ch);

        int indx = find_firstIndex (str, ch);

        printf("%d", indx);


    }


    // another method just same like finding first index

    /*



        /// QS : Function to Find Last Index of A char In A String
        // 160622 11.40 a.m

        // Write a function named find_firstIndex() which will take astring
        //and a character as parameters and return the first index wherethe
        // character is found in that string. If it is not found thenreturn
        //-1.

    #include <stdio.h>
    int find_firstIndex(char str[], char ch)
    {
        int indx = -1;
        for (int i=0; str[i] != '\0'; i++)
        {
            if (str[i] == ch)
            {
                indx = i;
            }
        }
        return indx;
    }

    int main () {
        char str[50], ch;
        scanf("%s %c", str, &ch);

        int indx = find_firstIndex (str, ch);

        if (indx == -1)
            printf("Char not found");

        else
        printf("%d", indx);


    }

    */
