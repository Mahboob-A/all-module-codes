


/*  
Week 06 : Intro to dp 
Module 21.5 : practice day 01 
mod date : 230123, Monday. 
practice date : 140223, tuesday, 10.00 am 
current module : week 09 - lab class 09 


Question link: https://docs.google.com/document/d/1crH0BkdvYCbdzxIgJhggq_mpNQKVrZyEDDqZ1joHg7U/edit#
question 01: 

All the problems below are related to Dynamic Programming. 
You have to solve each problem using both memoization and tabulation methods.


Write code to output the n-th Tribonacci number. 
A Tribonacci series is a series where each number of the series is the sum of previous three numbers 
(except the 1st three numbers which are all 1-s)

The first few numbers of the series is as follows:

1, 1, 1, 3, 5, 9, 17, 31, 57, 105, 193, 355, 653, 1201 . . .

What is the time and space complexity of your code?

*/

// problem : https://leetcode.com/problems/climbing-stairs/

/*  
time complexity : O(n) liner loop 
space complexity : O(n) dor dp array or vector 

*/

// solution 01 : 
class Solution {

   
public:
    // tabulation 
    int climbStairs(int n) {
        
        int dp[50];

        dp[1] = 1;  // nase case 
        dp[2] = 2;

        // loop through all the states 
        for(int i=3; i<=n; i++)
        {
                // calculate the smaller problems form the sub-problems
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];



        
    }
};




/*  
Time complexity: O(n)= Linear time complexity
Space complexity:O(n)+O(N)= extra space of size n(dp) and recursion depth n

*/


// solution 02 : 
class Solution {

    // private: 
   
public:
    // O(1) space solution | tabulation : https://leetcode.com/problems/climbing-stairs/solutions/3147963/4-solutions-recursion-memoization-dp-space-optimization/
   
        // memoization using array 
    int solve(int n, int* dp)
    {
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }

        if(dp[n] != -1)
        {
            return dp[n];
        }

        dp[n] = solve(n-1, dp) + solve(n-2, dp);
        return dp[n];
    }

    int climbStairs(int n) {

        int dp[n+1];
        for(int i=1; i<=n; i++) dp[i] = -1;
        return solve(n, dp);

    }
};

// solution 03: 
class Solution {

    // private: 
   
public:
    // O(1) space solution | tabulation : https://leetcode.com/problems/climbing-stairs/solutions/3147963/4-solutions-recursion-memoization-dp-space-optimization/
   

    // memoization using vector 
    int solve(int n, vector<int> &dp)
    {
        // base cases 
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 2;
        }

        // return the answer if already computed 
        if(dp[n] != -1)
        {
            return dp[n];
        }

        // compute the answer from the smaller sub-problems
        dp[n] = solve(n-1, dp) + solve(n-2, dp);
        return dp[n];
    }

    int climbStairs(int n) {

        vector<int>dp(n+1, -1);
        return solve(n, dp);

    }
};