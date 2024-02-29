

        /// F - F Miska The Polar Bear The Dice Player

    #include <stdio.h>
    int main () {
        int i, n;
        scanf("%d", &n);
        int mrr[n], crr[n];
        int m = 0, c = 0;

        for (i=0; i<n; i++)
        {
            scanf("%d %d", &mrr[i], &crr[i]);
        }

        for (i=0; i<n; i++)
        {
            if (mrr[i] > crr[i])
                m++;
            if (mrr[i] < crr[i])
                c++;
        }

        if (m > c)
            printf("Mishka");
        if (c > m)
            printf("Chris");
        if (m == c)
            printf("Friendship is magic!^^");

    }
