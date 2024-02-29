

        /// H - H Robot Language Of Sophomore


        #include <stdio.h>
    int main () {
        int i, one = 0, zero = 0;
        char str[102];
        gets(str);

        for (i=0; str[i] != '\0'; i++)
        {
            if (str[i] == '1')
            {
                one++;
                zero = 0;
            }
            else if (str[i] == '0')
            {
                zero++;
                one = 0;
            }
            if (one == 7 || zero == 7)
            {
                printf("YES");
                return 0;
            }
        }
        printf("NO");

        return 0;
    }
