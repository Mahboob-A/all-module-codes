

    /// method 01 :
    // duto arry declare kore arry er value ultano
/*
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
        for (i=0; i<n; i++) {
            arry[i] = arry2[i];
        }

        for (i=0; i<n; i++) {
            printf("%d ", arry[i]);
        }


    }


*/
    /// method 02:
    // In-place algorithm Method without using second arry
    // same array te value ultano


    #include <stdio.h>
    int main () {
        int n, j;
        scanf("%d", &n);

        int array[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &array[i]);
        }
        for (int i=0, j=n-1; i<j; i++, j--) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;

            for (int i=0; i<n; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
        }

        for (int i=0; i<n; i++) {
            printf("%d ", array[i]);
        }

    }


