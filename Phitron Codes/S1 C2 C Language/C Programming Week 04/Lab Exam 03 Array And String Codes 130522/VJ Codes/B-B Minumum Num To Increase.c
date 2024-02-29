

            /// https://vjudge.net/contest/495277#problem/B
            ///B-B Minimum num to increase to make equal all




    #include <stdio.h>
    int main () {
        int n;
        scanf("%d", &n);

        int num[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &num[i]);
        }
        int maxnum = 0;
        for (int i=0; i<n; i++) {
            if (num[i]>maxnum) {
                maxnum = num[i];
            }
        }


        int sum = 0;
        for (int i=0; i<n; i++) {
            sum += maxnum - num[i];
        }
        printf("%d", sum);




    return 0;
}
