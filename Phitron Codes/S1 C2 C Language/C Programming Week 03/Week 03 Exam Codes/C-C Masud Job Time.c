    #include <stdio.h>
    int main () {
        int s, t, x;
        scanf("%d %d %d", &s, &t, &x);

        if (s<t) {
           if (x>s && x<t) {
            printf("Yes");
           }
           else {
            printf("No");
           }
        }
        if (s>t) {
            if ((x<s && x<=23) && (x>=0 && x>=t)) {
                printf("No");
            }
            else {
                printf("Yes");
            }
        }
        if (s==t) {
            if (x<s && x<t) { //|| (x>=0 && x>t));
            //if ((s==x && t>=23));
            printf("Yes");
            }
       }

    }
