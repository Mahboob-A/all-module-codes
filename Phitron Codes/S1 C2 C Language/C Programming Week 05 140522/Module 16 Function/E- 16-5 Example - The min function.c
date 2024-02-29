
        /// 16-5 Example - The min function



    #include <stdio.h>

    int getMin(int a, int b) {
        if (a<b) return a;
        else     return b;
    }

    int main () {
        int n;
        scanf("%d", &n);

        int ar[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &ar[i]);
        }
        int minAns = ar[0];
        for (int i=0; i<n; i++) {
            minAns = getMin(minAns, ar[i]); /// calling the function
        }
        printf("The minimum number is: %d", minAns);

    }

