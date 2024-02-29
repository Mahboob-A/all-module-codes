

        /// QS 5 Function to concatenate two string not using strcat
        // 150622

        // same code different approach
        /*
    #include <stdio.h>
    #include <string.h>
    void string_concat (char str[], char str1[])
    {
        int i, j, k=0;
        for (i=0; str[i] != '\0'; i++) // at first read the first string length
            k++;

        for (j=0; str1[j] != '\0'; j++)
        {
            str[k+j] = str1[j]; // then copy the second string from the last of 1st string
        }
        str[k+j] = '\0';

    }
    int main () {
        char ch[50], ch1[50];
        scanf("%s %s", ch, ch1);

        string_concat(ch, ch1);

        printf("ch - %s\n\n \nch1 - %s", ch, ch1);

    }

    */


    // 160622

    #include <stdio.h>
    #include <string.h>
    int string_len(char str[])
    {
        int i = 0;
        while(str[i] != '\0')
        {
            i++;
        }
        return i;
    }
    void string_cat(char str1[], char str2[])
    {
        int j = string_len(str1); // 1st sring size
        for (int i=0; str2[i] != '\0'; i++)
        {
            str1[j] = str2[i]; // copying 2nd string after the 1st string size
            j++;      // increasing size of 1st string, untill 2nd string finds null
        }
        str1[j] = '\0';  // null at the end of string 1
    }


    int main () {

        char s1[50], s2[50];
        scanf("%s %s", &s1, &s2);

        string_cat(s1, s2);

        printf("%s", s1);
    }



