


        /// B - B 34-2 Array Insert at any Position
        // 150622 12.52 pm

        // code has bug. please fix

    #include <stdio.h>
    void insert_ar (int ar[], int n, int pos, int val)
    {
        for (int i=n-2; i>=pos; i--)
        {
            ar[i+1] = ar[i];
        }
        ar[pos] = val;
    }

    int main () {
       int i, n;
       scanf("%d", &n);
       int pos, val; // position to insert and value to insert
       scanf("%d %d", &pos, &val);

       int ar[100] = {0};
       for (i=0; i<n; i++)
       {
           scanf("%d", &ar[i]);
       }

       insert_ar(ar, n, pos, val);

       for (i=0; i<n+1; i++)
       {
           printf("%d ", ar[i]);
       }
    }
