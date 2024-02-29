


        /// Q2 Function to find avg of array values
        // 170622 08.10 a.m



     /*
    Make a function named make_sum() which will take two floating
    values as parameters and return their sum
    */


    #include <stdio.h>
    int make_average (int *ar, int n) // array and it's size as parameter
    {
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += ar[i];
        }
        return sum / 2; // returning the avg of those values
    }


    int main () {
        int i, n;
        scanf("%d", &n);

        int ar[n];

        for(i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int avg = make_average(ar, n); // calling to find avg of array values

        printf("%d", avg);


    }

