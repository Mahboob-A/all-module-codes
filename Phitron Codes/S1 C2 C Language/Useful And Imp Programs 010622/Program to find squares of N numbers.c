



        /// find square of N numbers

        // module 21. time 9.00
        // 01.06.22

        // pass by address

    /*

    #include <stdio.h>
    void makeNsquares (int n, int square[]) // this array is using as output array
    {
        for (int i=0; i<n; i++)
        {
            square[i] = (i+1) * (i+1); // +1 excludes 0
        }
    }
    int main () {
        int n, i;
        scanf ("%d", &n);
        int ar[n];

        makeNsquares(n, ar);
        for (i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }
    }


*/

        /// find square of N numbers

        // return by address (using dynamically alocated memory)

    #include <stdio.h>
    int * makeNsquares (int n)
    {
        int *squares = (int *)  malloc(n* sizeof(int));
        for (int i=0; i<n; i++)
        {
            squares[i] = (i+1) * (i+1);
        }
        return squares;
    }
    int main () {
        int n, i;
        scanf ("%d", &n);
        int *ar;

        ar = makeNsquares(n);
        for (i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }
    }

