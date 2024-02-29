
        /// Find Triangular Number Using Loop and Function

        // triangular number finder using loop

/*
    #include <stdio.h>
    int main () {
        int n, i;
        scanf("%d", &n);

        int sum = 0;
        for (i=1; i<=n; i++)
        {
            sum += i;
        }

        printf("%d", sum);

    }

    */
                                    // triang num using function
    #include <stdio.h>
        void printTriangNum(int k)
        {
            int sum = 0;
            for (int i=0; i<=k; i++)
            {
                sum += i;
            }
            printf("%d", sum);

        }

    int main () {
        int n;
        scanf("%d", &n);
        printTriangNum(n);


    }
