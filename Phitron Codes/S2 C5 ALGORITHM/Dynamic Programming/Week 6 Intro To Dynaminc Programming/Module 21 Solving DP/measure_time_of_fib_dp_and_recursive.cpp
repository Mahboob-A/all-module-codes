

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

// recursive 
long long fib_rec(long long n)
{
        if(n==1 || n==2)
        {
                return 1;
        }

        return fib_rec(n-1) + fib_rec(n-2);
}

// dp : memoization method 
long long fib_dp(long long n)
{
        if(n<=2)
        {
                return 1;
        }

        if(dp[n] != 0)
        {
                return dp[n];
        }

        dp[n] = fib_dp(n-1) + fib_dp(n-2);
        return dp[n];
}

// dp :  tabulation method 
void tabulation(long long n)
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

int main(){

        // time begin 
        auto start = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        // the value 
        int n = 30;

        // method 01: calling the recursive func of fib 
        // cout<<fib_rec(n)<<endl;

        // method 02: DP : calling the dp memoization func of fib 
        // cout<<fib_dp(n)<<endl;

        //method 03: DP : calling the Tabulation method or iterative method 
        tabulation(n);

        // time end 
        auto end = chrono::high_resolution_clock::now();
        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= 1e-9;
        // time print 
        cout << "Time taken by program is : " << fixed << time_taken << setprecision(9);
        cout << " sec" << endl;
        
       
        return 0;
}