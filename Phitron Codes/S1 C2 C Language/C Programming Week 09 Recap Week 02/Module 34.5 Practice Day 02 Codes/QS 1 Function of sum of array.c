


        /// QS 1 Function of sum of array
        // 160622 11.10 1.m

        // Write a function named get_sum() which will take an array of integers
        //as a parameter and return the sum of all elements of that array.




    #include <stdio.h>

    int sum_ar (int *ar, int n)
    {
        int sum = 0;
        for (int i=0; i<n; i++)
        {
            sum += ar[i];
        }
        return sum;
    }

    int main () {
        int i, n;
        scanf("%d", &n);

        int ar[100] = {0};

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int sum = sum_ar(ar, n);

        printf("Sum of all the element is: %d", sum);

    }
