










/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 07 : 060323, Monday 
Time : 10.30 am 
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  05  ||   A. Roma and Lucky Numbers || https://codeforces.com/problemset/problem/262/A
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

/*  
Understanding: 


*/



int fetch_ans(int v)
{
        int ans = 0;
        while(v)
        {
                if(v % 10 == 4 || v % 10 == 7)
                {
                        ans++;
                }
                v /= 10;
        }
        return ans;
}


int main(){

        // FIO

        int n, k, val, ans = 0;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
                cin>>val;
                if(fetch_ans(val) <= k)
                {
                        ans++;
                }
        }

        cout<<ans<<en;

        return 0;
}




