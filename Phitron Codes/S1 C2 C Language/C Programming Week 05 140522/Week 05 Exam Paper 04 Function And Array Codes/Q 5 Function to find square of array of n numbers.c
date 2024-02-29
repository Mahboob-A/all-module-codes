

        /// Q 6 Function to find square of array of n numbers

    #include <stdio.h>
    void makeNarray (int a, int squares[])
    {

        for (int i=0; i<a; i++)
        {
             squares[i] = squares[i] * squares[i]; // square of array and
                                                    // holding them in the same array
        }

        for (int i=0; i<a; i++)
        {
             printf("%d ", squares[i]);
        }



    }

    int main () {
        int i, n;
        printf("Enter number of elements to find square: ");
        scanf ("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }
        // calling function
        makeNarray (n, ar); // passing argument n = array length, ar = array index 0 address
    }
