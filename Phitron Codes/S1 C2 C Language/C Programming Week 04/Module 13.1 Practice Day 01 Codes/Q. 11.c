


        // Write a C program to count all occurrences of a character in a string.


    #include <stdio.h>
    #include <string.h>

    void main() {
        char str[100], search;
        int i, count;
        printf("Enter a string: ");
        gets(str);


        printf("Enter character to search: \n");
        scanf("%c", &search);
        //printf("%s %c", str, search);

        count=0;
        i=0;
        while (i<strlen(str)) {

            if (str[i] == search) {

                count++;
            }
            i++;
        }
        printf("The number of occurance of %c is %d th times.\n", search, count);


    }

    /// same program in for loop

/*

        #include <stdio.h>
    #include <string.h>
    int main () {
        char str[100], search;
        int i, count = 0;
        printf("Enter a string: ");
        gets(str);

        printf("Enter character to search: ");
        scanf("%c", search);


        for (i=0; i<strlen(str); i++) {
            if (str[i] == search) {
                count++;
            }
        }
        printf("The number of occurance of %c is %d th times.\n", search, count);

    }

*/
