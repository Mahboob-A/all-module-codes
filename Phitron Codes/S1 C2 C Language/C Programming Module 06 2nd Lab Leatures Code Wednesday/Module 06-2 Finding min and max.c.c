#include <stdio.h>

    /// finding max of two in if else
//    int main () {
//        int a = 10, b = 20;
//        int max_ab;
//
//          if (a > b) {  /// min = (a < b)
//            max_ab = a;
//          }
//          else {
//            max_ab = b;
//          }
//         printf("%d", max_ab);
//
//    }




    /// min max using ternary operator

//    int main() {
//        int a = 25, b = 50;
//        int max_ab = a > b ? a : b;
//   min_ab = a < b ? a : b;
//       printf("%d", max_ab);
//
//    }


    /// atCoder input out put code
    //atcoder.jp/contests/abc136/tasks/abc136_c

    int main () {

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

           int abDiff = a - b; // diff = difference

           if (abDiff >= c) {
            printf("0");
           }
           else {
               c -= abDiff; /// ak line ei c ke minus kora holo abDiff theke o c
               printf("%d", c); /// er value = er karone assign kora hoye gelo.
        }



    }
