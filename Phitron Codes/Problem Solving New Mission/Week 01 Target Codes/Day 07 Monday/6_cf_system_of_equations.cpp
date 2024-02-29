








/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 06 : 200223, Monday
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 6 || A. System of Equations || https://codeforces.com/problemset/problem/214/A
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

we will be given n and m, need to find pair of i and j if i and j satisfy this 
conditin : if(i * i + j == n && j * j + i == m).
in this conditin, if it is true, i and j will be a pair, so we have to find out how many 
pair could be generated for the n and m integers 


*/

int main(){


        int n, m;
        cin>>n>>m;

        int count = 0;
        for(int i=0; i<=n; i++)
        {
                for(int j=0; j<=m; j++)
                {
                        // to be a pair, this conditin needs to be true 
                        if(i * i + j == n && j * j + i == m)
                        {
                                count++;
                                // cout<<i<<" "<<j<<endl;
                        }
                }
        }
        

        cout<<count<<endl;


        return 0;
}