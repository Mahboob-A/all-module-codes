      /*
      Input
      The only input line contains two integers �
      the number of cans shot by Harry and by Larry respectively.

      Output
      two integers � the number of cans that were not shot by Harry
      and the number of cans that were not shot by Larry, respectively.

      */

        #include <stdio.h>

         int main() {

         int h, l;
         scanf("%d %d", &h, &l);

         printf("%d %d", (h+l-1)-h, (l+h-1)-l);


         return 0;
         }