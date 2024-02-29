

        /// Q 6 -> Write a function that outputs the
        /// element wise sum of two equal sized array

    #include <stdio.h>
    void arraySum (int x, int a[], int b[], int sum[])
    {
        for (int i=0; i<x; i++) // sum calculation
        {
            sum[i] = a[i] + b[i];
        }

        for (int i=0; i<x; i++) // printing sum
        {
            printf ("%d ", sum[i]);
        }
    }

    int main () {

        int i, n;
        printf("Enter the size of array: ");
        scanf("%d", &n);


        int a[n], b[n];
        int sum[] = {0};
        printf("Enter array one element: ");
        for (i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("Enter array 2 element: ");
        for (i=0; i<n; i++)
        {
            scanf("%d", &b[i]);
        }

        arraySum (n, a, b, sum); // function call

    }
