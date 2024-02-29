/*
In the vacation of Ramadan,
Alex decided to arrange an Ifter party.
He has to buy two watermelons for making juice
The store sells three kinds of watermelons
for the price of a, b and c taka , respectively.
Find the minimum total price of two different watermelons.
*/

    #include <stdio.h>
    int main () {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

    int positionOne, positionTwo, positionThree;
    if (a < b && a < c) {
        positionOne = a;
        if (b < c) {
            positionTwo = b;
            positionThree = c;
        }
        else {
            positionTwo = c;
            positionThree = b;
        }

    }
    else if (b < a && b < c) {
             positionOne = b;
        if (a < c) {
            positionTwo = a;
            positionThree = c;
        }
        else {
            positionTwo = c;
            positionThree = a;
        }
    }
     else {
          positionOne = c;
        if (a < b) {
            positionTwo = a;
            positionThree = c;
        }
        else {
            positionTwo = b;
            positionThree = a;
        }
     }
     printf("%d", positionOne+positionTwo);
    }


