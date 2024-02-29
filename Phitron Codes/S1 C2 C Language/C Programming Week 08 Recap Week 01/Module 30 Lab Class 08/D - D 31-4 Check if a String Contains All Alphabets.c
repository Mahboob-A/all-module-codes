

        /// D - D 31-4 Check if a String Contains All Alphabets

    #include <stdio.h>
    int main () {
        char str[100];
        scanf("%s", &str);

        int counter[26] = {0};  // 26  as 26 alphabet and 26 means last index is 25
        for (int i=0; i<strlen(str); i++)
        {
            char val = str[i];
            counter[val - 'a'] = 1;  // val is char value and counter is int, so ->  to get int form from char is -> (char - char == int )
        }
        for (char val = 'a'; val <= 'z'; val++)
        {
            if (counter[val - 'a'] == 0) // here if the index is 0, so, char val should be converted into int value
            {
                printf("Not all alphabets are present in the string\n");
                return 0;
            }
        }

        printf("Yes! all alphabets are present in the string\n");

        return 0;
    }
