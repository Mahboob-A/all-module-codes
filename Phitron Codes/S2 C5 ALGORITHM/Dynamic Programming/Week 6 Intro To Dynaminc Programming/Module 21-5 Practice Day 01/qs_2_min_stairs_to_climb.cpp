

/*  
Week 06 : Intro to dp 
Module 21.5 : practice day 01 
mod date : 230123, Monday. 
practice date : 140223, tuesday, 07.00 am 
current module : week 09 - lab class 09 


Question link: https://docs.google.com/document/d/1crH0BkdvYCbdzxIgJhggq_mpNQKVrZyEDDqZ1joHg7U/edit#
question 01: 

You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

 

Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.
Example 2:

Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.
 

Constraints:

2 <= cost.length <= 1000
0 <= cost[i] <= 999

What is the time and space complexity of your code?

*/

// best approach https://leetcode.com/problems/min-cost-climbing-stairs/solutions/476388/4-ways-step-by-step-from-recursion-top-down-dp-bottom-up-dp-fine-tuning/
// dp good resource : https://leetcode.com/problems/min-cost-climbing-stairs/solutions/773865/A-Beginner's-Guide-on-DP-validation-and-How-to-come-up-with-a-Recursive-solution-Python-3/


// my sol 01 : tabulation 

class Solution {
public:


    // int solve(vector<int>&cost, int n, vector<int>&dp)
    // {
    //     if(n==0)
    //     {
    //         return cost[n];
    //     }

    //     if(n==1)
    //     {
    //         return cost[n];
    //     }

    //     if(dp[n] != 0)
    //     {
    //         return dp[n];
    //     }

    //     int ans1 = solve(cost, n-1, dp) + cost[n];
    //     int ans2 = solve(cost, n-2, dp) + cost[n];

    //     dp[n] = min(ans1, ans2);

    //     return dp[n];

    // }


    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int>dp(n, 0);
        // return solve(cost, n, dp);

        dp[0] = cost[0];
        dp[1] = cost[1];
        // cost[n] = 0;
        for(int i=2; i<n; i++)
        {
            // int ans1 = cost[i-1] + cost[i];
            // int ans2 = cost[i-2] + cost[i];
    
            dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
        }

        return min(dp[n-1], dp[n-2]);
    }
};

// my sol 2 : tabulation 2 


class Solution {
public:


    int solve(vector<int>&cost, int n, vector<int>&dp)
    {
        if(n==0)
        {
            return cost[n];
        }

        if(n==1)
        {
            return cost[n];
        }

        if(dp[n] != 0)
        {
            return dp[n];
        }

        int ans1 = solve(cost, n-1, dp) + cost[n];
        int ans2 = solve(cost, n-2, dp) + cost[n];

        dp[n] = min(ans1, ans2);

        return dp[n];

    }


    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int>dp(n, 0);
        // return solve(cost, n, dp);

        dp[0] = cost[0];
        dp[1] = cost[1];
        // cost[n] = 0;
        for(int i=2; i<n; i++)
        {
            // int ans1 = cost[i-1] + cost[i];
            // int ans2 = cost[i-2] + cost[i];
    
            cost[i] += min(cost[i-1], cost[i-2]);
        }

        return min(cost[n-1], cost[n-2]);
    }
};

// my sol memoization || gives run time error 
class Solution {
public:

    

    int solve(vector<int>&cost, int n, vector<int>&dp)
    {
        if(n==0)
        {
            return cost[n];
        }

        if(n==1)
        {
            return cost[n];
        }

        if(dp[n] != 0)
        {
            return dp[n];
        }

        // int ans1 = solve(cost, n-1, dp) + cost[n];
        // int ans2 = solve(cost, n-2, dp) + cost[n];

        dp[n] = cost[n] + min(solve(cost, n-1, dp), solve(cost, n-2, dp));

        // dp[n] = min(ans1, ans2);

        // return min(dp[n-1], dp[n-2]);
        return dp[n];

    }


    int minCostClimbingStairs(vector<int>& cost) {
        
        // memoization 
        int n = cost.size();
        vector<int>dp(n, 0);
        return solve(cost, n, dp);

        // tabulation 
        // dp[0] = cost[0];
        // dp[1] = cost[1];
        // // cost[n] = 0;
        // for(int i=2; i<n; i++)
        // {
        //     // int ans1 = cost[i-1] + cost[i];
        //     // int ans2 = cost[i-2] + cost[i];
    
        //     dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
        // }

        // return min(dp[n-1], dp[n-2]);
    }
};


