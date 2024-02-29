

    #include <stdio.h>  /// finding distinct number in an array 150522

    int main() {
       int n, i, j;
            int arr[100];
            scanf("%d", &n);
        for (i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }

        for (i=0; i<n; i++) {
        for (j=0; j<i; j++)
            if (arr[i] == arr[j])
                break;

            if (i == j)
                printf ("%d ", arr[i]);
    }

    return 0;

}
