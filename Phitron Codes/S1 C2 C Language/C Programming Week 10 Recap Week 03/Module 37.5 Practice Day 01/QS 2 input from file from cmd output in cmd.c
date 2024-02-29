


            /// QS 2, 3, and 4 input from file from cmd output in cmd
            // 220622 05.43 pm

        /*
        Write a C program to calculate the sum of two integers. Make a file named
        “in.txt” and take input from that file using command prompt / terminal
        and show output in that command prompt.
        */

        // program is not running in cmp because name has space so try the code in demo page

    #include <stdio.h>
    int main () {

        int a, b;
        scanf("%d %d", &a, &b);

        int sum = a+b;

        printf("Sum -> %d", sum);
    }
