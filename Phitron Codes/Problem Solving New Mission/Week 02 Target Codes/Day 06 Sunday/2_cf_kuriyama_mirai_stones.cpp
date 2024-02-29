






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
QS = 2 || B. Kuriyama Mirai's Stones || https://codeforces.com/problemset/problem/433/B
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

it is pure prefix sum problem. n and n elements are given, 
m as number of query and l and r as range of sum is given. along with this, 
type is given if type is 1 then we need to print the sum of l to r in non sorted order, 
and if type is 2 then we need to print the sum of sorted order of l and r.

so, just simply prepare prefix sum and take additional container and sort it and prepare 
prefix sum of this and based on type, print the sum. 


*/

const ll N = 1e5 + 100;

ll a[N], b[N];


int main(){

        FIO 
        
        int n;
        cin>>n;

        for(int i=1; i<=n; i++)
        {
                cin>>a[i];
                b[i] = a[i];
        }

        // sorting the other container 
        sort(b + 1, b + n + 1);

        // cacl prefix sum 
        for(int i=1; i<=n; i++) 
        {
                a[i] += a[i - 1];
                b[i] += b[i - 1];
        }

        int m;
        cin>>m;

        // query 
        int type, left, right;
        for(int i=0; i<m; i++)
        {
                cin>>type>>left>>right;
                if(type == 1)
                {
                        cout<<a[right] - a[left - 1]<<"\n";
                }
                else 
                {
                        cout<<b[right] - b[left - 1]<<"\n";
                }
        }



        return 0;
}





