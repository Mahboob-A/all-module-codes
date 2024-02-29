    #include<stdio.h>

    // perimeter and area of a circle

       int main () {

       printf("Enter radius: ");
       double radius;
       scanf("%lf", &radius);


       const double PI = 3.1416;
       double perimeter = 2 * PI * radius;
       printf("Perimeter = %lf\n", perimeter);

       double area = PI * radius * radius;
       printf("Area = %lf\n", area);















       return 0;
       }
