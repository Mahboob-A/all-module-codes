

        /// QS 9- Find position of a char in a string

        /*
            We wrote a program to find all positions of a
            character in a string with the strchr
            function. Now do the same without using strchr.

        */
        // single occurance of a char
/*
    #include <stdio.h>
    #include <string.h>
    int main () {
        int i, n, c, cnt=0;
        char str [100];
        gets (str);
        scanf ("%c", &c);


        int len = strlen(str);
        for (i=0; i<len; i++)
        {
            if (str[i] == c)
            {
                printf ("Character %c Found at %d Position:\n", c, i);
                break;
            }
        }
        if (str[i] != c)
            printf ("Character %c Not Found the Given String:\n", c);

        return 0;
    }


    */
    // all occurance of a char

    #include <stdio.h>
    #include <string.h>

    int main() {
        char str[100], c;
        int i;
        gets(str);
        scanf("%c", &c);

        for(i = 0; i <= strlen(str); i++)
        {
            if(str[i] == c)
            {
                printf("The Character %c is Found at The Position %d\n", c, i);
            }

        }

  	return 0;
    }

