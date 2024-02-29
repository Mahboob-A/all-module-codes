

        /// Q 7 -> Q 7 Returning two int from function through pass/call by address mechanism


    #include <stdio.h>
    void getSum (int *a, int *b, int *sum, int *diff) // receiving arguments as pointer
    {
        *sum = *a + *b; // changing value of original var using pointer variable
        *diff = *a - *b;
    }
    int main () {
        int a, b, sum, diff;
        scanf ("%d %d", &a, &b);

        // calling function
        getSum(&a, &b, &sum, &diff); // passing argument to user-defined function
                             // with variable address
        printf ("Sum is: %d, Difference is: %d", sum, diff);  // printing sum with the addition & subst of both var using the return by address mechanism

    }
