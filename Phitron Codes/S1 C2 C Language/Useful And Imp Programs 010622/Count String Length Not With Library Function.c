

        /// Count String Length Not With Library Function
        // 120622

    #include <stdio.h>
    int getStrlen (char str[])
    {
        int indx = 0;
        while(str[indx] != '\0')
        {
            indx++;
        }
        return indx;
    }


    int main () {
        char a[50];
        gets(a);

        int len = getStrlen(a);
        printf("%d", len);


    }
