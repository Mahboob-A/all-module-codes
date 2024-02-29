
    /// program to find frequency of array

    #include <stdio.h>
    int main () {
        int i, j, n, counter = 0;
        int arr[100], freq[100];

        printf("Number of element in array: ");
        scanf("%d", &n);

        for (i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        for (i=0; i<n; i++) {
            counter = 1;
            if (arr[i]!=-1) {

            }
            for (j=i+1; i<n; i++) {
                if (arr[i] == arr[j]) {
                    counter++;
                    arr[j]=-1;
                }
                freq[i]=counter;
            }

        }
        for (i=0; i<n; i++) {
            if (arr[i]!=-1) {
                printf("No of %d is %d\n", arr[i], freq[i] );
            }

        }

    }
