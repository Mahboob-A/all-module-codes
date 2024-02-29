

        /// check if a string has 0 to 9 numbers
        // 270922 06.00 p.m ( during c final exam)

    #include <stdio.h>
    #include <string.h>
    int main () {
        int i;
        char j;
        char str[1001];
        gets(str);
        int len = strlen(str);
        int count[10] = {0};

        for (i=0; i<len; i++)
        {
            char val = str[i];
            count[val - '0'] = 1;
        }

        for (j='0'; j<='9'; j++)
        {
            if (count[j - '0'] == 0)
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
        return 0;
    }
