
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

            for (int i=0; i<n; i++)
            {
                cin>>ar[i];
            }

            sort(ar, ar+n);
            int count = 0;

            for (int i=1; i<n; i++)
            {
                if (ar[i] > ar[0]) count++;
            }

            cout<<count<<endl;

        }

        return 0;
    }

