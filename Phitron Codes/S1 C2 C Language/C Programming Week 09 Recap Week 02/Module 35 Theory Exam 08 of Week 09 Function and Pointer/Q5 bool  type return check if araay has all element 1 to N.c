



            /// Q5 bool  type return check if araay has all element 1 to N
            // 180622 09.20 a.m

        // code not completed. Please fix the bug.



     /*
    Make a function named check_array() which will take an array
    of integers and the size of that array N. It will return a
    boolean type whether this array has all values from 1 to N or
    not.
    */


     /*
    Make a function named check_array() which will take an array
    of integers and the size of that array N. It will return a
    boolean type whether this array has all values from 1 to N or
    not.
    */



    #include <stdio.h>
    #include <stdbool.h>
    bool check_array (int *ar, int n)
    {
        int  i,  j,  cnt = 0,  idx = 1;
        for (i=0;  i<n;  i++)
        {
            for (j=0; j<n; j++)      // iterate all
            {
                if (ar[j] == idx)      // if idx matches
                {
                    cnt++;            // then count
                    idx++;
                }

            }
        }
        if (cnt == n)        // if cnt is equal to array size as cnt only increased when
            return true;      // all index was found and became 1
        else
            return false;
    }
    int main () {
        int i, n;
        scanf("%d", &n);

        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        bool ans = check_array(ar, n);      // calling function

        if (ans)
            printf("Yes\n");
        else
            printf("No\n");

    return 0;
    }







