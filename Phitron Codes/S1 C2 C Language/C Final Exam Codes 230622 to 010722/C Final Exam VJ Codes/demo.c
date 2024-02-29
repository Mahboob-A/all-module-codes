
 #include <stdio.h>
    #include <string.h>

    int main () {
        int i, j, l, r;
        scanf("%d %d", &l, &r);
        getchar();

        char str[100001];
        scanf("%s", str);
        int len = strlen(str);
        printf("%d\n", len);

        for (i=l; i<=r; i++)
        {
            for (j=l+1; j<=r; j++)
            {
                char tmp = str[j];
                str[j] = str[i];
                str[i] = tmp;
            }
        }

        printf("%s", str);


    }
