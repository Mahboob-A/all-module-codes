

        /// max and min of an array

    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];
        memset(ar, 0, sizeof(ar));


        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }


        for (i=n-1; i>0; i--)
        {
            printf ("%d ", ar[i]);
        }
    }

