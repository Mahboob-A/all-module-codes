
    /*
    Write a C program to input two numbers and perform all arithmetic operations
    to find sum, difference, product, quotient and modulus of two given numbers.

    Example

    Input

    First number: 10

    Second number: 5

    Output

    Sum = 15

    Difference = 5

    Product = 50

    Quotient = 2

    Modulus = 0
    */

       #include <stdio.h>

       int main() {

       int input1, input2;
       scanf("%d %d", &input1, &input2);

       int sum, difference, product, quotient, modulus;

       sum = input1+input2;
       difference = input1-input2;
       product = input1*input2;
       quotient = input1/input2;
       modulus = input1%input2;

       printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nModulus = %d\n", sum, difference, product, quotient, modulus);

       return 0;
       }
