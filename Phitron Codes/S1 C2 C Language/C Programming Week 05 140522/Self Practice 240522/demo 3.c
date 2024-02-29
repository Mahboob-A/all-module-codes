#include<stdio.h>
/// find avg marks using function


float findAverage(int marks[]);
int n;

int main()
{
    float avg;
    int marks[] = {99, 90, 96, 93, 95};
    int sz = sizeof (marks) / sizeof (marks[0]);
    n = sz;
    avg = findAverage(marks);       // name of the array is passed as argument.
    printf("Average marks = %.1f", avg);
    return 0;
}

float findAverage(int marks[])
{
    int i, sum = 0;
    float avg;
    for (i = 0; i <= n; i++) {
        sum += marks[i];
    }
    avg = (sum / 5);
    return avg;
}
