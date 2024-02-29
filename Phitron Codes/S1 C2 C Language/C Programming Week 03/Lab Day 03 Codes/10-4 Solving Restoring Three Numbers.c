    #include <stdio.h>

    /// 10-4 Solving Restoring Three Numbers || practice 9.5 ||

    int main () {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int sum = 0;
        if (a > sum) sum = a;
        if (b > sum) sum = b;
        if (c > sum) sum = c;
        if (d > sum) sum = d;

        if (a < sum) printf("%d ", sum-a);
        if (b < sum) printf("%d ", sum-b);
        if (c < sum) printf("%d ", sum-c);
        if (d < sum) printf("%d ", sum-d);


    }
