


            /// Q9 Minimum number changes to make a palindrome
            // 180622 10.30 p.m

    /*
    You know palindromes, right? Now make a function named check_palindrome()
    which will take a string as a parameter and return the minimum number of characters
     you need to change so that the string can become palindrome.
     You can’t add or delete any character.
     For example: check_palindrome(“abcdba”) will return 1 as you can change the
     character of index 2 to ‘d’ or character of index 3 to ‘c’ to make it palindrome.
    */

    #include <stdio.h>
    #include <string.h>
    int check_palindrome(char *str)
    {
        int i,  j,  cnt = 0;
        for (i=0, j=strlen(str)-1;  i<j;  i++,  j--)    // two pointers technique
        {
            if (str[i] != str[j])           // checking if any of index doesnot match
                cnt++;                    // if so, then count; this is minimum changes
        }                                 // required to make it palindrome
        return cnt;
    }
    int main () {
        char str[100];
        scanf("%s", str);

        int num = check_palindrome(str);         // calling function

        printf("%d", num);

    return 0;
    }
