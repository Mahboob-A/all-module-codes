
/*  
Week 07 : Knapsack 
Module 24: Knapsack
Mod date: 280123, Satuerday
Watch date: 010523, Monday, 07.00 pm 

24-5: Coding with Memoization
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


ll knapsack(int n, int cap)
{
        // 1. base case : if n i.e there are no items to pick, then the max profit could be 0, so return 0
        if(n == 0)
                return 0;

        // 2. If the result is already calculated, then return the ans 
        if(dp[n][cap] != -1)
        {
                return dp[n][cap];
        }

        // 3. Corner Case : If the current max capacity of the bag is less than the weight of the current item n, then skip this item as we can not take it 
        // if current bag capacity is less than the weight of the current item, we can't take it. 
        // skip this item and put the existing bag profit in this items index 
        if(cap < wt[n])
        {
                ll ans = knapsack(n-1, cap);
                dp[n][cap] = ans;
                return ans;
        } 

        // 4. Calculate the result from the smaller sub-problems 
        // ans1 = take the current item : take its value and substract its weight from the current bag capacity
        // ans2 = don't take the current item : skip the current item and take the existing bag total profit 
        // ans = take the maximum of taking item and not taking the item 
        ll ans1 = val[n] + knapsack(n-1, cap - wt[n]);
        ll ans2 = knapsack(n-1, cap);
        ll ans = max(ans1, ans2);

        dp[n][cap] = ans;
        return ans;

        // dp[n][cap] = max(val[n] + knapsack(n-1, cap - wt[n]), knapsack(n-1, cap));
        // return dp[n][cap];

}


int main(){

        int n, w;
        cin>>n>>w;

        for(int i=1; i<=n; i++)
        {
                cin>>wt[i]>>val[i];  
        }
        
        for(int i=0; i<=n; i++)
        {
                for(int j=0; j<=w; j++)
                {
                        dp[i][j] = -1;
                }
        }

        

        // cout << knapsack(n, w)<<endl;
        ll ans = knapsack(n, w);
        cout<<ans<<endl;

        return 0;
}



