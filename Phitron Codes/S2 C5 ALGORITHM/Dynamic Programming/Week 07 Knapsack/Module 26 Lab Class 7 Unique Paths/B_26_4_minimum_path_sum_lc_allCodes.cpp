






/*  
Week 07 : Knapsack 
Module 26: Lab Class 07 
Mod date: 310123, Tuesday
Watch date: 060523, Saturday, 07.00 pm 

26-3: Unique Paths (62 - Leetcode)  || Memoization 
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


// 1. Using dp space || Memoization 

class Solution {
public:

    int dp[205][205];

    int solve(int n, int m, vector<vector<int>>&g)
    {
        if(n == 0 && m == 0)
            return g[0][0];

        if(dp[n][m] != -1)
            return dp[n][m];
        
        int ans = 5000;
        int ans2 = 5000;
        if(n > 0)  
            ans = solve(n - 1, m, g) + g[n][m];
        
        if(m > 0)
            ans2 =  solve(n, m - 1, g) + g[n][m];
        
        dp[n][m] = min(ans, ans2);
        return dp[n][m];
 

    }

    int minPathSum(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();


        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                dp[i][j] = -1;
            }
        }

        
        return solve(n-1, m-1, grid);

    }
};

// 2. Using extra dp space || Tabulation

class Solution {
public:

        /*
        dp week 07 
        lab class 07 
        mod date : 310123, Tuesday
        watch date : 070523, Sunday, 09.00 PM 
        */

    // taking extra dp space 
    int dp[205][205];

    int solve(int n, int m, vector<vector<int>>&g)
    {
        
        dp[0][0] = g[0][0];

        //  calculating the sum of downward sum to dp
        for(int i=1; i<n; i++)
            dp[i][0] = dp[i - 1][0] + g[i][0];
        
        // calculating the sum of rightward sum to dp
        for(int j=1; j<m; j++)
            dp[0][j] = dp[0][j - 1] + g[0][j];
        
        // calculating the whole grid sum 
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                // take the min of rightward and downward + curr            vlaue of grid 
                dp[i][j] = g[i][j] + min(dp[i][j - 1], dp[i - 1][j]);

            }
        }

        return dp[n-1][m-1];

    }

    int minPathSum(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                dp[i][j] = 0;
            }
        }

        
        return solve(n, m, grid);

    }
};



// 3. Without taking any extra space - in O(1) space - modifying the grid matrix itself || Tabulation
class Solution {
public:

        /*
        dp week 07 
        lab class 07 
        mod date : 310123, Tuesday
        watch date : 070523, Sunday, 09.00 PM 
        */

    
    // without taking extra space 

    int solve(int n, int m, vector<vector<int>>&g)
    {

        //  adding the downward sum to the grid 
        for(int i=1; i<n; i++)
            g[i][0] += g[i - 1][0];
        
        // adding the rightward sum in the grid 
        for(int j=1; j<m; j++)
            g[0][j] += g[0][j - 1];
        
        // calculating the whole grid sum 
        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                // adding the minimum of leftward and wirhtward cost to ij'th cell of grid 
            
                g[i][j] += min(g[i][j - 1], g[i - 1][j]);

            }
        }

        return g[n-1][m-1];

    }

    int minPathSum(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        
        return solve(n, m, grid);

    }
};