
    /// string problem
    // find palindrome word
    // two pointers technique

    #include <stdio.h>
    #include <string.h>
    int main () {
        int i, j;
        char paldrm[101];
        scanf("%s", paldrm);



        i=0, j=strlen(paldrm)-1;
        while(i<j) {

            if (paldrm[i] != paldrm[j]) {
                printf("No");
                return 0;
            }
            i++;
            j--;
        }
        printf("Yes");

        return 0;
    }


/*

    #include <stdio.h>

    int main () {
        int x[50];

        for (int i=0; x[i] != '\0'; i++) { //#ASK:  ask if this size function could be used here
            scanf ("%d", &x[i]);
        }
        for (int i=0; x[i] != '\0'; i++) {
            printf("%d ", x[i]);
        }
        return 0;
    }
*/
