

        /// C - C 33-3 Array with Pointers
        // 130622

    #include <stdio.h>
    int main () {

        // read and print an array using pointer

        int i, n;
        scanf("%d", &n);
        int ar[n];


        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int *ptr = ar;
        for (i=0; i<n; i++)
        {
            printf("%d ", *(ptr));  // *(ar+i) korle ptr pointer declare korte hobe na
            ptr++;
        }
    }
