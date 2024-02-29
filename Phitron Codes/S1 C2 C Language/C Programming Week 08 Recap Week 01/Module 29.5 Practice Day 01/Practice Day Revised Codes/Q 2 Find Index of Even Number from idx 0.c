





      /// Q2 - Write a C code which takes an array of size N as input and do the following:
        /// Print the values of even indexes. Index of that array starts from 0.



    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
       {
           scanf ("%d", &ar[i]);
       }


       for (i=0; i<n; i++)    // loop until not n
       {
           if (i % 2 ==  0)    // checking if the index number is even
           printf("%d ", ar[i]);  // if index number is even then print value of that even index
       }

    }
