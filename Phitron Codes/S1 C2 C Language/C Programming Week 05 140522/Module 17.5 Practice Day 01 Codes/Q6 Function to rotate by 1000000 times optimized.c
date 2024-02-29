

        /// Q 6 function to rotate 1000000000 times optimized code


        /// Q 5 -> Function to rotate an array by k times

    #include <stdio.h>
    void rotateArray (int n, int ar[])
    {
        int first = ar[0];
        for (int i=0; i<n; i++)
        {
            ar[i] = ar[i+1];
        }
        ar[n-1] = first;
    }

    void rotateArraybyK (int n, int ar[], int k)
    {
        k = k % n;
        // as k * k times rotation is same n = 1 2 3 4 5 so length is 5 and k = 11
        // so 11 / 5 = 1. Hence 1 time rotation is same as 11 times for the input
        // that is why rotating by the mod : number of rotation / array length
        // rotation jodi 7 bar bole tobe 7*7 = 14, 21, 28, 35 tomo rotation same hobe
        for (int i=0; i<k; i++)
        {
            rotateArray(n, ar);

        }

    }

    int main () {
        int i, n;
        printf ("Enter array size: ");
        scanf ("%d", &n);
        int ar[n];
        printf ("Enter array elements: ");
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        printf ("Enter number of rotation: ");
        int k;
        scanf ("%d", &k);


        rotateArraybyK (n, ar, k);

        for (int i=0; i<n; i++)
        {
            printf ("%d ", ar[i]);
        }
    }

