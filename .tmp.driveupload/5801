



    // Approach 02 : c program

    // Printing the selected portion using the original string array

    /*
    Receive the string in function.
    Make another same sized char type array.
    copy original string into the 2nd char type array form index 02
    put a null at 0th index of original string so that it gets empty or garbage outside 1st loop
    run 2nd loop again with 2nd string from 0th index
    copy 2nd selected string into original string
    inside loop check if 2nd string's i+1 index is null, if so, put a null at original string's i+1 index too
    print the original string array in main.
    */



    #include <stdio.h>
    #include <string.h>

    void p_new_word(char *word)
    {
        int i, j = 0;
        int len = strlen(word);
        char str[len];

        for (i=2; word[i] != '\0'; i++)  // copying input string's into another string array beginning from 2nd index
        {
            str[j] = word[i];  // characte by character copying
            j++;
        }

        word[0] = '\0';    // making input string empty

        for (i=0; str[i] != '\0'; i++)   // again copying the selected part of the string into original string array
        {
            word[i] = str[i];     // as str[i]'s 0th index should be word[i]'s 0th index, hence i index used for both
            if (str[i+1] == '\0')  // checking if i+1 i.e the next index is null of selected string,
            {
                word[i+1] = '\0';  // then put a null in original string now as str[i] is being copied to original sting array
            }
        }

    }

    int main() {

        char word[50];
        scanf("%s", word);

        p_new_word(word);   // function call

        printf("%s\n", word);  // printing through original input string


        return 0;
    }

