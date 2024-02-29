


            /// Q10 Program to reverse an array in function and store it new
            /// array and prind the 2nd array in main function
            // 170622 05.10 p.m


    /*
    Make a function named change_array() which will take an integer
    array and size of that array. After that you will reverse that
    array and put that in a new array and print it in the main()
    function. You know that you can’t return an array normally, so
    you need to make that array in the main() function and pass
    that through the parameter.
    */


    #include <stdio.h>
    //int br[100] = {0};       // declared a global array to access it in main too
                              //if only two parameter is needed to pass
                              //contact support to get it clear                       // it in main too if only two //parameter is needed to pass contact support to get it clear
    void change_array (int *ar, int *br, int n)
    {
        for(int i=0, j=n-1; i<j; i++, j--) // reversing the array
        {
            int tmp = ar[i];
            ar[i] = ar[j];
            ar[j] = tmp;
        }
        for (int i=0; i<n; i++)
        {
            br[i] = ar[i];
        }
    }

    int main () {
        int i, n;
        scanf("%d", &n);

        int ar[100] = {0};
        int br[100] = {0};
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        change_array(ar, br, n);

        for (i=0; i<n; i++)
        {
            printf("%d ", br[i]);
        }

    }

