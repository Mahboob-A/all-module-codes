

        /// Q 4 Function to makeSum

    #include <stdio.h>
    void makeSum(int a, int b, int *sum)  // *sum is pointer int variable
    {
        *sum = a+b;         // storing sum of pass by value variables in pointer sum
        printf("%d", *sum);
    }
    int main () {
        int a, b;
        scanf ("%d %d", &a, &b);
        int sum = 0;
        makeSum(a, b, &sum); // function call, passing address of sum as argument
    }
