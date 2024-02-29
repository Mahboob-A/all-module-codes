

        /// A-A: 22.1 - Returning Array from function Mechanism

        /// Method 01: returning an array through parameter:
    /*

    #include <stdio.h>
    void makeCopy (int n, int in[], int out[]) // passing extra parameter int out[] to copy the element
    {
        for (int i=0; i<n; i++)
        {
            out[i] = in[i]; // copying input array to output array here out acting as output array
        }

    }

    int main () {
        int i, n;
        scanf("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int cpyar[n]; // as ar[] needed to be copied, the same size is needed here
        makeCopy (n, ar, cpyar); // calling function and passing extra array to store the copied values
                                // as variable length array is stack memory array to it is a local array
                                // and program can't access it outside its scope
                                // cpyar is passing to store the values save the values stored in out[] array
        for (i=0; i<n; i++)
        {
            printf("%d ", cpyar[i]);
        }

    }

    */
        /// A-A: 22.1 - Returning Array from function Mechanism

        /// Method 02: returning an array by DMA returning pointer

    #include <stdio.h>
    int* makeCopy (int n, int in[])
    {
        int *out = (int *)malloc(n*sizeof(int));
        for (int i=0; i<n; i++)
        {
            out[i] = in[i];
        }
        return out;
    }
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int *cpyar = makeCopy(n, ar);
        for (i=0; i<n; i++)
        {
            printf ("%d ", cpyar[i]);
        }
    }
