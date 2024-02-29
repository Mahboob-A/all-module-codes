






/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 04 : 030323, Friday
Time : 05.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  01   ||   A. Vitaly and Night  ||  https://codeforces.com/problemset/problem/595/A
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

just a simple problem. if the adjacent values both are 0 then ans is unaffected, 
and if any of the values are 1 then answer is incremented, i.e the window is open. 

*/






int main(){

        // FIO 

        int n, m, x, y, ans = 0;
        cin>>n>>m;

        for(int i=0; i<n; i++)
        {
                for(int j=0; j<m; j++)
                {       
                        cin>>x>>y;
                        if(x == 1 || y == 1)
                        {
                                ans++;
                        }
                }
        }

        cout<<ans<<en;


        return 0;
}




