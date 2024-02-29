

        /// Reverse An Array Using In-Place Method
        // 100622



        // reverse an array

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

