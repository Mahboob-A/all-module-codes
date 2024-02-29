

        /// B- 21-2 Function Parameter Passing Mechanisms
  //A)

/*
    #include <stdio.h>
    #include <stdbool.h>

    void makePositive (double *x) /// make neg num into positive using pointer
    {
        if (*x < 0) *x = -*x;
    }

    int main () {

        while (true)
        {
            double x;
            scanf ("%lf", &x);
            if (x == 0) break;

            makePositive(&x);
            printf ("%.2lf\n", x);
        }




    }
*/
 //A 1)

    /// make neg num into positive print in void
    /**  ## same code but not with pointer, printing in void ##

    #include <stdio.h>
    #include <stdbool.h>
    void makePositive (double x)
    {
        while (true)
        {
            double x;
            scanf ("%lf", &x);
            if (x == 0) break;
            if (x < 0) x = -x;
            printf ("%.2lf\n", x);
        }
    }

    int main () {

        double x;
        makePositive(x);
    }

    */



    #include <stdio.h>
    int getGcd (int x, int y)
    {
        while ( y != 0)
        {
            int temp = x%y;
            x = y;
            y = temp;
        }

        return x;
    }
    int getArrayGcd (int sz, const int ar[])
    {
        int ans = ar[0];
        for (int i=1; i<sz; i++)
        {
            ans = getGcd(ans, ar[i]);
        }
        return ans;
    }
    void makeDouble (int sz, int ar[])
    {
        for (int i=0; i<sz; i++)
        {
            ar[i] *= 2;
        }
    }

    int main () {
        int n, i;
        scanf ("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        makeDouble (n, ar);
        for (i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }
        printf ("\n\n");

        printf("%d ", getArrayGcd(n, ar));

    }
