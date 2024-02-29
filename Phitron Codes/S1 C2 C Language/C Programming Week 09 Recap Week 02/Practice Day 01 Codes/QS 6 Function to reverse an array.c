


        /// QS 6 Function to reverse an array
        // 150622


    #include <stdio.h>
    void reverse_array (int ar[], int n)
    {
        // using two pointers technique
        for (int i=0, j=n-1; i<j; i++, j--)  // array reversing using in place method
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }


    }
    int main () {
        int i, n;

        scanf("%d", &n);

        int ar[n];

        for(i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        reverse_array(ar, n);

        for (i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }


    }
