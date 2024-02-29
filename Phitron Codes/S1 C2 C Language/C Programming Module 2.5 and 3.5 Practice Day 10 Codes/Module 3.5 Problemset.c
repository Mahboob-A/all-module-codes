/*
    Write a C program that accepts an employee's total worked hours of a month
    and the amount he received per hour. Print salary (with two decimal places) of a particular month.

    Test Data :

    Input the working hrs: 8

    Salary amount/hr: 15000

    Expected Output:

    Salary = 120000.00
*/

    #include <stdio.h>

     int main() {

     float workHour, amountPerHour;
     printf("Enter working hour and amount per hour: ");
     scanf("%f %f", &workHour, &amountPerHour);

     float salaryInMonth =  workHour * amountPerHour;
     printf("The salary of the given month is: %.2f", salaryInMonth);

     return 0;
     }
