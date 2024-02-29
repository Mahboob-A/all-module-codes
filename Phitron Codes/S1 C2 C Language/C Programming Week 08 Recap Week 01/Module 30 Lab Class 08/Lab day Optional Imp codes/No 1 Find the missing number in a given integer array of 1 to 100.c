

        /// No 1 -> find the missing number in a given integer array of 1 to 100

    #include <stdio.h>
    int main () {
        int i, n;
        scanf("%d", &n);
        int ar[101];
        int count[102] = {0};

        for (i=1; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        for (i=1; i<n; i++)
        {
            int val = ar[i];
            count[val]++;
        }

        for (i=1; i<n; i++)
        {
            if (count[i] == 0)
            {
                printf ("Missing Number: %d\n", i);
            }
            if (count[i] > 1)
            {
                printf("Duplicate Number: %d\n");
            }

        }



    }
