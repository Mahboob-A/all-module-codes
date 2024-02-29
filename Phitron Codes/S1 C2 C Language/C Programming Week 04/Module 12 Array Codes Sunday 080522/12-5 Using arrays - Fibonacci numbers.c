    #include <stdio.h>    // 12-5 Using arrays - Fibonacci numbers
                          // array in application
    int main () {
        int n;
        printf("Enter number of fibonacci numbers: ");
        scanf("%d", &n);

        long long fibonacci[n];

        fibonacci[0] = 0;
        fibonacci[1] = 1;
        for (int i=2; i<n; i++) {
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }
        for (int i=0; i<n; i++) {
            printf("%d -> %lld\n", i+1, fibonacci[i]);
        }

    }
