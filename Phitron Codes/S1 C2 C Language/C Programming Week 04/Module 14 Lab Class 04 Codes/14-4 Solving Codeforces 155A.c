    /// 14-4 Solving Codeforces 155A

    #include <stdio.h>
    int main () {
        int n;
        scanf("%d", &n);

        int score[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &score[i]);
        }

        int answer = 0, minval = score[0], maxval = score [0];

        for (int i=1; i<n; i++) {
            if (score[i] > maxval || score[i] < minval) {
                answer++;
            }
            if (score[i] > maxval) {
                maxval = score[i];
            }
            if (score[i] < minval) {
                minval = score[i];
            }
        }
        printf("%d", answer);
     return 0;
    }
