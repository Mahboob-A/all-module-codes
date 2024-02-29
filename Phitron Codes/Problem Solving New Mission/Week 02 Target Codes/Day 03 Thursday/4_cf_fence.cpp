








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
QS = 4 || B. Fence || https://codeforces.com/problemset/problem/363/B
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



const int N = 2e5;
int height[N];

int main(){

        FIO 
        
        int n, k;
        cin>>n>>k;

        int concequitive_height = 0, indx = 1;

        for(int i=1; i<=n; i++)
                cin>>height[i];
        int sum = 0;
        for(int i=1; i<=k; i++)
        {
                sum += height[i];
        }

        concequitive_height = sum;

        for(int i=k+1; i<=n; i++)
        {
                sum += height[i];
                sum -= height[i - k];
                if(concequitive_height > sum)
                {
                        concequitive_height = sum;
                        indx = i - k + 1;
                }
        }

        // cout<<concequitive_height<<endl;
        cout<<indx<<endl;



        return 0;
}



























