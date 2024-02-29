
        /// 20-4 Revision - Array And Functions
/*
    #include <stdio.h>
    int getSum (int n, int *ar)
    {
        int ans = 0;
        for (int i=0; i<n; i++)
        {
            ans += *(ar+i);
        }
        return ans;
    }
    int main () {
        int a[] = {1, 2, 3, 4, 5};
        int sz = sizeof (a) / sizeof (a[0]);
        printf ("%d\n", sz);
        int retsum = getSum (sz, a);
        printf ("sum from function: %d", retsum);

    }

 */
    #include <stdio.h>
    void makeSquares(int n, int ans[])
    {
        for (int i=0; i<n; i++)
        {
            ans[i] = (i+1) * (i+1); ans
        }
        return ans;
    }
    int main () {
        int n = 5;
        int ans[n];

        makeSquares (n, ans);

        for (int i=0; i<n; i++)
        {
            printf ("%d ", ans[i]);
        }

    }
