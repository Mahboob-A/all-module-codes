



/*  
Week 07 : Knapsack 
Module 26: Lab Class 07 
Mod date: 310123, Tuesday
Watch date: 060523, Saturday, 07.00 pm 

26-3: Unique Paths (62 - Leetcode)  || Tabulation 
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


const int M = 105;

int dp[M][M];

int solve(int row, int col)
{
        dp[0][0] = 1;
        for(int i=0; i<=row; i++)
        {
                for(int j=0; j<=col; j++)
                {       
                        // 2.1 : corner case 
                        if(i == 0 && j == 0)
                                continue;
                        
                        // dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                        // cout << "i : "<<i<<" "<<" j : "<<j<<endl;
                        // cout<<i<<j<<" "<<i - 1<<" "<<dp[i - 1][j]<<endl;
                        
                        int ans = 0;
                        if (i > 0)
                                ans += dp[i - 1][j];
                        if (j > 0)
                                ans += dp[i][j - 1];
                        
                        dp[i][j] = ans;

                }
        }

        return dp[row][col];

}

int leetcode_test(int n, int m)
{
                
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<m; j++)
                {
                        dp[i][j] = 0;
                }
        }
        // vector<vector<int>>dp(m + 1, vector<int>(n + 1, -1));

        return solve(n-1, m-1);
                
}


int main(){

        int row, col;
        cin>>row>>col;

        int func_ans = leetcode_test(row, col);
        cout << func_ans << endl;

        // tabulation code below : 
        // // 1. Base Case 
        // dp[0][0] = 1;

        // // 2. Loop over the states 
        // // for(int i=0; i<row; i++)
        // // {
                
        // //         for(int j=0; j<col; j++)
        // //         {       
        // //                 // 2.1 : corner case 
        // //                 if(i == 0 && j == 0)
        // //                         continue;
                        
        // //                 dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

        // //         }
        // // }

        // for(int i=0; i<row; i++)
        // {
        //         for(int j=0; j<col; j++)
        //         {       
        //                 // 2.1 : corner case 
        //                 if(i == 0 && j == 0)
        //                         continue;
                        
        //                 // dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        //                 // cout << "i : "<<i<<" "<<" j : "<<j<<endl;
        //                 // cout<<i<<j<<" "<<i - 1<<" "<<dp[i - 1][j]<<endl;
                        
        //                 int ans = 0;
        //                 if (i > 0)
        //                         ans += dp[i - 1][j];
        //                 if (j > 0)
        //                         ans += dp[i][j - 1];
                        
        //                 dp[i][j] = ans;

        //         }
        // }

        // // cout << dp[-1][1]<<endl;
        // // cout << dp[1][-1] << endl;

        // cout << dp[row - 1][col - 1] << endl;
        

        return 0;
}


