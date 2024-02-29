

// /*  
// Week 07 : Knapsack 
// Module 24: Knapsack
// Mod date: 280123, Satuerday
// Watch date: 010523, Monday, 07.00 pm 

// 24-5: Coding with Memoization
// */

// #include <bits/stdc++.h>
// using namespace std;

// #define pii pair<int, int>
// #define ll long long 
// #define f first
// #define s second
// #define vec vector<int>
// #define vecPii vector<pair<int, int>> 
// #define pb push_back 
// #define ppb pop_back 
// #define DOUBLE_INF 1e18 
// #define INT_INF 1e9 
// const int N = 1e5+100;
// vector<int>ans;
// vector<pii>allSrc;
// pii src, destination;
// //priority_queue<pii, vecPii, greater<pii>>q;
// vecPii adjList[N];
// int visited[N];
// int parent[N];
// int dist[N];
// const int MaxItems = 102;
// const int MaxBagWeight = 1e5 + 5;
// int val[MaxItems], wt[MaxItems];
// ll dp[MaxItems][MaxBagWeight];

// ll knapsack(int n, int cap) {
//     // 1. base case : if n i.e there are no items to pick, then the max profit could be 0, so return 0
//     if(n == 0)
//         return 0;

//     // 2. If the result is already calculated, then return the ans 
//     if(dp[n][cap] != -1) {
//         return dp[n][cap];
//     }

//     // 3. Corner Case : If the current max capacity of the bag is less than the weight of the current item n, then skip this item as we can not take it 
//     // if current bag capacity is less than the weight of the current item, we can't take it. 
//     // skip this item and put the existing bag profit in this items index 
//     if(cap < wt[n]) {
//         dp[n][cap] = knapsack(n-1, cap);
//         return dp[n][cap];
//     } 

//     // 4. Calculate the result from the smaller sub-problems 
//     // ans1 = take the current item : take its value and substract its weight from the current bag capacity
//     // ans2 = don't take the current item : skip the current item and take the existing bag total profit 
//     // ans = take the maximum of taking item and not taking the item 

//     dp[n][cap] = max(val[n] + knapsack(n-1, cap - wt[n]), knapsack(n-1, cap));
//     return dp[n][cap];


// }

// int main() {
//     int n, cap;
//     cin >> n >> cap;

//     for(int i=1; i<=n; i++) {
//         cin >> wt[i] >> val[i];
//     }

//     memset(dp, -1, sizeof(dp));

//     cout << knapsack(n, cap) <<endl;
//     //     cout << ans << endl;

//     return 0;
// }





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

ll val[MaxItems], wt[MaxItems];

ll dp[MaxItems][MaxBagWeight];




int main(){

        ll n, w;
        cin>>n>>w;
        
        

        for(ll i=1; i<=n; i++)
        {
                cin>>wt[i]>>val[i];
        }
        
        // 1. Base case 
        for(ll i=0; i<=n; i++)
        {
                dp[0][i] = 0;
        }

        // 2. Loop over the states 
        for(ll i=1; i<=n; i++)
        {
                for(ll cap=0; cap<=w; cap++)
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



