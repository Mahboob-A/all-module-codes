
        /// https://vjudge.net/contest/495277#problem/C
        /// RGB Colors


        #include <stdio.h>
        int main () {
            int n, i, count=0;
            scanf("%d", &n);
            char s[n];
            scanf("%s", &s);

            for (i=0; i<n; i++) {
                if (s[i] == s[i+1]) { // if current index is equal of next index
                    count++;           // then count the number of same index
                }
            }
            printf("%d", count); // print the count

        return 0;
        }
