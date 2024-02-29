











/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 03 : 090323, Thursday
Time :  07.30 am 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =  8    ||  A. Queue on Bus Stops  ||   https://codeforces.com/problemset/problem/435/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=true; i<y; i++)
// #define For(y) for(int i=false; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(y) for(int i=0; i<y; i++)
#define For(y) for(int i=1; i<=y; i++)
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

/*  
Understanding: 


*/




int arr[150], n, m;
void solve()
{
        int ans = 0;
        cin>>n>>m;
        forn(n)
                cin>>arr[i];

        int seat = 0;

        forn(n)
        {
                if(arr[i] > seat)
                {
                        seat = m - arr[i];
                        ans++;
                }
                else
                {
                        seat -= arr[i];
                }
        }

        cout<<ans<<en;
}


int main(){

        FIO 
        int t = 1;
        while(t--)
        {
                solve();
        }



        return 0;
}


 
