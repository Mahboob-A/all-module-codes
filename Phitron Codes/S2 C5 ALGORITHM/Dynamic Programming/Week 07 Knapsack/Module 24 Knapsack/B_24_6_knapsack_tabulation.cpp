



/*  
Week 07 : Knapsack 
Module 24: Knapsack
Mod date: 280123, Satuerday
Watch date: 010523, Monday, 09.00 pm 

24-6: Coding with Tabulation
*/


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define ll long long 
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9 
const int N = 1e5+100;
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;

const int MaxItems = 102;
const int MaxBagWeight = 1e5 + 5;

int val[MaxItems], wt[MaxItems];

ll dp[MaxItems][MaxBagWeight];




int main(){

        int n, w;
        cin>>n>>w;
        
        

        for(int i=1; i<=n; i++)
        {
                cin>>wt[i]>>val[i];
        }
        
        // 1. Base case 
        for(int i=0; i<=n; i++)
        {
                dp[0][i] = 0;
        }

        // 2. Loop over the states 
        for(int i=1; i<=n; i++)
        {
                for(int cap=0; cap<=w; cap++)
                {
                        // 2.1 Corner case : if cap is less than current item, then skip this item 
                        if(cap < wt[i])
                        {
                                dp[i][cap] = dp[i - 1][cap];
                        }
                        // 2.2 Calculate the result form the smaller sub-problems 
                        else 
                        {
                                dp[i][cap] = max( 

                                        val[i]  +  dp[i - 1][cap  -  wt[i]] , 
                                        dp[i][cap] 
                                );
                        }
                }
        }

        cout<<dp[n][w]<<endl;

        return 0;
}



