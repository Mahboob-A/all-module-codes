


            /// D - D Oggy and tv set Count All limited Negative numbers
            // 290622 3.30 p.m

    /*
    Once Oggy went to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs ai bellars. Some TV sets have a negative price — their owners are ready to pay Oggy if he buys their useless apparatus. Oggy can «buy» any TV sets he wants. Though he's very strong, Oggy can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Oggy find out the maximum sum of money that he can earn.

    Input
    The first line contains two space-separated integers n and m (1 ≤ m ≤ n ≤ 100) — amount of TV sets at the sale, and amount of TV sets that Oggy can carry. The following line contains n space-separated integers ai ( - 1000 ≤ ai ≤ 1000) — prices of the TV sets.

    Output
    Output the only number — the maximum sum of money that Oggy can earn, given that he can carry at most m TV sets.

    Sample 1
    Inputcopy	Outputcopy
    5 3
    -6 0 35 -2 4
    8
    Sample 2
    Inputcopy	Outputcopy
    4 2
    7 0 0 -7
    */


    #include <stdio.h>
    void sort_price (int *ar, int n)    // a function for selection sort
    {
        int i, j;
        for (i=0; i<n-1; i++)
        {
            for (j=i+1; j<n; j++)
            {
                if (ar[j] < ar[i])
                {
                    int tmp = ar[j];
                    ar[j] = ar[i];
                    ar[i] = tmp;
                }
            }
        }
    }
    int main () {
        int i, n, m;
        scanf("%d %d", &n, &m);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }
        sort_price(ar, n);    // calling function

        for (i=0; i<n; i++)    // printing from small to larger
        {
            printf("%d ", ar[i]);
        }
        printf("\n");

        int sum = 0;
        for (i=0; i<m; i++)    // loop not until m ( m is the limit )
        {
            if (ar[i] < 0)    // checking if the element is negative
            {
                sum += ar[i];   // then sum it
            }

        }

        printf("%d\n", -sum);

        return 0;
    }
