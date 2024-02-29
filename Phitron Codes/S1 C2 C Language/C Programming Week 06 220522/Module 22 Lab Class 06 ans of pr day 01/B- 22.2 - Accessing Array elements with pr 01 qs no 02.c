

        /// B - 22.2 - Accessing Array elements with
        // practice day 01 question no 02.

        // using pointer function

        /*

    #include <stdio.h>
    int* findProd (int n, int ar[])
    {

        static int prod = 1; // pointer ke return korte hole must static variable use korte hoy
        for (int i=0; i<n; i++)
        {
            prod = prod * ar[i];
        }
        return prod;
    }
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        ///*int prod = 1;
        for (i=0; i<n; i++)
        {
            prod = prod * ar[i];
        //}

        int *prod = findProd(n, ar);
        printf ("%d", prod);
    }

        // rewrite the program using pointer not using array

        */


        /// same program but not using any array, DMA and using pointer

    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int *ar = (int *)malloc(n*sizeof(int));

        for (i=0; i<n; i++)
        {
            scanf ("%d", ar+i); // ar+i == &ar[i] same || &ar[i] in array and ar+i in pointer
        }
        int prod = 1;
        for (i=0; i<n; i++)
        {
            prod *= *(ar+i); // *(ar+i) in pointer and ar[i] in array or  prod = prod * *(ar+i);
        }
        free(ar);
        printf ("%d", prod);
    }













