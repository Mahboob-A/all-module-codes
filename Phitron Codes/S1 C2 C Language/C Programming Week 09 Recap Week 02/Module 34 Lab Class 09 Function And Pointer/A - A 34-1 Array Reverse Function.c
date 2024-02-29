


        /// A - A 34-1 Array Reverse Function
        // 150622, 11.58 pm.


    #include <stdio.h>
    void rev_array (int *ar, int n) // int *ar is same as int ar[]
    {
        int i=0, j=n-1;
        while(i<j)
        {
            int tmp = ar[i];
            ar[i] = ar[j];
            ar[j] = tmp;

            i++;
            j--;
        }
    }
    int main () {
        int i, n;
        scanf("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        rev_array(ar, n);


        for (i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }
    }


    // same code in for loop

    /*

                // make a function to reverse an array

    #include <stdio.h>
    void arr_rev (int *ar, int n)
    {
        for (int i=0, j=n-1; i<j; i++, j--)
        {
            int tmp = ar[i];
            ar[i] = ar[j];
            ar[j] = tmp;
        }
    }

    int main() {
        int i, n;
        scanf("%d", &n);

        int ar[100] = {0};

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        arr_rev (ar, n);

        for (i=0; i<n; i++)
            printf("%d ", ar[i]);

    }

    */
