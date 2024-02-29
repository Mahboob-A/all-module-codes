    #include <stdio.h>
    //B - Bit++
    int main () {
        int x = 0;

        int n;
        scanf("%d", &n);

        for (int i=1; i<=n; i++) {
            char a, b, c;
            scanf(" %c%c%c", &a, &b, &c);

            if (b == '+')  x++;
            else if (b == '-')  x--;
        }
        printf("%d\n", x);

    }
