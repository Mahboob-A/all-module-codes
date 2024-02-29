
      /*
      A trapezoid is a quadrilateral with two parallel sides.
      The lengths of the two parallel sides are aa and bb and their distance is h.


      An example of a trapezoid

      The area of such a trapezoid = {1\over2} (a+b) h
      */

        #include <stdio.h>

         int main() {

         int a, b, h;
         scanf("%d %d %d", &a, &b, &h);

         //int area = (upperBase + lowerBase)*distance/2;
         printf("%d", (a+b)*h/2);

         return 0;
         }
