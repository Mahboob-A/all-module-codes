
        /// 18.1 - Finding Max Of Array With Two Functions


    #include <stdio.h>

    void readArray (int n, int ar[]) // function to read array element
    {

         for (int i=0; i<n; i++)   // pass array size and array in argument
         {
             scanf ("%d", &ar[i]);
         }
    }

    void printArray (int n, int ar[]) // function to print array element
    {
        for (int i=0; i<n; i++)   // // pass array size and array in argument
        {
            printf("%d ", ar[i]);
        }
    }

    int getMax (int x, int y) // function to find max of two elements
    {
        if (x>y) return x; // this function is being used to find max in array
        else     return y;
    }

    int getArrayMax (int x, int ar[]) // function to find max of array including using getMax function
    {
        int ans = ar[0];
        for (int i=0; i<x; i++) // pass array size and array in argument
        {
            ans = getMax(ans, ar[i]);
        }
        return ans;
    }


    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];

        readArray (n, ar);
        int max = getArrayMax (n, ar);
        printArray (n, ar);

        printf ("\nThe max num in the array is: %d\n", max);

    }
