

        /// second largest element in an array

    #include <stdio.h>
    int find2ndMax (int n, int ar[])
    {
        int i, max, max2;
        max = max2 = ar[0];

        for (i=0; i<n; i++)
        {
            if (ar[i] > max)  /*
                                If current element is greater than first
                                then update both first and second
                                */
            {
                max2 = max;
                max = ar[i];
            }
            else if (ar[i] > max2 && ar[i] != max)
                                                    /* If arr[i] is in between first and
                                                    second then update second  */
            {
                max2 = ar[i];
            }
        }
        return max2;
    }

    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        int max2 = find2ndMax (n, ar);
        printf("%d", max2);
    }
