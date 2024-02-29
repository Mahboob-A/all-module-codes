


            /// Basic Structure Program squareroot find
            // 20.06.22 05.20 pm

    // basic structure program find square root of 1 to 100

    #include <stdio.h>
    #include <string.h>
    int main () {
        typedef struct
        {
            int no[100];
            double root[100];
        }sqrtroot;           // struct name

        sqrtroot squareroot;    // decalaring a instance

        for (int i=1; i<=100; i++)
        {
            squareroot.no[i] = i;           // inserting elements
            squareroot.root[i] = sqrt(i);   // finding squareroot using sqrt() function
        }

        for (int i=1; i<=100; i++)
        {
            printf("Squreroot of %d is %.4f\n", squareroot.no[i], squareroot.root[i]);
        }

    }

