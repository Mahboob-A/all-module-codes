


            /// Q 7 Functio to count number of swaps of selection sort
            // 180622 04.30 p.m




    /*
    Make a function named count_swaps() which will take an array of integers
    and the size of that array. You need to tell how many swaps you need while
    implementing the selection sort that is shown in the module video and return
    that number of swaps from that function.
    */


    #include <stdio.h>
    int count_swaps (int *ar, int n)
    {
        int swap = 0;
        for (int i=0; i<n-1; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (ar[j] < ar[i])
                {
                    int tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = tmp;
                    swap++;
                }

            }
        }
        return swap;
    }

    int main() {
        int i, n;
        scanf("%d", &n);

        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int swap = count_swaps(ar, n);
        printf("%d\n", swap);

        for (i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }

    }
