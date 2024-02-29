

        /// D-D 28-4 Array Initialization

    #include <stdio.h>
    int main () {
        int ar[5] = {0};

        for (int i=0; i<5; i++)
        {
            scanf ("%d", &ar[i]);
        }

        for (int i=0; i<5; i++)
        {
            printf ("%d ", ar[i]);
        }
    }
