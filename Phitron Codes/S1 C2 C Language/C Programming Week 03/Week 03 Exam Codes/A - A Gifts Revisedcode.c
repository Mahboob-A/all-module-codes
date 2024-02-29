 /**   #include <stdio.h> // A-A Gifts Revised Code
    int main () {
        int n, k, a;
        scanf("%d %d %d", &n, &k, &a);

        int
        for (int i=a; i<=n; i++) {
            if (i==n) {
                i=1;
                k--;
            }
            if (k==0) {
                printf("%d\n", i);

            }
        }
}

**/

/**
    #include <stdio.h> // A-A Gifts Revised Code
    int main () {
        int n, k, a;
        scanf("%d %d %d", &n, &k, &a);

        int count = a;
        for (int i=a; i<=k; i++) {
            if (i==n) {
                i=1;
                k--;
            count++;
            }
            if (k==0) {
                printf("%d\n", count);
//                printf("%d\n", n);
//                printf("%d\n", k);
//                printf("%d\n", a);
            }
        }

    }


**/


#include <stdio.h> // A-A Gifts Revised Code
    int main () {
        int n, k, a;
        scanf("%d %d %d", &n, &k, &a);

        int count = a;
        for(int i=1; i<k; i++){
            if(count==n){
                count = 1;
            } else if(count!=n){
                count++;
            }
        }
        printf("%d\n", count);
    //     for (int i=a; i<=k; i++) {
    //         if (i==n) {
    //             i=1;
    //             k--;
    //         count++;
    //         }
    //         if (k==0) {
    //             printf("%d\n", count);

    //   }
    return 0;
        }

