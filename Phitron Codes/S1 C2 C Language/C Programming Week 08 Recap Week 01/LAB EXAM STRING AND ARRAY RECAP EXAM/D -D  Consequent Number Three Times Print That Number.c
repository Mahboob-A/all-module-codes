

        /// D -D  Consequent Number Three Times Print That Number


    #include <stdio.h>
    #include <string.h>
    int main () {
        int i, t, n;
        scanf("%d", &t); // reading test number



        while(t--)
        {
            scanf("%d", &n); // reading array size
            int arr[n];
            int freq[n];
            for (i=1; i<=n; i++) // assinging 0 to freq
            {
                freq[i] = 0;
            }


            for (i=0; i<n; i++) // reading array
            {
                scanf("%d", &arr[i]);
            }

            for (i=0; i<n; i++) // counting value of array
            {
                int val = arr[i];
                freq[val]++;
            }

            int indx = 0, count = 0;
            for (i=1; i<=n; i++)   // checking freq array
            {
                if (freq[i] >= 3)
                {
                    indx = i; // if a value has >= 3 times then copy the index num in indx variable
                    count++;  // if a value has >= 3 times only then count
                }

            }
            if (count>0) // if the count >0
            {
                printf("%d\n", indx); // then print that value as it is stored in indx var
            }
            else
            {
                printf("-1\n"); // else print as directed
            }

        }
        return 0;

    }

