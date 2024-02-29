

        /// QS 2 - Make A Program To Reverse An Array
        // 100622

                // reverse an array using in-place method

    #include <stdio.h>
    int main() {
        int i, j, n;
        scanf("%d", &n);
        int arr[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(i=0, j=n-1; i<j; i++, j--)
        {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }

        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }

    }

        // reverse an array using n-1-i index

        /*
    #include <stdio.h>
    int main() {
        int i, n;
        scanf("%d", &n);
        int arr[n], brr[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i=0; i<n; i++)
        {
            brr[n-1-i] = arr[i];
        }

        for (i=0; i<n; i++)
        {
            printf("%d ", brr[i]);
        }

    }


        */



        // reverse an array using k index

        /*
    #include <stdio.h>
    int main () {
        int i, n, k = 0;
        scanf("%d", &n);
        int arr[n], brr[n];

        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i=n-1; i>=0; i--)
        {
            brr[k] = arr[i];
            k++;
        }

        for (i=0; i<n; i++)
        {
            printf("%d ", brr[i]);
        }


    }

    */
