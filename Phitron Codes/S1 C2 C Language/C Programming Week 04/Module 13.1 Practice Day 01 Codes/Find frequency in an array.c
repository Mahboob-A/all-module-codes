
    /// find frequency in an array


            // find freq in an array program

    #include <stdio.h>

    int main() {
        int n, i, j, count, visited = -1;
        printf("Enter array size: ");
        scanf("%d", &n);

        int ar[100], freq[100];
        for (i=0; i<n; i++) {
            scanf("%d", &ar[i]);
        }
        for (i=0; i<n; i++) {
            count = 1;
            for (j=i+1; j<n; j++) {
                if (ar[i] == ar[j]) {
                    count++;
                    freq[j] = visited;
                }
            }
            if (freq[i] != visited) {
            freq[i] = count;
            }
        }

        for (i=0; i<n; i++) {
            if (freq[i] != visited) {
                printf("%d th element is repeated %d th times: \n", ar[i], freq[i]);
            }
        }

     return 0;

    }
