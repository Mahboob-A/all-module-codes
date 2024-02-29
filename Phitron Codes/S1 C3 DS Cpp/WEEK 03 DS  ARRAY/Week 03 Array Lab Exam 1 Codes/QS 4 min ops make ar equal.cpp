
    #include <bits/stdc++.h>
    using namespace std;


    int main() {
        int T;
        cin>>T;

        while(T--)
        {
            int n;
            cin>>n;
            int ar[n];
            int freq[1001];
            memset(freq, 0, sizeof(freq));
            for (int i=0; i<n; i++)
            {
                cin>>ar[i];
            }

            int mx = 0;
            for (int i=0; i<n; i++)
            {
               int val = ar[i];
               freq[val]++;
               mx = max(mx, freq[val]);
            }

            int res = n - mx;

            cout<<res<<endl;
        }

        return 0;
    }

