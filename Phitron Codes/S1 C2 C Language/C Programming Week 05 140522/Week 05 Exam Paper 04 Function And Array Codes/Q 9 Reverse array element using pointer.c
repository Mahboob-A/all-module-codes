

        /// Q 9 -> Read and Print array element in reverse oorder using pointer


        // http://amitthakur744.blogspot.com/2013/09/write-c-program-using-pointers-to-read.html
        // https://www.youtube.com/watch?v=CYf-rVrKNTI

    #include <stdio.h>
    #define N 5 // defining a macro N which denotes array length

    int main () {

        printf ("Enter only 5 elements: ");
        int ar[N];     // array decalred as ar[]
        int *pN = ar; // *pN pointer which holds address of array ar as &ar[0]

        // reading the array using pointer
        for (int i=0; i<N; i++)  // iterating untill not N
            scanf ("%d", pN++); // iterating to next location of mem using increment pointer arithmatic

        pN = &ar[N-1]; // assigning the last index of array to pointer pN to print from the last index

        for (int i=0; i<N; i++)      // iterating untill not N
            printf("%d ", *pN--);   // printing the array values
                                    //from the last index as
                                    // pN now holds the last index of array
                                    // and iterating to previous mem loc.

    }


