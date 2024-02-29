

        /// C -C 31-3 Check If a String is Palindrome Using Two Pointers Technique
        // 070622


        /// learn two pointers technique

    #include <stdio.h>
    int main () {
        char str[100];
        scanf("%s", &str);

        int i = 0, j = strlen(str) - 1; // i from index 0 and j from last index
        while (i<j)        // loop until i is immediate small of j -> atai two pointers er main condition
        {
            if (str[i] != str[j]) // checking if they are different
            {
                printf("It's Not A Palindrome!\n");
                return 0;
            }
            i++; // i increment
            j--; // j decrement -> this is the two pointers technique

        }

        printf("It's A Palindrome!\n");

        return 0;

    }


        /// same code using for loop

        /*

    #include <stdio.h>
    int main () {
        int i, j;
        char str[100];
        gets(str);

        int x = 0;

        for (i=0, j=strlen(str)-1; i<j; i++, j--)
        {
            if (str[i] != str[j])
            {
                printf("It's Not A Palindrome\n");
                x = 1;
                break;
            }
        }

        if (x == 1)
        {
            printf("Yes! It's A Palindrome!");
        }


        return 0;
    }

    */

