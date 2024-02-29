
                /// https://vjudge.net/contest/495277#problem/G
                /// G-G Guess a string from a given string

    #include <stdio.h>
    int main () {
        int i, j, k, n;
        scanf("%d", &n);
        char str[101];

       for (i=0; i<n; i++)
       {
           scanf("%s", &str);
       }


        for (i=0; i<n; i++) {

        for (i=0; i<strlen(str); i++)
        {
            for (j=i+1; j<strlen(str); )
            {
                if (str[i] == str[j])
                {
                    for (k=j; k<strlen(str); k++)
                    {
                        str[k] = str[k+1];
                    }
                }
                else
                {
                    j++;
                }
            }
        }
    }
        printf("%s\n", str);

    return 0;
    }
