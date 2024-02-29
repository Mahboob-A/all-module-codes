

        /// E-E 28-5 Sum, Max, Min and Reverse of an Array


        /// sum of an array

        /*

    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int sum = 0;
        for (i=0; i<n; i++)
        {
            sum += ar[i];
        }
        printf ("%d", sum);
    }

    */

        /// max of an array

    /*

    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int max = ar[0];
        for (i=1; i<n; i++)
        {
            if (max < ar[i])
                max = ar[i];
        }

        printf ("%d", max);


    }

        */

         /// min of an array

         /*

    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int min = ar[0];
        for (i=0; i<n; i++)
        {
            if (min > ar[i])
                min = ar[i];
        }

        printf ("%d", min);


    }
    */

        /// Reverse of an array by printing reverse

    ///*

    #include <stdio.h>
    int main () {
        int i, j, n;
        scanf ("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        for (i=n-1; i>=0; i--)
        {
            printf ("%d ", ar[i]);
        }

    }

    //*/


    /// min and max



        /*




    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);

        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int min = ar[0], max = ar[0];

        for (i=0; i<n; i++)
        {
            if (max < ar[i])
                max = ar[i];

            if (min > ar[i])
                min = ar[i];
        }
        printf ("max -> %d min -> %d", max, min);




    }


    */




