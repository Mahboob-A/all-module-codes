








/*  
===========
Codeforces Contest 
===========
020323, Thursday
Time : 08.00 pm 
===========
Div 3 || Round 855
===========
QS =  C 1 easy version 
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(ll i=true; i<y; i++)
#define For(i, y) for(ll i=false; i<=y; i++)
#define pii pair<ll, ll>
#define f first
#define s second
#define vec vector<ll>
#define vecPii vector<pair<ll, ll>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define ll_INF 1e8
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en '\n'
vector<ll>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<ll, vec, greater<ll>>q;


/* ================================================================ */


ll n, val;
// ll arr[n];
// vector<ll>v(n);

void solve()
{
        cin>>n;
        ll ans = 0;
        priority_queue<ll>pq;
        ll arr[n];
        // v.clear();

        for(ll i=0; i<n; i++)
        {
                cin>>arr[i];
        }

        for(ll i=0; i<n; i++)
        {
                if(arr[i] > 0)
                {
                        pq.push(arr[i]);
                }
                if(arr[i] == 0)
                {
                        if(!pq.empty())
                        {
                                ans += pq.top();
                                pq.pop();
                        }
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




