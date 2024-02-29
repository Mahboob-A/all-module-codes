


                /// 1 Kth min and max element

        // 220822, monday, 10.30 am



    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int i, n, k;
        cin>>n>>k;
        int arr[n];

        for (i=0; i<n; i++)
            cin>>arr[i];


        sort(arr, arr+n);
        for (i=0; i<n; i++)
            cout<<arr[i]<< " ";

        cout<<endl<<arr[k-1]<<" "<<arr[n-k];













        return 0;
    }
