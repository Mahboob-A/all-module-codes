








/*  
===========
Codeforces Contest 
===========
020323, Thursday
Time : 10.20 pm 
===========
Div 3 || Round 855
===========
QS =  D 
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=true; i<y; i++)
#define For(i, y) for(int i=false; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en '\n'
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */



void solve()
{
        int n;
        string s;
        cin>>n>>s;

        int ans = n - 1;

        for(int i=1; i<n-1; i++)
        {
                if(s[i - 1] == s[i + 1])
                {
                        ans--;
                }
        }

        cout<<ans<<en;

}


int main(){

        FIO 

        int t;
        cin>>t;
        while(t--)
        {
                solve();
        }

        return 0;
}



