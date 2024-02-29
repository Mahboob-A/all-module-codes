

        /// make an array element assending or in desending order
        // 100622



    #include <stdio.h>
    int main () {
        int i, j, n, count = 0;
        scanf("%d", &n);
        int arr[n];

        for (i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if (arr[i] < arr[j])  // in asending order // if need in desending, then < shoulf be >.
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }

            }
        }


        for (i=0; i<n; i++)
        {
            printf("%d  ", arr[i]);
        }
        printf("\n\n");


    }
