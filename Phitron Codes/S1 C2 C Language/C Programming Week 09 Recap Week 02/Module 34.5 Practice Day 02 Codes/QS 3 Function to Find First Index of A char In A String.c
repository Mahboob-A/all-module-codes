


        /// QS 3: Function to Find First Index of A char In A String
        // 160622 11.40 a.m

        // Write a function named find_firstIndex() which will take a string
        // and a character as parameters and return the first index where the
        // character is found in that string. If it is not found then return
        // -1.


    #include <stdio.h>
    int find_firstIndex(char str[], char ch)
    {
        for (int i=0; str[i] != '\0'; i++)
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



      /// this program counts the num of repeteation of inputed char else return -1

            /*

    #include <stdio.h>
    int find_firstIndex(char str[], char ch)
    {
        int c = 0;
        int indx = 0;
        for (int i=0; str[i] != '\0'; i++)
        {
            if (str[i] == ch)
            {
                indx++;
                c = 1;
            }

        }

        if (c==0)
            return -1;
        else
            return indx;


        //if (indx == 0)
            //return -1;
        //else
            //return indx;
       //
    }

    int main () {
        char str[50], ch;
        scanf("%s %c", str, &ch);

        int indx = find_firstIndex (str, ch);

        printf("%d", indx);


    }


    */
