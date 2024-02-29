
        /// second largest element in an array

    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);

        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int max = 0, max2 = 0;
        for (i=0; i<n; i++)
        {
            if (ar[i] >= max)
            {
                max2 = max;
                max = ar[i];
            }
            else if (ar[i] >= max2)
            {
                max2 = ar[i];
            }
        }
        printf ("Max is: %d\n", max);
        printf("Second Max is: %d", max2);
    }
