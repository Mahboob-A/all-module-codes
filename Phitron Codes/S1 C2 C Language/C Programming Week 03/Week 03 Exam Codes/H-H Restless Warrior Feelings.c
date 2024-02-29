 /**

    #include <stdio.h>
    int main () {
        int n;
        scanf("%d", &n);

        for (int i=1; i<n; i++) {
            if (i%2!=0) {
                printf("I hate that ");
            }
            else {
                printf("I love that ");
            }

        }
        if (n%2!=0) {
            printf("I hate it.");
        }
        else {
            printf("I love it.");
        }
        return 0;
    }

**/


    #include <stdio.h>
    int main () {
        int n;
        scanf("%d", &n);

        for (int i=1; i<n; i++) {
            if (i%2==0) {
                printf("I love that ");
            }
            else {
                printf("I hate that ");
           }
        }
        if (n%2 == 0) {
            printf("I love it");
        }
        else {
            printf("I hate it");
        }
        return 0;
    }

/**

    #include <stdio.h>
    int main () {  //
        int n;
        scanf("%d", &n);

        if (n>2) {
           for (int i=1; i<n; i++) {
            if (i%2==0 && i==n) {
                printf("I love it.");
            }
            else if (i%2==0 && i!=n) {
                printf("I love that ");
            }
            else if (i%2==1 && i!=n) {
                printf("I hate that ");
            }
            else if (i%2==1 && i==n) { // i==n representes the last of n
                printf("I hate it.");
            }
        }
    }
        if (n%2!=0) {
            printf("I hate it.");
        }
        else {
           printf("I love it.");
        }
        return 0;
    }



**/
