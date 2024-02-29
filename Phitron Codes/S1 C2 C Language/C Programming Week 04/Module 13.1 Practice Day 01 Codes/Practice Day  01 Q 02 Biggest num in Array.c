/**

Write a C program to read elements in an array and find the maximum of array elements. Also find how many times the maximum occurs.
Example Input
Input elements: 10, 20, 50, 40, 50, 30, 40
Output
Maximum is 50
Maximum occurs 2 times


**/


    #include <stdio.h>
    int main () {

        int ar[100 ], i, max,  n;

        printf("Enter size of array: ");
        scanf("%d", &n);

        for (i=0; i<n; i++) {
            scanf("%d", &ar[i]);
        }
        int count=0;
        max = ar[0];
        for (i=0; i<n; i++) {
            if (ar[i]>max) {

                max = ar[i];
            }

        }
        for (i=0; i<n; i++) {
             if (ar[i]==max) {

                count++;
            }
        }
        printf("Max is: %d Max Count: %d", max, count);

        return 0;

    }
