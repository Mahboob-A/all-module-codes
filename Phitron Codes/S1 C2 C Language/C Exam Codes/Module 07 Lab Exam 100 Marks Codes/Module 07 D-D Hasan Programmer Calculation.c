
    #include <stdio.h>
    int main () {
        int n;
        scanf("%d", &n);

        double multi = 0;
        double sum = 0;

    for (int i=1; i<=n; i++) {
        double a, b;
        scanf("%lf %lf", &a, &b);
        multi = a*b; // protibar gun kore multi update kora hocce
        sum += multi; // mul er folafol ke protibar jog kore sum e deowa hocche
    }
    printf("%.3lf", sum);

    }



