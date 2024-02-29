

        /// C - C Count Numbers In A String

    #include <stdio.h>
    int main () {
        char s, str[1001];
        int i, freq[10] = {0};
        gets(str);



        for (i=0; str[i]!='\0'; i++)
        {
            if (str[i] >='0' && str[i] <='9') // checking the string is digit
            {
                char val = str[i];
                freq[val - '0']++;
            }

        }

        for (i=0; i<10; i++)
        {
            printf("%d ", freq[i]);
        }



    }
