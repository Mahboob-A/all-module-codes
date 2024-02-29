


        /// D - D 32-4 No Return + Has Parameter
        // 120622

        // Function type 02:

        // a program to find if a char is present in a string

    #include <stdio.h>
    void checkChar(char a[], char b)  // receiving the value in function parameter
    {
        for(int i=0; a[i] != '\0'; i++)
        {
            if (a[i] == b) // checking the value
            {
                printf("YES");
                return; // if condition is true then stop the program
            }
        }
        printf("NO"); // if condition is false
    }
    int main () {
        char str[100], ch;
        gets(str);     // input string
        scanf("%c", &ch);  // input char to find

        checkChar(str, ch); // calling a function which has parameter but has no return value
                            // it prints its value within its scope
    }

