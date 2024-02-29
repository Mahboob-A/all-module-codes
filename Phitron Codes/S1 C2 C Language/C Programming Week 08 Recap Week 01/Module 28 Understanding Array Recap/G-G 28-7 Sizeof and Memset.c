

        /// G-G 28-7 Sizeof and Memset

    #include <stdio.h>
    int main () {

        /*
        int ar[] = {1, 2, 3, 4, 5};
        printf ("Array memory: %d\n\n", sizeof(ar));

        printf ("Array size: %d\n", sizeof(ar) / sizeof(ar[0]));
        */

        int i, n;
        scanf ("%d", &n);
        int ar[n];

        memset(ar, 0, sizeof(ar));  // using memset function to
                                    // initiaalize var len array
        for (i=0; i<n; i++)
        {
            printf ("%d ", ar[i]);
        }

        for (i=0; i<n; i++) // initializing var length array using a loop
        {
            ar[i] = 0;
        }


        for (i=0; i<n; i++)   // now reading array
        {
            scanf ("%d", &ar[i]);
        }

        for (i=0; i<n; i++)  // again  printing array with updated value
        {
            printf ("\n%d ", ar[i]);
        }
    }
