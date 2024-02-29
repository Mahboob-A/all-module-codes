/*
You will be given three numbers
A, B and C respectively.
Determine whether you can construct a
sequence 575 by using each of the phrases once,
in any order.

*/

    #include <stdio.h>
    int main () {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

    if ( (a == 5 || a == 7) && (b == 5 || b == 7) && (c == 5 || c == 7)) {
        printf ("YES");
    }
    else {
        printf("No");
    }

    }
