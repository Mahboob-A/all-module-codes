/*
      Write a C program to convert a given integer (in days) to years,
      months and days, assuming that all months have 30 days and all years have 365 days.
      Test Data :

      Input no. of days: 2535

      Expected Output:

      6 Year(s)

      11 Month(s)

      15 Day(s)



      Hint: It is similar to the Feet-Inches problem.
      First find the number of years and the remaining number of days.
      Then convert the remaining number of days into months and days.

*/

#include <stdio.h>


int main() {

  int n, y, m, rd, dy;
  scanf("%d", &n);

  y = n/365;
  /*rd = (n%365); // rd = remaining days

  m = rd/30;
  dy = rd%30; // dy = days*/

  m = (n%365)/30;
  dy = (n%365)%30;

  printf("Years = %d\nMonths = %d\ndays = %d\n", y, m, dy);




  return 0;
  }
