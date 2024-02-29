    #include <stdio.h>
    int main () {

        char num[10];
        gets(num);

        int freq[10] = {0};

        for (int i=0; i<9; i++) {
            char x = num[i];
            int digit = x - '0';
            freq[digit]++;
        }

        int ans;

        for (int i=0; i<=9; i++) {
            printf("%d -> %d\n", i, freq[i]);
                if (freq[i] == 0) {
                ans = i;
            }
        }
        printf("\n%d", ans);
    }
