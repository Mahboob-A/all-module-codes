











/*  
===========
YCPC by Phitron | 1st Round : Contest 2 | 2023
===========
060323, Monday 
Time : 07.30 pm 
===========

===========
QS =  A
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



const int MAX_N =1010;
const int MAX_W = 1010;
int weight[MAX_N], value[MAX_N];
int dp[MAX_N][MAX_W];
int n, w;


// knapsack problem 

int kp(int itm, int wt)
{
        if(itm == n)
        {
                return 0;
        }

        if(dp[itm][wt] != -1)
        {
                return dp[itm][wt];
        }

        if(wt < weight[itm])
        {
                return kp(itm + 1, wt);
        }

        dp[itm][wt] = max(kp(itm + 1, wt),  kp(itm + 1, wt - weight[itm]) + value[itm]);
        return dp[itm][wt];
       
}

int main(){

        // FIO 

        cin>>n>>w;
        for(int i=0; i<n; i++)
        {
                cin>>weight[i];
        }
        
        for(int i=0; i<n; i++)
        {
                cin>>value[i];
        }

        memset(dp, -1, sizeof dp);

        cout<<kp(0, w)<<endl;

        return 0;
}



