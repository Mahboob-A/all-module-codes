

/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 05 : 250223, Saturday
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 3 || A. Cut Ribbon || https://codeforces.com/problemset/problem/189/A
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

int main(){

        FIO 
        
        int n, a, b, c;
        cin>>n>>a>>b>>c;
        int dp[n+1];

        dp[0] = 0;

        int x, y, z;
        for(int i=1; i<=n; i++)
        {
                x = INT_MIN, y = INT_MIN, z = INT_MIN;
                if(i >= a) x = dp[i - a] + 1;
                if(i >= b) y = dp[i - b] + 1;
                if(i >= c) z = dp[i - c] + 1;

                dp[i] = max({x, y, z}) ;
        }
        
        cout<<dp[n]<<endl;



        return 0;
}




