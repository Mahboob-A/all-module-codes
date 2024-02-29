

    /*

    Practice day 01 - M 2.5

    8. Write a program that takes input length and wide of a
    Rectangle and outputs its Area and Perimeter.

    */

     #include <stdio.h>

      int main() {

      int length, wide;
      printf("Enter length and wide: ");
      scanf("%d %d", &length, &wide);

     // printf("The area and perimeter of the rectangle is %d and %d", length*wide, length+wide*2);

     int area = length * wide;
     int perimeter = 2 * (length+wide);

     printf("The area and perimeter of the rectangle is %d and %d", area, perimeter);


      return 0;
      }
