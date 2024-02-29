


        /// B - B 1-2 Overview of DS
        // 030722 03.10 pm


    #include <stdio.h>
    int main () {
        int i, n;
        scanf("%d", &n);

        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int min, max;
        min = 1000;
        max = 0;

        for (i=0; i<n; i++)
        {
            if (max < ar[i])
            {
                max = ar[i];
            }
            if (min < ar[i])
            {
                min = ar[i];
            }
        }

        printf("Max - %d and MIn - %d\n", max, min);

//        for (i=0; i<n-1; i++)
//        {
//            for (j=i+1; j<n; j++)
//            {
//                if (ar[i] < ar[i])
//                {
//                    int tmp = ar[j];
//                    ar[j] = ar[i];
//                    ar[i] = tmp;
//                }
//            }
//        }

    }
