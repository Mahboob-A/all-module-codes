

// prefix sum 201222, Tuesday, 07.00 pm


     #include <bits/stdc++.h>
     using namespace std;

    void prefixSum(int *arr, int n)
    {
        int pre[n];
        memset(pre, 0, sizeof(pre));
        pre[0] = arr[0];
        for(int i=1; i<n; i++)
            pre[i] = arr[i] + pre[i-1];

        for(int i=0; i<n; i++)
            cout<<pre[i]<<endl;

    }

     int main () {

         int arr[] = {9, 4, 5, 2, 6, 7};
         int n = *(&arr + 1) - arr;
         prefixSum(arr, n);


     return 0;
     }
