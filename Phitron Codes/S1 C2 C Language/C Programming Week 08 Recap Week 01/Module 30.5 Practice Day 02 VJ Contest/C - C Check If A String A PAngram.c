

        /// C- C Check if a string is a pangram

        // https://vjudge.net/contest/498956#problem/C
        // Password: recap


    #include <stdio.h>
    int main () {
        int n;
        scanf("%d", &n);
        char str[101];
        int i, count[26] = {0};
        scanf("%s", &str);

        for (i=0; i<n; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
            char val = str[i];
            count[val-'a'] = 1;


            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
            char val = str[i];
            count[val-'A'] = 1;

            }

        }

        for (i=0; i<26; i++)
        {
            if (count[i] == 0)
            {
            printf ("NO");
            return 0;
            }
        }

        printf("YES");
    }




