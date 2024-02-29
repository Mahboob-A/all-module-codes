

        /// H-H 28-8 Array as Counter or Frequency Array


        // count of single int
        /*

    #include <stdio.h>
    int main () {
        int i, n, count = 0;
        scanf ("%d", &n);
        int ar[n];


        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }
        for (i=0; i<n; i++)
        {
            if (ar[i] == 2)
                count++;
        }

        printf ("%d -> %d\n", count);

    }


    */

        // array as counter / frequency array

        /*

    #include <stdio.h>
    int main () {
        int i, x, n;
        scanf ("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int count[11] = {0};  // count er size 1 besi nite hobe
        for (i=0; i<n; i++)
        {
            int val = ar[i];
            count[val]++;     // same as count[ar[i]]++;
        }

        for (x=0; x<11; x++)  // n times na, max joto value er theke 1 besi times loop to print
        {
            if (count[x]>0)  // x as count er index number or x is as i
            printf ("Value -> %d Count-> %d\n", x, count[x]);
        }

    }

    */


    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);

        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int count[n+1];  // count array has size n+1, one greater than input aray
        memset(count, 0, sizeof(count)); // initializing zero to count array
        for (i=0; i<n; i++)
        {
            int val = ar[i];
            count[val]++; // counting process
        }

        for (i=0; i<n+1; i++)  // loop goes size of count array
        {
            if (count[i] > 0) // excluding zero values
            printf("Value -> %d Count -> %d\n", i, count[i]);
        }
    }




