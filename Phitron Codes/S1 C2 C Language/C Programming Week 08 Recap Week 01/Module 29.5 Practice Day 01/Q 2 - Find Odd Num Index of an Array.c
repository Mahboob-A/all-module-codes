

        /// Q2 - Find odd and even num in an array


    #include <stdio.h>
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n], odd[n], even[n];
        memset(odd, 0, sizeof(odd));   // initializing 0 to each index
        memset(even, 0, sizeof(even));

        for (i=0; i<n; i++)
       {
           scanf ("%d", &ar[i]);
       }

       for (i=0; i<n; i++)
       {
           if ((ar[i] % 2 == 0)) // if even then value goes to even array
                even[i] = ar[i];

           if (ar[i] %2 != 0)    // if rem is not 0 then odd and value goes to odd array
                odd[i] = ar[i];
       }
       for (i=0; i<n; i++)
       {
           if (odd[i] > 0)                 // only printing the odd value
           printf("odd -> %d \n", odd[i]);
           if (even[i] > 0)                 // only printing the even value
            printf ("even -> %d\n", even[i]);

       }

    }
