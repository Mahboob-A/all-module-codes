

    /// Q. 7 -> Write a C program to input elements in array
    ///and search whether an element exists in array or not.



    #include <stdio.h>

    int main() {
        int n, i, input, pos, ar[100]; // declaring necessary keys
        printf("Enter array size: ");
        scanf("%d", &n);

        for (i=0; i<n; i++) {
            scanf("%d", &ar[i]); // reading array
        }
        printf("Input element to search: "); // reading key  element to search
        scanf("%d", &input);

         for (i=0; i<n; i++) {
             if (ar[i] == input) { // logic if ar[i] == inputed vallue
                 pos = ar[i]; // reading the pos of of the value
                 printf("\n%d element found in %d th position\n", input, pos);
                 break;
             }

         }
         if (i==n) { // if index reaches the n i.e array last index then the element not found
             printf ("\nElement not found\n");
         }


        return 0;
    }

