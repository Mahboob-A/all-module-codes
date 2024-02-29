

   /// swap two index of an array 040622



    #include <stdio.h>
    void swap (int idxfst, int idxsnd, int n, int ar[])
    {
        for (int i=0; i<n; i++)
        {
            int temp = ar[idxfst];
            ar[idxfst] = ar[idxsnd];
            ar[idxsnd] = temp;

        }
        for (int i=0; i<n; i++)
        {
            printf ("%d ", ar[i]);
        }
    }
    int main() {
        int n;
        scanf ("%d", &n);
        int ar[n];
        for (int i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }
        int fst, snd;   // which index number to swap
        scanf ("%d %d", &fst, &snd);

        swap(fst, snd, n, ar);
    }

