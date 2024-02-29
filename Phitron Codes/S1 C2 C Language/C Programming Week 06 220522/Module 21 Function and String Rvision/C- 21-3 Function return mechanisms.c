

        /// C- 21-3 Function return mechanisms

        // program to find sum of integer

/*

    #include <stdio.h>
    int sumOfDigit (int x)
    {
        int sum = 0;
        while (x)
        {
            int digit = x % 10;  // finding last digit
            x /= 10;            // removing last digit
            sum += digit;
        }
        return sum;
    }
    int main () {
        int digitSum = sumOfDigit(123456789); // calling function
        printf ("%d", digitSum);
    }

    */

    // vagfol and vagsesh program

/*

    #include <stdio.h>
    void div (int x, int y, int *vagfol, int *vagsesh) // return by address
                                        // return by address mechanism
    {
        *vagfol = x/y;
        *vagsesh = x%y;
    }
    int main () {
        int x, y, vagfol, vagsesh;
        scanf ("%d %d", &x, &y);
        div(x, y, &vagfol, &vagsesh);

        printf("Vagfol: %d Vagsesh: %d\n", vagfol, vagsesh);


    }

*/

        /// find square of N numbers

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












