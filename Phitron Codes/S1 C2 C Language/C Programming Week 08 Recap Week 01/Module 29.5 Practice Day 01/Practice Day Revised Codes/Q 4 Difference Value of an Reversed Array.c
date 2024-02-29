




        /// Write a C code which takes an array of size N as input and do the following:
            /// Make reverse of that array and print the
            /// differences between every value of the original and reversed array.



    #include <stdio.h>

         // array reverse

    int main() {
                int i, n;
        scanf("%d", &n);
        int ar[n], br[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int k = 0;
        for (i=n-1; i>=0; i--)
        {
            br[k] = ar[i];
            k++;
        }

    for (i=0; i<n; i++) // difference means divide smaller from bigger
    {
        if (ar[i] > br[i])   // so checking is ar[i] is bigger than br[i], and true then
        printf ("%d ", ar[i] - br[i]); // if true then divide elemts which are bigger in ar[i] from br[i]
        if (br[i] >= ar[i])     // else diye print korleo hobe // same logic here and jodi == hoy tahole kichu hobe na >= ache tai
        printf ("%d ", br[i] - ar[i] );
    }

    return 0;

    }


