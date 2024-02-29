

        /// B-B 29-2 String Input Output


        /*
    #include <stdio.h>
    int main () {
        char ch[5] = "hello ";
        //scanf("%s", ch);
        printf ("%s\n", ch);
        for (int i=0; i<4; i++)
        {
            printf("%c ", ch[i]);
        }

    }
    */

    #include <stdio.h>
    int main () {
        char ch[5];
        fgets(ch, 5, stdin);
        int sz = strlen(ch);
        ch[sz] = '\0';
        printf ("%d\n", sz);
        printf("%s", ch);
    }
