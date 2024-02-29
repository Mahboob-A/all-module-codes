



    #include <stdio.h>

    int reverse (int *n)
    {

        int lastDigit, rev = 0;


        while (*n > 0)
        {
            lastDigit = *n % 10;
            *n = *n / 10;
            rev = (rev * 10) + lastDigit;

        }
        return rev;
    }

    int main () {
        int n;
        scanf ("%d", &n);
        int rev = reverse (&n);
        printf ("%d", rev);
    }


    /// Algorithm
    /*

    1.

    */
