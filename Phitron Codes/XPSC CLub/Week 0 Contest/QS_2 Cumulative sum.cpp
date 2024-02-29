



    // cumulative sum
    // 201022, 05.00 pm
    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        int n;
        cin>>n;
        int arr[n];
        int pre[n];

        for(int i=0; i<n; i++)
            cin>>arr[i];

        pre[0] = arr[0];
        for(int i=1; i<n; i++)
            pre[i] = arr[i] + pre[i-1];

        int q;
        cin>>q;
        while(q--)
        {
            int i, j;
            cin>>i>>j;
            if(i==0)
                cout<<pre[j]<<endl;
            else
                cout<<pre[j] - pre[i-1]<<endl;
        }

        return 0;
    }
