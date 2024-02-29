   #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int t;
        cin>>t;
        while(t--)
        {
            int charge, x, ans;
            cin>>charge;
            if (charge < 60)
            {
                x = 60 - charge;
                ans = x + 40 + 60;
            }
            else if (charge >= 60 && charge < 80)
            {
                x = 80 - charge;
                ans = (x*2)+60;
            }
            else
            {
                x = 100 - charge;
                ans = x * 3;
            }

            cout<<ans<<" minutes"<<endl;
        }


        return 0;
    }
