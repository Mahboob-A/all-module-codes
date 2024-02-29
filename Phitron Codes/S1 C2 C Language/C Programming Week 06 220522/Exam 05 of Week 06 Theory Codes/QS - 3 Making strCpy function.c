

        /// QS- 3: making makeStrCpy function

        /*
        Implement the makeStrCopy function. Remember that, It takes a string
        in copies to an output string out. The signature should be
        void makeStrCopy(char in[], char out[]). For example - if
        in = “hello”, after calling makeStrCopy, out should also be “hello”
        */

    #include <stdio.h>
    #include <string.h>
    void makeStrCopy(char in[], char out[])
    {
        strcpy (out, in);
        printf ("Printing in function from char out: %s", out);
    }

    int main() {
        char in[100], out[100];
  	    gets (in);
  	    makeStrCopy (in, out);




    }












