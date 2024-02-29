



#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    int i=0,j=s.size()-1;
    bool cnt=false,done=false,ans=true;
    while(i<j)
    {
        if(s[i] != s[j])
        {
            if(done)
            {
                ans=false;
            }
            else
            {
                cnt=true;
            }
        }
        else if(cnt)
        {
            done=true;
        }
        i++;
        j--;
    }
    if(ans) 
        cout<<"yes\n";
    else 
        cout<<"no\n";
}

/*  

3
4
1001
5
10010
7
0111011

*/
int main() {
        int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
