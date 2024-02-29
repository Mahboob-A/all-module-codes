
        /// min value of 5 num using function

    #include <stdio.h>
        int getMin (int x, int y)
        {
            if (x<y) return x;
            else     return y;
        }

    int main () {
        int a, b, c, d, e;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        int min1 = getMin(a, b);
        int min2 = getMin(min1, c);
        int min3 = getMin(min2, d);
        int minfinal = getMin(min3, e);

        printf("The minimum value among the five number is: %d", minfinal);
    }
