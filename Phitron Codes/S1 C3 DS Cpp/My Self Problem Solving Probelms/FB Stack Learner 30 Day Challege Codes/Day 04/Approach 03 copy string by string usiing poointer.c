




    // Approach 03 : c program

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

