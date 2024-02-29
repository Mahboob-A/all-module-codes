


        /// write a function to reverse an string

    #include <stdio.h>

    void reverse (char str[])

    {   int sz = strlen(str);
        for (int i=0, j=sz-1; i<j; i++, j--)
        {
            int temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }


    int main () {
        char str[101];
        gets (str);


        reverse(str);
        printf ("%s ", str);






    }
