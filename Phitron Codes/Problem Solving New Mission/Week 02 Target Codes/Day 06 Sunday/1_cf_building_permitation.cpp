






/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 06 : 260223, Sunday
Time : 07.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 1 || C. Building Permutation || https://codeforces.com/problemset/problem/285/C
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=0; i<y; i++)
// #define For(y) for(int i=1; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=0; i<y; i++)
#define For(i, y) for(int i=1; i<=y; i++)
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 
we just need this number of changes after sorting the array 
for(int i=1; i<=n; i++)
        {
                ans += abs(v[i] - i);
        }


*/

const int N = 4e5;


int main(){

        FIO 
        
        ll n;
        cin>>n;
        ll v[n+1];

        ll ans = 0;
        for(int i=1; i<=n; i++)
        {
                cin>>v[i];
        }

        sort(v + 1, v + n + 1 );

        // for(int i=1; i<=n; i++)
        // {
        //         cout<<v[i]<<" ";
        // }

        for(ll i=1; i<=n; i++)
        {
                ans += abs(v[i] - i);
        }

        // cout<<endl;
        cout<<ans<<endl;

        return 0;
}





