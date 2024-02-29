

/*  

Week 06 : Introduction to Dynamic Programming 
Module 21: Solving dp problems  
Module date: 220123, Sunday
Watch date: 130223, Monday, 08.30 am 
Mod: 21-3: Tabulation and Memoization in Code 


// this code is in memoization / recursive way / 
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
int dp[N];

int fib(int n)     // n is the state 
{
        // step 01: define base cases 
        if(n==1 || n==2)
        {
                return 1;
        }

        // step 02: check if current state is already solved, then return the result 
        // as we have assigned -1 to all of indexes of dp array initially, if now dp[n] is not -1, 
        // then the result for n state is already solved, so no need to solve it again, return the stored answer 
        if(dp[n] != -1)      
        {
                return dp[n];
        }

        // step 03: calculate the answer from the smaller sub-problems 
        int ans = fib(n-1) + fib(n-2);
        dp[n] = ans;
        return ans;
        /*  
        dp[n] = fib(n-1) + fib(n-2);
        return dp[n];
        */
}

int main(){
        
        int n; 
        cin>>n;
        for(int i=1; i<=n; i++)
        {
                dp[i] = -1;
        }

        // memset(dp, -1, sizeof(dp));


        cout<<fib(n)<<endl;

        return 0;
}