

        /// E - E Vasya Coder's Performance

    #include <stdio.h>
    int main () {
        int i, n, best = 0;
        scanf("%d", &n);

        int points[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &points[i]);
        }

        int min = points[0], max = points[0];

        for (i=1; i<n; i++)
        {
            if (points[i] > max || points[i] < min)
                best++;

            if (points[i] > max)
                max = points[i];
            if (points[i] < min)
                min = points[i];
        }

        printf("%d\n", best);



    }


