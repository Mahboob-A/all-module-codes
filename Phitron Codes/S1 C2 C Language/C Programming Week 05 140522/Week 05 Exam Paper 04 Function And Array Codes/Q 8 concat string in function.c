

        /// Q 8 -> stringCat(char a[], char b[], char out[])
        /*
        stringCat(char a[], char b[], char out[]) The strcat function
        takes two strings and concats them and outputs them to a out.
        Assume that out has enough space to hold contents of both a and b.
        Implement the function.
        */

    #include <stdio.h>
    void stringCat(char a[], char b[], char out[])
    {
        out = strcat(a, b); // concatenating the strings and strong in out string array
        printf("%s", out);
    }
    int main () {
        char x[50], y[50], out[101];
        gets (x);
        gets (y);

        stringCat(x, y, out); // passing arguments
    }
