



        ///  MAIN DEMO PRACTICE PAGE PRACTICE HERE
        ///  reverse an array using [n-1-i] index
        // 080622

    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n], br[n];

        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        for (i=0; i<n; i++)
        {
            br[n-1-i] = ar[i];
        }

        for (i=0; i<n; i++)
        {
            printf ("%d ", br[i]);
        }

    }
