

        /// A-A 29-1 Introduction to String

    #include <stdio.h>
    int main () {
        int i, n;
        char strng[50]; //= {"hello"};
        char chaar[50]; //= {'a', 'b', 'c', 'd', 'e'};


        //scanf ("%d", &n);


        scanf("%s", strng);
        //printf("%s", strng);

        for (int i=0; i<10; i++)
        {
            scanf("%c", &chaar[i]);
        }
        chaar[10] = '\0';

        printf ("%d\n", strlen(strng));
        printf ("%d", strlen(chaar));
    }
