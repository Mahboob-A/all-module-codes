    #include <stdio.h>

        /// +++ --- sequence
       /// count technique
/**

    int main () {
        int n;
        scanf("%d", &n);
        getchar();

        int plus = 0, minus = 0, max_ans = 0;
        for (int i=1; i<=n; i++) {
            char c;
            scanf("%c", &c);
            if (c == '+') {
                    if (minus>max_ans) {
                        max_ans=minus;
                    }
                    minus=0;
                plus++;
            }
            else {
                    if (plus>max_ans) {
                        max_ans=plus;
                    }
                    plus=0;
                minus++;
            }

        }
        if (plus>max_ans) {
            max_ans=plus;
        }
        if (minus>max_ans) {
            max_ans=minus;
        }
        printf("%d\n", max_ans);
    }


    **/


    /// double pyramid easy
    // nested loop

/////////**

    int main () {
        int n, steps = 1;
        scanf("%d", &n); // taking input

        for (int i=1; i<=2*n-1; i++) { // up down lines
            for (int j=1; j<=steps; j++) { // printing stars left right
                printf("*");
            }
            if (i<n) {   // steps increasing
                steps++;
            }
            else {     // steps decreasing
                steps--;
            }
            printf("\n");
        }
    }

**/


    /// double pyramid hard

    int main () {
        int n, steps = 1; //space = n/2; // it prints in midddle
        scanf("%d", &n);
        int space = n/2; // it prints in left side

        for (int i=1; i<=n; i++) { // lines up down

            for (int k=1; k<=space; k++) { // space creating
                printf(" ");
            }
            for (int j=1; j<=steps; j++) { // steps left right
                    printf("*");
            }
            if (i<=n/2) {   // till i<n/2 steps+2 increasing and space decrease
                steps+=2;
                space--;
            }
            else {
                steps-=2;
                space++;  // after i<n/2 steps-2 decreasing and space increasing
            }
            printf("\n");
        }


    }
