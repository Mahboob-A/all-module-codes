/*
You are given three integers A, B and C.
Determine whether C is not less than A
and not greater than B.
*/

    #include <stdio.h>
    int main () {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

    if (c >= a && c <= b) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    }
