






/*  
Week 07 : Knapsack 
Module 25: Knapsack Variation 
Mod date: 290123, Sunday
Watch date: 040523, thursday, 06.00 pm 

25-3: Subset Sub Code || Memoization 
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


/*

- dp state : fun(n, target) -> returns 1 if it is possible to create a subset from 1 to n and form the sum "target"

- dp recurrence relation : fun(n, target) -> fun(n-1, target) or fun(n-1, target - nums[n])

- corner case : if(target < nums[n]) -> fun(n-1, target) 

- base case : fun(0, target_X) -> return 1 if n == 0 && target is also == 0 else return 0. 

*/

const int MaxN= 102;
const int MaxTarget = 1e5 + 5;

int  nums[MaxN];

int dp[MaxN][MaxTarget];


int subset_sum(int n, int target)
{
        // 1. Base Case 
        if(n == 0 )
        {
                if(target == 0) 
                {
                        return 1;
                }
                else 
                {
                        return 0;
                }
        }

        //  if(n == 0 ) && target == 0) return 1;
        // if(n == 0 && target > 0) return 0;

        // corner case : if target is less than the n'th number, then skip this number. 
        if(target < nums[n])
        {
                int ans = subset_sum(n-1, target);
                dp[n][target] = ans;
                return ans;
        }

        // 2. if anwer is already calculated, return the answer 
        if(dp[n][target] != -1) return dp[n][target];


        //  3. calculate the problme form smaller sub-problems 
        int ans1 = subset_sum(n-1, target);
        // same above corner case || we can directly handle the corner case without calling it seperately like below 
        // if(target < nums[n])
        // {
        //         dp[n][target] = ans1;
        //         return ans1;
        // }

        // as target < nums[n] is handled, this below code automatically execute if target >= nums[n] conditions 
        int ans2 = subset_sum(n-1, target - nums[n]);

        int ans = ans1 or ans2;   // whichever is true 

        dp[n][target] = ans;
        return ans;
                

} 

/*
6 36
3 34 4 12 5 2

*/

int main(){

        int n, target;
        cin>>n>>target;

        
        for(int i=1; i<=n; i++)
        {
                cin>>nums[i];
        }

        for(int i=0; i<=n; i++)
        {
                for(int j=0; j<=target; j++)
                {
                        dp[i][j] = -1;
                }
        }

        cout << subset_sum(n, target) << endl;





        return 0;

}