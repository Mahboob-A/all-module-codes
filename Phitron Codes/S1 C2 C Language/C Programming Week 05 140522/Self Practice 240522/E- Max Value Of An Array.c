

        // maximum number in an array

    #include <stdio.h>
        int getMax (int x, int y)
        {
            if (x>y) return x;
            else     return y;
        }

    int main () {
        int n, i;
        scanf("%d", &n);

        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int maxAns = ar[0];
        for (i=0; i<n; i++)
        {
            maxAns = getMax (maxAns, ar[i]);
        }

        printf("The maximum number in the array is: %d", maxAns);
    }
