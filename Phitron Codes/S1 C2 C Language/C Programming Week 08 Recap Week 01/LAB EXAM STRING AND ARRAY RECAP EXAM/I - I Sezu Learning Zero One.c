

        /// I - I Sezu Learning Zero One



/*

#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    char str[t];
    scanf("%s", &str);
    int countn = 0;
    int countz = 0;
    int n = 1;
    int z = 0;
    for(int i=0; i<t; i++){
        if(str[i]=='n'){
            countn++;
        }
        if(str[i]=='z'){
            countz++;
        }
    }
    for(int i=0; i<countn; i++){
        printf("%d ", n);
    }
    for(int i=0; i<countz; i++){
        printf("%d ", z);
    }
}




*/



    #include <stdio.h>
    int main () {
        int i, len;
        scanf("%d", &len); // reading the length of the string
        char str[len+1];  // taking one size bigger array
        scanf("%s", str); // reading string
        int nCounter = 0, zCounter = 0, n = 1, z = 0; // variables

        for (i=0; i<len+1; i++)
        {
            if (str[i] == 'n') // if char n found in the string then count the frequency in nCounter var
                nCounter++;
            if (str[i] == 'z') // same operation as char n
                zCounter++;
        }

        for (i=0; i<nCounter; i++) // run the loop until not nCountes's size and print value of n as 1 as per it's frequency
            printf("%d ", n);

        for (i=0; i<zCounter; i++) // same as printing n value
            printf("%d ", z);

    }

