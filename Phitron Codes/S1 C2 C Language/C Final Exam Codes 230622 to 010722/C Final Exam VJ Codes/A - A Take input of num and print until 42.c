


            /// A - A Take input of num and print until 42
            // 290622 1.00 p.m
/*
Take integer value as input and output that value until you get 42. The integer value will be less than 100

Example
Input:
1
2
88
42
99

Output:
1
2
88
*/
            /// accepted

    #include <stdio.h>
    int main () {
        int i;
        i = 0;
        while (1)
        {
            int ar[100];
            scanf("%d", &ar[i]);
            if (ar[i]==42)
            {
                break;
            }
            printf("%d\n", ar[i]);

        }
        return 0;

    }


    /*
    #include <stdio.h>
    int main()
    {
        int i, n;
        scanf("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        for (i=0; i<n; i++)
        {
            if (ar[i] == 42)
            {
                return 0;
            }
            printf("%d\n", ar[i]);

        }

        return 0;
    }
    */
