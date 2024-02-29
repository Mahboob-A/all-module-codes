

        /// C- 22.3 - Implementing Selection Sort



    void seSort (int n, int ar[])
    {
        for (int i=0; i<n-1; i++)
        {
            int min = i;
            for (int j=i+1; j<n; j++)
            {
                if (ar[j] < ar[i])
                min = j;
            }
            if (min != i)
                swap(ar[i], ar[min]);

        }
    }
    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        seSort (n, ar);
    }
