    #include <stdio.h>
    #include <stdbool.h>

    /// all about break statement

   /* int main () {

        while (true) {
            int x;
            scanf("%d", &x);

            if (x == 0) {
                break;
            }
            printf("%d\n", x);
        }
    }
    */

    int main () {
        while (true) {
            int x;
            scanf("%d", &x);

            if (x !=0 && x!=1) {
                printf("Invalid Data");
                break;
            } /// taking particular input

            if (x == 0 && x == 1) {
                printf("%d\n", x);
            }
        }

    }
