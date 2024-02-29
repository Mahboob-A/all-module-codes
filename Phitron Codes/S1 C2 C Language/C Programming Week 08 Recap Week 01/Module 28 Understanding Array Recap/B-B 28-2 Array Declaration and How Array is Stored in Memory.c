

        /// B-B 28-2 Array Declaration and How Array is Stored in Memory

    #include <stdio.h>
    int main () {
        long  int ar[5];
        for (int i=0; i<5; i++)
        {
            scanf("%d", &ar[i]);
        }
        for (int i=0; i<5; i++)
        {
            printf("%d \n  ", &ar[i]);
        }
    }
