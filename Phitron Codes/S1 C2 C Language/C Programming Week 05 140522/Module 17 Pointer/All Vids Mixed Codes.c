


        /// mixed codes all vids of pointer module


    #include <stdio.h>
    void call (void)
    {   int counter = 0;
        counter++;
        printf("Called %d times\n", counter);
    }

    int main () {
        call();
        call();
        call();
        call();
        call();
        call();


        int *pval;
        int value;
        printf("%p\n", pval);
        printf("%d\n", value);

        int v = 100;
        printf ("%d\n\n", *&v);

        char ch = 'a';
        //char *pch = &ch;
        //printf ("pch points to %lld which has value -> %c\n\n", pch, *pch);


        int dh = 500;
        int *pch = &dh;
        printf ("pch points to %lld which has value -> %d\n\n", pch, *pch);

        pch++;
        printf ("Now pch is %lld and value %d\n\n", pch, *pch);

        pch++;
        printf ("Now pch is %lld\n\n", pch);

        pch++;
        printf ("Now pch is %lld and value %d\n\n", pch, *pch);

        ++pch;
        printf ("Now pch is %lld\n\n", pch);

        pch++;
        printf ("Now pch is %lld and value %d\n\n", pch, *pch);

        pch++;
        printf ("Now pch is %lld and value %d\n\n\n\n", pch, *pch);


        int val1, val2;
        int *pa = &val1, *pb = &val2;
        printf ("Val1 address is %lld\n and val2 address is %lld\n\n", pa, pb);

        printf ("Difference = %d\n\n\n\n", pa - pb);



        const int N = 20; // variable value const
        const int *pN = &N; // pointer address const
         pN = 10;

        // const int* const pN = &N; // both const
        printf ("Value of N now is: %d\n\n", N);


    }


