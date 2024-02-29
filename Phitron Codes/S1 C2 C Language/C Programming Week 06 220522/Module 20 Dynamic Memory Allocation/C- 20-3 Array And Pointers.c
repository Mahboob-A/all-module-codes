
        /// 20-3 Relationship Between Array And Pointers

    #include <stdio.h>
    void funct (int n, int *a)
    {
        printf ("Array size (printing in function): %d\n", n);
        for (int i=0; i<n; i++)
        {
            printf("Value by pointer in function: %d\n", *(a+i)); // *(a+i) is == a[i]
        }
    }

    int main () {
        int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        for (int i=0; i<10; i++)
        {
            int *pai = &a[i];

            // contiguous memory address of array
            printf ("Address of individual index: %lld value of index: %d\n\n", pai, *pai);
        }

        int *pa;
        pa = a;
        printf("Array Address: %lld\n\n", pa); // array address is &a[0] address.

        printf ("Address of array by array name: %lld\n\n", a); // only array name also
                // contains array &a[0] address.
        printf ("Value of a[0] by array name: %d\n\n", *a);

        printf("Array Address: %lld and value: %d\n\n", a, *a);
        printf("Array Address: %lld and value: %d\n\n", a+1, *a+1);

        /// *(a+1) == a[1] both holds value


        for (int i=0; i<10; i++)
        {
            printf("Index: %d Value: %d\n\n", a[i], *(a+i)); // *(a+i) as == a[i]
        }

        int sz = sizeof (a) / sizeof (a[0]);

        funct(sz, a);

    }
