



/*  

Week 06 : Introduction to Dynamic Programming 
Module 21: Solving dp problems  
Module date: 220123, Sunday
Watch date: 130223, Monday, 11.00 am 
Mod: 21-3: Tabulation and Memoization in Code 

// this code is in the Tabulation way / iterative 
*/

#include <bits/stdc++.h>

using namespace std;

/*  

STEPS TO SOLVE DP PROBLEMS              

A. define state: 
        - fun(n) - calculates the n'th fibonacci number 

B. Identify the recursive equation from the smaller sub-problems:
        - fun(n)  = fun(n-1) + fun(n-2)

C. Define base case: 
        - fun(1) - return 1 
        - fun(2) - return 1 

*/
const int N = 101;
long long dp[N];

int main(){

        int n;
        cin>>n;

        // step 01: define base case 
        dp[1] = 1;
        dp[2] = 1;

        // step 02: loop through the states  (all i are n, hence all i are states of the programme)
        for(int i=3; i<=n; i++)
        {
                // and calculate the the answer from the smaller sub-problems 
                dp[i] = dp[i-1] + dp[i-2];
        }

        cout<<dp[n]<<endl;

        return 0;
}