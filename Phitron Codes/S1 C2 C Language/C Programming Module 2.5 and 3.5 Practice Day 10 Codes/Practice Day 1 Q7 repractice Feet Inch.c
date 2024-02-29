
  /*

   7. Write a program that takes input in inches and prints output
   in feet and inches.
   Example:
   Enter height is inches: 65
   Your height is 5 feet 5 inches

  */

  #include <stdio.h>

      int main() {

      int height;
      printf("Enter Your Height In Inches: ");
      scanf("%d", &height);

      int feet = height / 12;
      int inch = height % 12;

      printf("Your Height Is %d Feet and %d Inches.", feet, inch);



      return 0;
      }
