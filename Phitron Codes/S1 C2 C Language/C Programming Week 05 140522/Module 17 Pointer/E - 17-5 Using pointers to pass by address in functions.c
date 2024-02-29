
        /// 17-5 Using pointers to pass by address in functions

    #include <stdio.h>

    void swap (int *x, int *y) { // user defined function
         int temp = *y; // swapping value by pass by address
         *y = *x;
         *x = temp;
    }
    int main () {
        int a = 10, b = 20;
        swap (&a, &b); // passing address

        printf("a is = %d, b is = %d", a, b);
    }
