

/*  

Week 06 : Introduction to Dynamic Programming 
Module 21: Solving dp problems  
Module date: 220123, Sunday
Watch date: 130223, Monday, 08.30 am 
Mod: 21-3: Tabulation and Memoization in Code 

*/

// measuring the time taken by the dp and recursive programme of fib func 

#include <bits/stdc++.h>
#include <chrono>
using namespace std;

const int N = 101; 
long long dp[N];

// recursive   || no dp 
long long fib_non_dp(long long n)
{
        if(n==1 || n==2)
        {
                return 1;
        }

        return fib_non_dp(n-1) + fib_non_dp(n-2);
}

// dp : memoization method 
long long fib_memoization(long long n)
{
        if(n<=2)
        {
                return 1;
        }

        if(dp[n] != 0)
        {
                return dp[n];
        }

        dp[n] = fib_memoization(n-1) + fib_memoization(n-2);
        return dp[n];
}

// dp :  fib_tabulation method 
void fib_tabulation(long long n)
{
        // 1. define base case 
        dp[1] = 1;
        dp[2] = 1;

        // 2. loop through the states   (all i are n, hence all i are states of the programme)
        for(int i=3; i<=n; i++)
        {
                // calculate the snswer from the smaller sub-problems 
                dp[i] = dp[i-1] + dp[i-2];
        }

        cout<<dp[n]<<endl;
}


//// tribonacci memoization method / recursive method 
long long trib_memoization(long long n)   // state 
{
        // 1. base case 
        if(n==1 || n==2 || n==3)  // if(n<=3)
        {
                return 1;
        }

        // 2. if the answer is already computed, return the answer 
        if(dp[n] != 0)   // O(n)
        {
                return dp[n];
        }

        // 3. calculate the answer from the smaller sub-problems 
        dp[n] = trib_memoization(n-1) + trib_memoization(n-2) + trib_memoization(n-3);
        return dp[n];
}


// tribonacci tabulation method / iterative method 
void trib_tabulation(int n)
{
        // 1. base case 
        dp[1] = dp[2] = dp[3] = 1;

        // 2. loop through all the states 
        for(int i=4; i<=n; i++)   // O(n)
        {
                dp[i] = dp[i-1] + dp[i-2] + dp[i-3];   // O(1) 
        }

        cout<<dp[n]<<endl;
}

int main(){

        // time begin 
        auto start = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        // the value 
        int n = 30;

        //  ### fib series 
        // method 01: calling the recursive func of fib 
        // cout<<fib_non_dp(n)<<endl;

        // method 02: DP : calling the dp memoization func of fib 
        // cout<<fib_memoization(n)<<endl;

        //method 03: DP : calling the Tabulation method or iterative method 
        // fib_tabulation(n);
        // ###


        // #### trib series 
        // === // tribonacci series memoization code 
        // cout<<trib_memoization(n)<<endl;

        // ===// tribonacci tabulation code 
        trib_tabulation(n);
        // ####

        // time end 
        auto end = chrono::high_resolution_clock::now();
        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= 1e-9;
        // time print 
        cout << "Time taken by program is : " << fixed << time_taken << setprecision(9);
        cout << " sec" << endl;
        
       
        return 0;
}