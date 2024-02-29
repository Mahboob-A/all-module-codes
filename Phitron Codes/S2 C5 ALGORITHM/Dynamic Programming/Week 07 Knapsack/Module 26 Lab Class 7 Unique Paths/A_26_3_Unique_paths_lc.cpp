


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

int unique_paths(int n, int m)
{
        // 1. Base Case : if the robot is in the starting cell, return 1 as from starting cell there're only one unique path 
        if(n == 0 && m == 0)
                return 1; 

        // 2. if result is already calculated, then return the answer 
        if(dp[n][m] != -1)
        {
                return dp[n][m];
        }

        // 3. Corner Cases : Handle if the robot is in the 0th row or 0th column
        // if robot is in 0th column - so it only can move to down 
        if(n > 0 && m == 0)
        {
                dp[n][m] = unique_paths(n-1, m);
                return dp[n][m];
        }
        
        // if it is in the 0th row, it only can move from left 
        if(m > 0 && n == 0)
        {
                dp[n][m] = unique_paths(n, m-1);
                return dp[n][m];
        }

        // 4. Calculate the answer form the smaller sub-problems 
        int ans = unique_paths(n - 1, m) + unique_paths(n, m-1);
        dp[n][m] = ans;
        return ans;


}

// module func 
int uniquePaths(int n, int m)
{
         // 1. Base Case : if the robot is in the starting cell, return 1 as from starting cell there're only one unique path 
        if(n == 0 && m == 0)
                return 1; 

        // 2. if result is already calculated, then return the answer 
        if(dp[n][m] != -1)
        {
                return dp[n][m];
        }

        // 4. Calculate the answer form the smaller sub-problems 
        // including handing the corner cases 
        int ans = 0;
        if(n > 0)
                ans +=  unique_paths(n - 1, m) ;
        if(m > 0) 
                ans += unique_paths(n, m-1);
        dp[n][m] = ans;
        return ans;
}

int main(){

        int row, col;
        cin>>row>>col;

        for(int i=0; i<=row; i++)
        {
                for(int j=0; j<=col; j++)
                {
                        dp[i][j] = -1;
                }
        }

        // cout << unique_paths(row - 1, col - 1) << endl;   // as the answer seeks unique pahts form (0, 0) to right bottom cell 

        cout << uniquePaths(row - 1 , col - 1) << endl;

        return 0;
}


// Memoization Code 

// LC AC Code : with vector 

/*

class Solution {
public:

    

    int unique_paths(vector<vector<int>>&dp, int n, int m)
    {
        // 1. Base Case : if the robot is in the starting cell, return 1 as from starting cell there're only one unique path 
        if(n == 0 && m == 0)
                return 1; 

        // 2. if result is already calculated, then return the answer 
        if(dp[n][m] != -1)
        {
                return dp[n][m];
        }

        // 3. Corner Cases : Handle if the robot is in the 0th row or 0th column
        // if robot is in 0th column - so it only can move to down 
        if(n >= 0 && m == 0)
        {
                dp[n][m] = unique_paths(dp, n-1, m);
                return dp[n][m];
        }
        
        // if it is in the 0th row, it only can move from left 
        if(m >= 0 && n == 0)
        {
                dp[n][m] = unique_paths(dp, n, m-1);
                return dp[n][m];
        }

        // 4. Calculate the answer form the smaller sub-problems 
        int ans = unique_paths(dp, n - 1, m) + unique_paths(dp, n, m-1);
        dp[n][m] = ans;
        return ans;
    }

    int uniquePaths(int m, int n) {
        
        // for(int i=0; i<=m; i++)
        // {
        //         for(int j=0; j<=n; j++)
        //         {
        //                 dp[i][j] = -1;
        //         }
        // }
        vector<vector<int>>dp(m + 1, vector<int>(n + 1, -1));

        return unique_paths(dp, m-1, n-1);
        
        
    }
};

*/


// with matrix 

/*

class Solution {
public:

        /*
        dp week 07 
        lab class 07 
        mod date : 310123, Tuesday
        watch date : 060523, Saturday
        
    int dp[105][105];

    int unique_paths(int n, int m)
    {
        // 1. Base Case : if the robot is in the starting cell, return 1 as from starting cell there're only one unique path 
        if(n == 0 && m == 0)
                return 1; 

        // 2. if result is already calculated, then return the answer 
        if(dp[n][m] != -1)
        {
                return dp[n][m];
        }

        // 3. Corner Cases : Handle if the robot is in the 0th row or 0th column
        // if robot is in 0th column - so it only can move to down 
        if(n >= 0 && m == 0)
        {
                dp[n][m] = unique_paths(n-1, m);
                return dp[n][m];
        }
        
        // if it is in the 0th row, it only can move from left 
        if(m >= 0 && n == 0)
        {
                dp[n][m] = unique_paths(n, m-1);
                return dp[n][m];
        }

        // 4. Calculate the answer form the smaller sub-problems 
        int ans = unique_paths(n - 1, m) + unique_paths(n, m-1);
        dp[n][m] = ans;
        return ans;
    }

    int uniquePaths(int m, int n) {
        
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        dp[i][j] = -1;
                }
        }

        return unique_paths(m-1, n-1);
        
        
    }
};

*/