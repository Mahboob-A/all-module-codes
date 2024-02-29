





/*  
Week 07 : Knapsack 
Module 25: Knapsack Variation 
Mod date: 290123, Sunday
Watch date: 040523, Thursday, 07.00 pm 

25-3: Subset Sub Code || Tabulation 
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
vector<int>v_ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
// int n, m;


/*

- dp state : fun(n, target) -> returns 1 if it is possible to create a subset from 1 to n and form the sum "target"

- dp recurrence relation : fun(n, target) -> fun(n-1, target) or fun(n-1, target - nums[n])

- corner case : if(target < nums[n]) -> fun(n-1, target) 

- base case : fun(0, target_X) -> return 1 if n == 0 && target is also == 0 else return 0. 

*/

const int MaxN= 105;
const int MaxTarget = 1e5 + 5;

int  nums[MaxN];

int dp[MaxN][MaxTarget];


/*
6 7
3 34 4 12 5 2

*/

int main(){
                
        int n, m;  // m == target sum 
        cin>>n>>m;

        
        for(int i=1; i<=n; i++)
        {
                cin>>nums[i];
        }

        // 1. base case 
        dp[0][0] = 1;  // ture case 
        for(int i=1; i<=m; i++)   // false cases 
        {
                dp[0][i] = 0;
        }

        // 2. loop over the states 
        for(int i = 1;  i <= n;  i++)
        {
                for(int target = 0; target <= m; target++)   // target loop must begin from 0 as if target is 0 only then the answer exists so begin it from 0
                {
                        // 2.1. Calculate the answer form smaller sub-problems 
                        if(target < nums[i])
                        {
                                int ans = dp[i - 1][target];
                                dp[i][target] = ans;
                        }
                        else 
                        {

                                int ans1 = dp[i - 1][target];
                                int ans2 = dp[i - 1][target - nums[i]];
                                int ans = ans1 || ans2;
                                dp[i][target] = ans;
                        
                        }

                        // int ans1 = dp[i - 1][target];
                        // if(target < nums[i])   // corner case 
                        // {
                        //         dp[i][target] = ans1;
                        // }
                        // else
                        // {
                        //         int ans2 = dp[i - 1][target - nums[i]];
                        //         dp[i][target] = ans1 || ans2;
                        // }


                        /*

                        for (int i = 1; i <= n; i++) 
                        {
                                for (int target = 0; target <= m; target++) 
                                {
                                        if (nums[i] > target) // or. (target < nums[i])
                                        {
                                                dp[i][target] = dp[i-1][target];
                                        } 
                                        else 
                                        {
                                                dp[i][target] = dp[i-1][target] || dp[i-1][target-nums[i]];
                                        }
                                }
                        }

                        */
                }
        }

        cout << dp[n][m] << endl;


        cout<<endl;
        for(int i=0; i<=n; i++)
        {
                cout<<"i = "<<i<<" -> ";
                for(int j=0; j<=m; j++)
                {
                        cout<<"j = "<<j<<" v= ";
                        cout<<dp[i][j]<<" | ";
                }
                cout<<endl;
        }

        return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;

const int MaxN = 105;
const int MaxTarget = 1e5 + 5;

int nums[MaxN];
bool dp[MaxN][MaxTarget];

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    cin >> nums[i];
  }

  // Initialization
  memset(dp, false, sizeof(dp));

  // Base case
  dp[0][0] = true;

  // Loop over states
  for (int i = 1; i <= n; i++) {
    for (int target = 0; target <= m; target++) {
      if (nums[i] > target) {
        dp[i][target] = dp[i-1][target];
      } else {
        dp[i][target] = dp[i-1][target] || dp[i-1][target-nums[i]];
      }
    }
  }

  cout << dp[n][m] << endl;

  return 0;
}

*/