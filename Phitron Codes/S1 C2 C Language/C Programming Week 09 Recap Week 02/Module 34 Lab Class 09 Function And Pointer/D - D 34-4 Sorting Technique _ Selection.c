


        /// D - D 34-4 Sorting Technique _ Selection
        // 150622 04.40 p.m


    #include <stdio.h>
    void sort_array (int *ar, int n)
    {
        for (int pos=0; pos<n-1; pos++) // loop until to the previous index of last index
        {
            for (int check=pos+1; check<n; check++) // begin checking from the next value of  current position
            {
                if (ar[check] < ar[pos]) // condition if true
                {
                    int tmp = ar[pos]; // then swap
                    ar[pos] = ar[check];
                    ar[check] = tmp;
                }
            }
        }
    }

    int main () {
        int i, n;
        scanf("%d", &n);

        int ar[100] = {0};

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        sort_array (ar, n);

        for (i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }
    }
