

        /// D-D 29-4 Counter Array in string

    #include <stdio.h>
    int main () {
        char ch[50];
        gets (ch);

        int count[26] = {0};
        for (int i=0; i<strlen(ch); i++)
        {
            char val = ch[i];
            count[val-'a']++; // same as count[val-97];
        }
        for (char val='a'; val<='z'; val++)
        {
            if (count[val-'a']>0)
                printf ("Value -> %c Count -> %d\n", val, count[val-'a']);
        }
    }
