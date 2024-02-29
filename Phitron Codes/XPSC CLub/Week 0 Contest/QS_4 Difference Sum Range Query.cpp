
    // this is a problem of difference sum range query
    // 201022, Thursday, 07.30 pm



    #include <bits/stdc++.h>
    using namespace std;

    int main() {

        int t;
        cin>>t;
        while(t--)
        {
            int n, u;
            cin>>n>>u;
            int arr[n], diff[n+1];
            memset(diff, 0, sizeof(diff));

            while(u--)
            {
                int l, r, val;
                cin>>l>>r>>val;
                diff[l] += val;
                diff[r+1] -= val;
            }
            int save = 0;
            for(int i=0; i<n; i++)
            {
                save += diff[i];
                arr[i] = save;
            }
            int q, i;
            cin>>q;
            while(q--)
            {
                cin>>i;
                cout<<arr[i]<<endl;
            }
        }


        return 0;
    }
