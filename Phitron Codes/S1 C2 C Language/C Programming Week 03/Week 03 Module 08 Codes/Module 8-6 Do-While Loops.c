    #include <stdio.h>
    // even number input neowa using while loop

   /* int main () {
        int x;

        while (1) {
            scanf("%d", &x);
            if (x%2 == 0) break;
        }
        printf("Your Even Input Is: %d", x);
    }

   */

    // even number input neowa using do while loop

    int main () {
        int x;

        do {
            scanf("%d", &x);
        } while (x%2 != 0);
        printf("Your Even Input Is: %d", x);
    }
