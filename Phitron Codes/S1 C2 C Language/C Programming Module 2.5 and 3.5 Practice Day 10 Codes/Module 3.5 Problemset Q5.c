    /*
        Write a C program that takes a positive float number and outputs its integer part and real part.
        Expected Input/Output:

                Enter Number: 3.578

                Integer part: 3

                Real part: .578

     Hint  : To find the real part, you can subtract the integer part from the number.

    */
        #include <stdio.h>

         int main() {

         float number;
         scanf("%f", &number);

         int inum = (int)number;
         float realnum = number-inum;

         printf("The integer part is: %d and the real part is: %.3f", inum, realnum);

         return 0;
         }
