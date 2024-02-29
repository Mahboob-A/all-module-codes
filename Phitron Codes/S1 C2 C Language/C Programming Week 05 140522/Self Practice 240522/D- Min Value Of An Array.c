

        // minimum value of an array

    #include <stdio.h>
        int getMin (int x, int y)
        {
            if (x<y) return x;
            else     return y;
        }

    int main () {
        int i, n;
        scanf("%d", &n);

        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int minAns = ar[0];
        for (i=0; i<n; i++)
        {
            minAns = getMin(minAns, ar[i]);
        }

        printf("The minimum number in the array is: %d", minAns);


    }
