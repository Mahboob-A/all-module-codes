

        /// No 2 Find Duplicate Element In An Array

    #include <stdio.h>
    int main () {
       int i, j, n;
       printf("Enter array size, enter array element, put duplicate element and find it: ");
       scanf("%d", &n);
       int ar[100] = {0};
       for (i=0; i<n; i++)
       {
           scanf("%d", &ar[i]);
       }

        int c = 0;
       for (i=0; i<n; i++)
       {
           for (j=i+1; j<n; j++)
           {
               if (ar[i] == ar[j])
               {
                   printf("Duplicate: %d\n", ar[j]);
                   c = 1;
                   break;
               }
           }

       }
       if (c == 0)
       {
           printf("No Duplicate found");

       }

    }
