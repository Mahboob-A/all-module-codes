

        ///Q 3) find gcd of an array elements

    #include <stdio.h>
    int getGcd (int x, int y) // function to find gcd of two integers
    {
        while (y > 0)
        {
            int temp = x % y;
            x = y;
            y = temp;
        }
        return x;

    }
    // function to find gcd of array elements

    int getArrayGcd (int n, int ar[])
    {
        int gcd = ar[0];
        for (int i=1; i<n; i++)
        {
            gcd = getGcd(gcd, ar[i]); // calling getGcd function within another function
        }
        // returning gcd as the final answer
        return gcd;
    }

    int main () {

        // array of 10 elements initialized with 0
        printf ("Enter 10 array elements to find their gcd: ");
        int ar[10] = {0};
        int n = 10;

        for (int i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]); // reading array
        }

        // calling function getArrayGcd to find gcd of array elements
        int gcd = getArrayGcd(n, ar); // passing n as array length and the 0th index of the array
        printf("%d", gcd);


    }
