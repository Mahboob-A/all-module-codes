
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
        for (int i=0; i<k; i++)
        {
            rotateArray(n, ar);
            //printf ("Iteration %d: ", i+1);
            for (int i=0; i<n; i++)
            {
                printf("%d ", ar[i]);
            }
            //printf ("\n");
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



        //rotateArray (n, ar);


        rotateArraybyK (n, ar, k);
    }
