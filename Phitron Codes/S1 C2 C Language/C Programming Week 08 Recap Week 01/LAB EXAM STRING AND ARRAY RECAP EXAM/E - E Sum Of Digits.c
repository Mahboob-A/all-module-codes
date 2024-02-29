

        /// E - E Sum Of Digits



    #include <stdio.h>
    int main () {
        int i, n, digit, sum = 0;
        scanf("%d", &n);
        for (i=1; i<=5; i++)
        {
            digit = n%10;
            sum += digit;
            n = n / 10;
        }

        printf("%d", sum);

    }


        /*
        #include <stdio.h>
        int main () {
            int n, digit, sum = 0;
            scanf("%d", &n);

            while (n>0)
            {
                digit = n%10;
                sum += digit;
                n = n/10;
            }

            printf("%d", sum);

        }

        */
