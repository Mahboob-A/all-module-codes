


        /// QS 2: Function to print 1 to N'th integer
        // 160622 11.26 a.m

        // Write a function named print_oneToN() which will take an integer
        // value N as parameter and print all values from 1 to N
        // inclusive. Inclusive means 1 and N will be also included.


    #include <stdio.h>
    void print_oneToN (int n)
    {
        for (int i=1; i<=n; i++)
        {
            printf("%d ", i);
        }
    }

    int main () {

        printf("You must enter less than or equal to 10\n");
        int n;
        scanf("%d", &n);
        if (n>10)
        {
            printf("You have inputed %d which is greater than 10 please run again", n);
            return 0;
        }

        print_oneToN (n);

    }

    // if n is >10 then program will not stop and ask to input again





    /*

        /// QS 2: Function to print 1 to N'th integer
        // 160622 11.26 a.m

        // Write a function named print_oneToN() which will take an integer
        // value N as parameter and print all values from 1 to N
        // inclusive. Inclusive means 1 and N will be also included.

    #include <stdio.h>
    void print_oneToN (int n)
    {
        for (int i=1; i<=n; i++)
        {
            printf("%d ", i);
        }
    }

    int main () {

        int n;

        while (n > 10)
        {
            printf("You must enter less than or equal to 10\n");

            scanf("%d", &n);

            print_oneToN (n);
        }

        /*
        if (n>10)
        {
            printf("You have inputed %d which is greater than 10 please run again", n);
            return 0;
        }
        */


    }

    // if n is >10 then program will not stop and ask to input again

    */
