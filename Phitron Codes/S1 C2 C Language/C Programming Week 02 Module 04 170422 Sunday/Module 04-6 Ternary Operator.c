    #include <stdio.h>
    #include <stdbool.h>

    /// finding absolute value using if else
    /*

    int main () {
         int num;
         scanf("%d", &num);

         int abs; // abs =  absolute value

         if (num >= 0) {
		abs = num;
         }
         else {
		abs =  -num;
         }
         printf("%d", abs);
    }

    */
    /// absolute value using ternary operator

    int main  () {
         int num;
         scanf("%d", &num);

         int abs = (num >= 0 ? num : -num);   /// abs = absolute value

         printf("%d", abs);
    }
