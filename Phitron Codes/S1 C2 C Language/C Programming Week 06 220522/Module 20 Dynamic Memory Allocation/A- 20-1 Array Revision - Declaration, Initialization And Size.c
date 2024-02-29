

        /// A-A: 20-1 Array Revision - Declaration, Initialization And Size

    #include <stdio.h>
    int main () {
        int ar[10] = {1, 2, 3, 4, 5}; // array size and initialization
        double dr[15] = {1, 2, 3};

        int sz = sizeof(ar) / sizeof(ar[0]);  // array size find Max index of the array is array size (size is not array length)
        int sz2 = sizeof(dr) / sizeof(dr[0]);

        printf("Int array ar[] Max index or array size: %d\n", sz);
        printf("Double array dr[] Max index or array size: %d\n\n", sz2);

        int arrayMemory = sizeof(ar);   // it shows the memory taken by the array


        int doubleArrayMemory = sizeof(dr);



        printf ("Memory taken by int dt %d th size array is %d byte\n", sz, arrayMemory);

        printf ("Memory taken by double dt %d th size array is %d byte\n\n", sz2, doubleArrayMemory);



    }


