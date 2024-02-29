

        /// Session May-18 Array String Problem Solving Array Codes
        // vjudge.net/contest/496266#problem/C

    #include <stdio.h>
    int main () {
        int i, n, num;
        int freq[2001] = {0};
        scanf ("%d", &n);

        for (i=0; i<n; i++)
        {
            scanf("%d", &num);
            freq[num]++;
        }

        for (i=0; i<2000; i++)
        {
            if (freq[i] == 0)
            {
                printf("%d\n", i);
                break;
            }
        }

        return 0;
    }
