/**


Write a C program to read elements in an array and find the sum of array elements.
Example Input
Input elements: 10, 20, 30, 40, 50
Output
Sum of all elements = 150


**/

    #include <stdio.h>
    #include <string.h>
    int main ()
    int arry[100] = {0};


    int i, n, sum = 0;

        printf("\n\n***Array Data Sum Calculator***\n");
        printf("Enter the number of elements to calculate: ");
        scanf("%d", &n);


        printf("Enter %d number of elements: \n", n);
        for (i=0; i<n; i++) {
            printf("Enter %d element: ", i+1);
            scanf("%d", &arry[i]);
        }
        for (i=0; i<n; i++) {
            sum+=arry[i];
        }
        //for (int i=0; i<5; i++) {
            printf("\nThe sum of the total inputed data in the array is: %d\n", sum);
        //}
    }
