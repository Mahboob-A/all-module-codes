

            /// 060722
            // 9.30 pm

    /// Approach 01

    /*
    Declare a global string and copy the original string from
    index 2nd into that global string and print it in main.
    */

    #include <stdio.h>
    #include <string.h>

    static char str[50];

    void p_new_word(char *word)
    {
        int i, j = 0;
        for (i=2; word[i] != '\0'; i++)  // copying the original string into global string array from index 2nd
        {
            str[j] = word[i];
            j++;
        }

    }

    int main() {

        char word[50];
        scanf("%s", word);

        p_new_word(word);   // calling function

        printf("%s\n", str);  // printing the global string where the selected part was copied


        return 0;
    }



    /// Approach 02 : c program

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




    /// Approach 03 : c program

    // copy string by string using pointer

    /*
    This approach is so far easier than those in previos ones. But one is needed to have
    a bit knowledge of pointer here. So the process is like this:

    Take the string in function.
    Make a pointer to the string pointing to +2 index i.e string+2 'th index.
    Put a null at the 0'th index of the string.
    Copy the pointer into the string array using strcpy.
    Print the original string array in main.
    */

    #include <stdio.h>
    #include <string.h>

    void p_new_word(char *word)
    {
        char *ptr = word+2;   // pointer pointing to word[2] address
        word[0] = '\0';      // making input string null
        strcpy (word, ptr); // copying the pointer into input string again
    }

    int main() {

        char word[50];
        scanf("%s", word);

        p_new_word(word);  // function call

        printf("%s\n", word);  // printin the origianl char type array.


        return 0;
    }

