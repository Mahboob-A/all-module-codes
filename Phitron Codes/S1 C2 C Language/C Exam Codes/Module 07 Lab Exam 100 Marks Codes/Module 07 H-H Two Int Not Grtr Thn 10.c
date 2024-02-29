/*
Subbir has two integers A and B .
Output the value of A+B.

However, if A+B is 10 or greater,
output error instead.
*/

    #include <stdio.h>
    int main () {
        int a, b;
        scanf("%d %d", &a, &b);

    if (a + b >= 10) {
        printf("error");
    }
    else {
        printf("%d", a + b);
    }

    }
