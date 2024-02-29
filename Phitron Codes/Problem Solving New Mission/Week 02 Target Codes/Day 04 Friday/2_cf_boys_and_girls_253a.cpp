



/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 04 : 240223, Friday
Time : 11.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 2 || A. Boys and Girls || https://codeforces.com/problemset/problem/253/A
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

n and m is given. we have to print n times B and m times G but in alternate order. 
if any of the n or m is ended, then the rest should be printed consequitively as the last. 
if n = 4 and m = 2, then BGBGBB shold be printed.

if n is greater, then begin with B, else begin with G 


*/

int main(){

	// FIO 

        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

        int n, m;
        cin>>n>>m;

        string ans = "";
        if(n > m)
        {
                for(int i=0; i<m; i++)
                {
                        ans += "BG";
                }

                for(int i=0; i<n-m; i++)
                {
                        ans += 'B';
                }
        }
        else if(m > n)
        {
                for(int i=0; i<n; i++)
                {
                        ans += "GB";
                }

                for(int i=0; i<m-n; i++)
                {
                        ans += 'G';
                }
        }
        else   // if equal 
        {
                for(int i=0; i<n; i++)
                {
                        ans += "BG";
                }
        }
        
        cout<<ans<<endl;


        
        return 0;
}