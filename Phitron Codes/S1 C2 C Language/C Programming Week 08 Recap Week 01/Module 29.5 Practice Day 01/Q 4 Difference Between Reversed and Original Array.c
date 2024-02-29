

        /// Q 4 Difference Between Reversed and Original Array 0706232
        // not completed?

        // code has
    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar1[n], ar2[n];

        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar1[i]);
        }

        for (i=0; i<n; i++)  // reversing the array to array2
        {
            ar2[n-1-i] = ar1[i];
        }
        for (i=0; i<n; i++)  // printing the reversed araay
        {
            printf ("%d ", ar2[i]);
        }
        printf("\n");

        for (i=0; i<n; i++) // difference
        {
            if (ar1[i] > ar2[i])   // so checking is ar[i] is bigger than br[i], and true then
            printf ("%d ", ar1[i] - ar2[i]); // if true then divide elemts which are bigger in ar[i] from br[i]
            else
            printf ("%d ", ar2[i] - ar1[i] );
        }


    }
