   /*
    #include <stdio.h>
    /// normal but not efficient method of GCD
    int main () {
        int a, b;
        scanf("%d %d", &a, &b);

        int gcd = 1;
        for (int g=1; g<=a && g<=b; g++) {
            if (a%g == 0 && b%g == 0) {
                gcd = g;
                printf("Common Factors: %d\n", g);
            }
        }
        printf("GCD: %d", gcd);


    }
    */


     /// gcd using euklidio algorithm
    #include <stdio.h>
    int main () {
        int a, b;
        scanf("%d %d", &a, &b);

        while (a != 0) {
            int reminder = b%a;
            b = a;
            a = reminder;
            printf("%d %d\n", a, b);
        }
        printf("GCD = %d\n", b);
    }

