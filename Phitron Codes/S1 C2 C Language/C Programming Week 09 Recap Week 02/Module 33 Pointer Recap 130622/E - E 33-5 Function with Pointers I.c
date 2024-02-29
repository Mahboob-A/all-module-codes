

        /// E - E 33-5 Function with Pointers I
        // 140322
        // mechanism to value from main to udf

        // mechanism to pass array

            #include <stdio.h>
    void change (int ptr[])
    {
        printf("%d %d %d\n\n", *ptr, *(ptr+1), *(ptr+2)); // array value print by pointer

        *ptr = 100;  // dereference kore array er value paltano
        *(ptr+1) = 200;
        *(ptr+2) = 300;

        printf("%d\n\n", *ptr);
    }
    int main () {
        int ar[3] = {1, 2, 3};
        change(ar);

        printf("%d %d %d\n\n", ar[0], ar[1], ar[2]);
    }

        // mechanism to pass value and by reference of a variable

        /*

    #include <stdio.h>
    int change(int *x)  // pass by reference
    {
        *x = -100;
        //printf("x = %d\n", *x);
        return x;
    }

    int main () {
        int a = 10;
        int ok = change(&a);

        printf("ok = %d\n", ok);
        printf ("a = %d", a);

    }

    /*
