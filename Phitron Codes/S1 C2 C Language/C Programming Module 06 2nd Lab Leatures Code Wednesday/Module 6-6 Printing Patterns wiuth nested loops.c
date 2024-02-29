    #include <stdio.h>

    /// 5.5 practice set Q 10 b, a, c.)


    // printing stars
    /*
    int main () {
         int n;
         scanf("%d", &n);

         for (int i=1; i<=n; i++) {
            for (int h=1; h<=i; h++) {
                printf("*");
            }
            printf("\n");
         }

    }
*/


/*
// printing
1
22
333
4444
55555

     int main () {
         int n;
         scanf("%d", &n);

         for (int i=1; i<=n; i++) {
            for (int h=1; h<=i; h++) {
                printf("%d", );
            }
            printf("\n");
         }

    }


*/


/*

// printing num

//1
//12
//123
//1234
//12345 order


     int main () {
         int n;
         scanf("%d", &n);

         for (int i=1; i<=n; i++) {
            for (int h=1; h<=i; h++) {
                printf("%d", h);
            }
            printf("\n");
         }

    }

    */

// printing like
//1
//2 3
//4 5 6
//7 8 9 10



    int main () {
         int n;
         scanf("%d", &n);
         int current_position = 1;

         for (int i=1; i<=n; i++) {
            for (int h=1; h<=i; h++) {
                printf("%d ", current_position);
                current_position ++;
            }
            printf("\n");
         }

    }
