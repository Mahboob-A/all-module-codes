
        /// https://vjudge.net/contest/495277#problem/A
        /// Fb friend request odd or even of an array



    #include <stdio.h>
    #include <string.h>
    int main () {
        int i, count =  0;
        char str[100], freq[100];
        gets(str);

        for (i=0; i<strlen(str); i++) {
            char c = str[i];
            freq[c-'a'] = 1;
        }
        for (i=0; i<26; i++) {
            if (freq[i] == 1) {
                count++;
            }
        }
        if (count%2 ==0) {
            printf("CHAT WITH HER\n");
        }
        else {
            printf("IGNORE HIM\n");
        }
   return 0;
    }
