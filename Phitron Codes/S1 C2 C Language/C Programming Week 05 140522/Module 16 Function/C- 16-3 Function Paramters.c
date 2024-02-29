
        /// 16-3 Function Paramters
/*
    #include <stdio.h>
    void printTriangalNumber(int k) {
        int sum = 0;
        for (int i=0; i<=k; i++) {
            sum+=i;
        }
        printf("%d th triangal number is %d", k, sum);
    }

    int main () {
        int n;
        scanf("%d", &n);

        printTriangalNumber(n);


    }
*/

    #include <stdio.h>
    void printGcd(int x, int y) {

        while (y > 0) {
            int temp = x%y;
            x = y;
            y = temp;
        }

        int gcd = x;
        printf("Gcd is: %d", gcd);
    }

    int main () {
        int n, m;
        scanf("%d %d", &n, &m);

        printGcd(n, m);


    }
