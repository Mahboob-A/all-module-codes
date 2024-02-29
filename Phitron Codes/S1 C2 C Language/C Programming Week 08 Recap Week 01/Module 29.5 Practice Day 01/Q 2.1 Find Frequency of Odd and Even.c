

        /// Q 2.1: Find how many odd and how many even number in the array has

    #include <stdio.h>           // find frequncy of odd even and their respective index
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n], odd[n], even[n];
        memset(odd, 0, sizeof(odd));
        memset(even, 0, sizeof(even));

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        for (i=0; i<n; i++)
        {
            if (ar[i] % 2 == 0)
                even[ar[i]]++;

            if (ar[i] % 2 != 0)
                odd[ar[i]]++;
        }

        for (i=0; i<n; i++)
        {
            //if (even[i] >= 0)
                printf("index -> %d even -> %d\n", i, even[i]);
            //if (odd[i] >= 0)
                printf("index -> %d odd -> %d\n", i, odd[i]);
        }

    }
