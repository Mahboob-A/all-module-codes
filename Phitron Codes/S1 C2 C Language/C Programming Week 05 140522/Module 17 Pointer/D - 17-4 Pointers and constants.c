
        /// 17-4 Pointers and constants

    #include <stdio.h>
    int main () {

        printf("\nEX 01----------------------------\n");
        const int N = 20;

        int *pN = &N;

         *pN = 10; // changing value of a const var using pointer

        printf("%d\n", N); // value of const  var n is now changed to 10

        printf("\n EX 02 CONTS ON VALUE ----------------------------");

        const int O = 20;

        const int *pO = &O; // CONST ON POINTER VALUE BUT ADDRESS CAN BE CHANGED

        int M = 100;
        pO = &M;

        *pN = 10; // changing value of a const var using pointer

        printf("\n\n address is %p and value is %d\n", pO, *pO); // value of const  var n is now changed to 10


        printf("\n EX 03 CONST on pointer address----------------------------");


        const int X = 20;

        int* const pX = &X;


        printf("\n\n %d\n", X); // value of const  var n is now changed to 10

    }
