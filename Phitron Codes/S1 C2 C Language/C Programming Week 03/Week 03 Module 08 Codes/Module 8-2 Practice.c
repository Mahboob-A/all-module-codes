    #include <stdio.h>
    //addition of digits of a number
    int main () {
        int x;
        scanf("%d", &x);

        int sum = 0;
        int reversed = 0;
        while (x>0) {
            int digitLast = x%10;
            x/=10;
            sum+=digitLast;
            reversed = reversed * 10 + digitLast;
            printf("Last Digit: %d, Remaining Number: %d\n", digitLast, x);
        }
        printf("Sum = %d\n", sum);
        printf("Reversed Number: %d\n", reversed);
    }
