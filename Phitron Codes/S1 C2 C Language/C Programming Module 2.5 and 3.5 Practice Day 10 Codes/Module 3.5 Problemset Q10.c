/*
        Write a C program that accepts two item’s weight (floating points' values )
        and number of purchase (floating points' values)
        and calculate the average value of the items.
        Expected Input/Output:

         Weight - Item1: 15

         No. of item1: 5

         Weight - Item2: 25

         No. of item2: 4

         Expected Output:

         Average Value = 19.444444


         Hint: Find the total weight and total number of objects and
         then use it to find the average.

*/

#include <stdio.h>

    int main() {

    float weightNum1, noNum1, weigthNum2, noNum2;
    printf("Enter Num 1 Weight, No of num 1; Num 2 weight and no of  num 2: ");

    scanf("%f %f %f %f", &weightNum1, &noNum1, &weigthNum2, &noNum2);

    float tweight = weightNum1+weigthNum2;
    float tnum = noNum1+noNum2;

	float avg1, avg2;
	avg1 = tweight/2;
	avg2 = tnum/2;

	float finalAvg = avg1 / avg2;

	printf("%f", finalAvg);




    return 0;
    }

