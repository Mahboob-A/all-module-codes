





        /// G - G Heidi Fake News
        // check if a sub string is present in main string
        //11/06/22

    #include <stdio.h>
    int main() {
        char str[1002], sbstr[] = "heidi"; // substring to check
        int i, x = 0;


        scanf("%s", str);
        for (i=0; str[i] != '\0'; i++)
        {
            if (str[i] == sbstr[x])  // checking is main string has the index of substring
            {
                x++; // if has, then increase
            }
            if (x == 5) // if index is equal to 5
            {
                printf("YES"); // then the main string has the substring
                return 0;
            }
        }

        printf("NO");

        return 0;

    }

