

        /// F- F 32-6 No Return + No Parameter Function
        // 120622
        // Function type 04:

        // this type of function is very useful for test case type problem

        // a function using no return and no parameter


    #include <stdio.h>
    void printArray (void) // no return and no parameter
    {
        int i, n;
        scanf("%d", &n);
        int arr[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    int main () {
        int t;
        scanf("%d", &t); // test case length

        while(t--) // running test case loop
        {
            printArray(); // calling function
        }


        // test case loop using for loop
        /*
        for (i=1; i<=t; i++)
        {
            printArray();
        }
        */

    }

