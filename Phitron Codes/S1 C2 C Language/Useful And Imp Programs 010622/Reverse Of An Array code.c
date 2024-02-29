



#include <stdio.h>

         // array reverse  using another  k array index
         // 070622

int main()
{
    int i, n;
    scanf("%d", &n);
    int ar[n], br[n];
    for (i=0; i<n; i++)
    {
        scanf ("%d", &ar[i]);
    }

    int k = 0;
    for (i=n-1; i>=0; i--)
    {
        br[k] = ar[i];
        k++;
    }

    for (i=0; i<n; i++)
    {
        printf ("%d ", br[i]);
    }



    return 0;
}
