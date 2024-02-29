

        /// A - A I Wanna Be The Guy Game

        // using counter array


    #include <stdio.h>
    int main () {
        int i, n;
        int count[101] = {0};
        scanf("%d", &n);
        int p, q;
        scanf("%d", &p);
        int arr[p];

        for (i=0; i<p; i++)
        {
            scanf("%d", &arr[i]);
            count[arr[i]]++;
        }

        scanf("%d", &q);
        int brr[q];
        for (i=0; i<q; i++)
        {
            scanf("%d", &brr[i]);
            count[brr[i]]++;
        }

        int c = 0;
        for (i=1; i<=n; i++)
        {
            if (count[i] == 0)
            {
                c = 1;
                printf("Oh, my keyboard!");
                return 0;
            }
        }

        if (c == 0)
        {
            printf("I become the guy.");
        }

        return 0;

    }





        /// A - A I Wanna Be The Guy Game

        // code ok but time limit exceed


        /*
    #include <stdio.h>
    int getSorted (void const *a, void const *b)
    {
        return (*(int*)a - *(int*)b);
    }

    int main () {
        int i, j, n, p, q, count = 0;
        scanf("%d", &n);
        scanf("%d", &p);
        int pq[101] = {0};

        for (i=0; i<p; i++)
        {
            scanf("%d", &pq[i]);
        }
        scanf("%d", &q);

        for (i=p; i<(p+q); i++)
        {
            scanf("%d", &pq[i]);
        }

        int sz = sizeof (pq) / sizeof (pq[0]);
        printf("%d\n\n\n", p+q);
        qsort (pq, p+q, sizeof(int), getSorted);

        for (i=0; i<p+q; i++)
        {
            printf("%d ", pq[i]);
        }


        for (i=0; i<(p+q); i++)
        {
            if (pq[i] != pq[i+1])
            {
                count++;
            }
        }


        if (count == n)

            printf("I become the guy.");

        else
            printf("Oh, my keyboard!");

    }

    */
    // frequenvy method

    /*



    #include <stdio.h>
    int main () {
        int i, n, p, q;
        int count[101] = {0};
        scanf("%d", &n);

        scanf("%d", &p);
        for (i=0; i<p; i++)
        {
            int tmp;
            scanf("%d", &tmp);
            count[tmp]++;
        }

        scanf("%d", &q);
        for (i=p; i<q; i++)
        {
            int tmp;
            scanf("%d", &tmp);
            count[tmp]++;
        }


        for (i=1; i<=n; i++)
        {
            printf("%d ", count[i]);
        }
        printf("\n");
        for (i=1; i<=q; i++)
        {
            printf("%d ", count[i]);
        }


        int c = 0;
        for (i=1; i<=n; i++)
        {
            if (count[i] == 0)
            {
                c = 1;
                printf("Oh, my keyboard!");
                break;
            }
        }

        if (c == 0)
             printf("I become the guy.");

    }

    */


    /// using distinct element

    /*




        /// A - A I Wanna Be The Guy Game

    #include <stdio.h>
    int main () {
        int i, n, p, q, count = 0;
        scanf("%d", &n);
        int pq[101] = {0};

        scanf("%d", &p);
        for (i=0; i<p; i++)
        {
            int tmp;
            scanf("%d", &tmp);
            pq[tmp]++;
        }

        scanf("%d", &q);
        for (i=p; i<q; i++)
        {
            int tmp;
            scanf("%d", &tmp);
            pq[tmp]++;
        }

        int sz = sizeof (pq) / sizeof (pq[0]);

        for (int i = 0; i <sz; i++){

        int j = 0;
        // traverse rightwards
        for (j = i+1; j <(p+q); j++)
        {
            // if found duplicated found rightwards in the array
            if (pq[i] == pq[j]){
                break;
            }
        }
        // if traversed till the end of the array no break happenned
        //  thus, this must have been last occurrence of arr[i]
        if (j == (p+q))
            count++;

        }

        if (count == n)
        {
             printf("I become the guy.");
        }
        else
        {
            printf("Oh, my keyboard!");
        }

}



        */

