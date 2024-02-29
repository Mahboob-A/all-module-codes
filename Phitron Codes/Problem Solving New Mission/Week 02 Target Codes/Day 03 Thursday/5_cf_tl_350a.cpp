








/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 10.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 5 || A. TL || https://codeforces.com/problemset/problem/350/A
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 



*/

const int N = 110;

vector<int>a;
vector<int>b;

int main(){

        FIO 


        int n, m;
        cin>>n>>m;

        for(int i=0; i<n; i++)
        {
                int x;
                cin>>x;
                a.pb(x);
        }
        for(int i=0; i<m; i++)
        {
                int x;
                cin>>x;
                b.pb(x);
        }

        int a_mx = *max_element(a.begin(), a.end());
        int a_mn = *min_element(a.begin(), a.end());

        int b_mn = *min_element(b.begin(), b.end());

        // cout<<a_mn<<" "<<a_mx<<" "<<b_mn<<endl;


        int res = max(2 * a_mn, a_mx);
        if(  res <  b_mn)
        {
                cout<<res<<endl;
        }      
        else 
        {
                cout<<-1<<endl;
        }




        return 0;
}