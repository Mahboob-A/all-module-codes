//    #include <stdio.h>
//    // kono number er jogfol
//    int main () {
//        int x;
//        scanf("%d", &x);
//
//        int sum = 0;
//        while (x > 0) {
//            int lastDigit = x%10;
//            x/=10;
//            sum += lastDigit;
//            printf("Last Digit: %d, x: %d\n", lastDigit, x);
//        }
//       printf("Sum = %d", sum);
//
//    }


// 12345 ke ultano mane 54321 kore print kora
// oporer sutro debar por number = 0 ke 10 diye
// gun kore tar songe digit jog korte hobe

    #include <stdio.h>

    int main () {
        int num;
        scanf("%d", &num);


        int reversed = 0;
        while (num > 0) {
            int lastDigit = num%10;
            num/=10;
            reversed = reversed * 10 + lastDigit;
        }
        printf("Reversed Number: %d", reversed);

    }


