


        /// C - C 34-3 Array Remove at any Position

    #include <stdio.h>

    void array_delete (int ar[], int n, int pos)
    {
        for (int i=pos+1; i<n; i++) // i<n is the last index as i<n is less than n element i.e as in i=n-1
        {
            ar[i-1] = ar[i]; // present value is being copied to previous value
        }
    }

    int main () {
         int i, n, pos;
         printf("Enter array length: ");
         scanf("%d", &n); // enter array length

         int ar[100] = {0};

         printf("Enter array elements: ");
         for (i=0; i<n; i++)
         {
             scanf("%d", &ar[i]);
         }

         printf("Enter position to delete: ");
         scanf("%d", &pos);  // enter the position to delete

         array_delete(ar, n, pos);

         for (i=0; i<n-1; i++)
         {
             printf("%d ", ar[i]);
         }
    }
