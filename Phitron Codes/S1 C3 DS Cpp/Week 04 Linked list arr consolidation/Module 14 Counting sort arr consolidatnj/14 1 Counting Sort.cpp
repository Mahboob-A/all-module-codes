
        // 14-2 COunting Sort Part 1 and Part 2
        /// 14 - 1 and 14 - 2 || 14 - 1 is theory
        // 020822 (tuesday, 10.00 am)

    #include <bits/stdc++.h>
    using namespace std;

     void printArr(int *ar, int size)
    {
        for (int i=0; i<size; i++)
            cout<<ar[i]<<" ";

        cout<<endl;
    }

    int main() {

        int i, n;
        cin>>n;
        int ar[n];
        for (i=0; i<n; i++)
            cin>>ar[i];

        // Step 01 : Finding max element of original array
        int mx = INT_MIN;
        for (i=0; i<n; i++)
        {
            if (mx < ar[i]) mx = ar[i];
        }

        // Step 02: Declaring a count array with [mx+1] size
        int count[mx+1] = {0};

        // Step 03: Counting the frequency of original array
        for (i=0; i<n; i++)
        {
            count[ar[i]]++;
        }

        cout<<"count: ";
        printArr(count, mx+1);

        // Step 04: Finding the Cumulative sum of count array
        for (i=1; i<=mx; i++)
        {
            count[i] += count[i-1];
        }

        cout<<"Cumulative: ";
        printArr(count, mx+1);

        // Step 05: Declaring an final array with [n] size
        int final[n];

        // Step 06: Sorting the array
        for (i=n-1; i>=0; i--)
        {
            count[ar[i]]--;
            int k = count[ar[i]];
            final[k] = ar[i];
        }

        cout<<endl;

        cout<<"Final Sorted: ";
        printArr(final, n);



        return 0;
    }
