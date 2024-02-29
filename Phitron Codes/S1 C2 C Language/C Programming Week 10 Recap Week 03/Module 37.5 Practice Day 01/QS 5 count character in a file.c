


            /// QS 5 count character in a file
            // 230633 ->(2022) 07.55 am

    /*
    Write a C program to take input from a file named “input.txt”
    and calculate how many characters are there in that file
    */

    #include <stdio.h>
    int main () {
        char str[100];
        gets(str);

        int idx = 0;
        while (str[idx] != '\0')
        {
            idx++;
        }

        printf("%d", idx);



    }
