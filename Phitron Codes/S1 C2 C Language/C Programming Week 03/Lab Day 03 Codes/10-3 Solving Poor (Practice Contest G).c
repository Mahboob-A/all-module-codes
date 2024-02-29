     #include <stdio.h>
     /// G - Poor
     int main () {

         int a, b, c;
         scanf("%d %d %d", &a, &b, &c);

         if (a == b && b == c) {
            printf("No\n");
         }
         else if (a!=b && a!=c && b!=c) {
            printf("No\n");
         }
         else {
            printf("Yes\n");
         }



}


