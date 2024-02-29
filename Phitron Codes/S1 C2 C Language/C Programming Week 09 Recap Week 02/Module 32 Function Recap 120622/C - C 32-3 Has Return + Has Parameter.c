

        /// C - C 32-3 Has Return + Has Parameter
        // 120622

        // Function type 01:

    #include <stdio.h>
    int getLength(char a[]) // parameter receiving a[0] here
    {
        int idx = 0;
        while(a[idx] != '\0') // calculating length
        {
            idx++;
        }
        return idx; // returning the result
    }
    int main () {
        char str[]="hello";

        int len = getLength(str); // calling the function, passing a parameter and saving its return to a variable
        printf("%d", len);
    }
