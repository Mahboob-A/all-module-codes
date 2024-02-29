
    /// 14-1 Reversing An Array

        #include <stdio.h>
    int main () {
        int n, i;
        scanf("%d", &n);

        int arry[n], arry2[n];
        for (i=0; i<n; i++) {
            scanf("%d", &arry[i]);
        }
        for (i=0; i<n; i++) {
            arry2[n-1-i] = arry[i]; // arry2[i] er index last theke decrease hocche and arry[i} er value bosano hocche
        }
        for (i=0; i<n; i++) {
            printf("Index: %d  Array Value: %d\n", n-1-i, arry2[i]);
        }
        for (i=0; i<n; i++) {  // again copying array2 ulatano value to array1
            arry[i] = arry2[i];
        }

        for (i=0; i<n; i++) { // printing array1 with updated value
            printf("%d ", arry[i]);
        }


    }
