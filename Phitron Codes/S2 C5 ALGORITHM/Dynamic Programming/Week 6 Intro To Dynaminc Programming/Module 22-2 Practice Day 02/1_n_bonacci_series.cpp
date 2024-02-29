


/*  
Week 06 : Lab class 06 
Practice day 02; 
Module date: 250223, Wednesday 
Watch date: 210223, Tuesday, 07.30 am 

link : https://docs.google.com/document/d/1tDvq8EdYg3aLbnxg0ippFicgWw2sEBpX0wQnJyRPOBg/edit#heading=h.65qulfd3798

*/

/*  
Module - 22.5: Practice Problems

N-bonacci series is a series where the 1st n numbers in the series are all 
1-s and after that the i-th number is the sum of the previous n numbers in the series. 

For example, for n = 4, the series looks like this:

1,  1,  1,  1,  4,  7,  13,  25,  49,  94,  181,  349,  673, 1297 . . .

You will be given two integers n and k. You have to determine the k-th integer (1-indexed) in the N-bonacci series.

For example, for n = 4 and k = 8 the output is 25
Define your DP state
Write the recurrence relation
Write the base case
Write code in C++ (use both memoization and tabulation)
Write your time and space complexity


*/

/*  
DP Steps: 

dp state: fib(k, n) -> n'th fib value 
recurrence relation : fib(k, n) = for i = 1 to k => fib(n) = fib(k, n-i)
base case = when fib(n) <= k then return 1 

*/

/*
General Idea : 

the idea is that we now have to find n-bonacci series where all k values are 1 and any n'th result is summation of 
all of its previous k states 


memoization method 


TC : o(n * k)  
SC : o(n)
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int dp[N];
int n, k;


long long fib(int k, int n)
{
        // base case 
        if(n <= k)
        {
                return 1;
        }

        // if answer is calculated, return answer 
        if(dp[n] != -1)
        {
                return dp[n];
        }


        // calculate answer from smaller sub problems 
        int ans = 0;
        for(int i=1; i<=k; i++)
        {
                ans += fib(k, n-i);
        }
        dp[n] = ans;
        // ans = 0;    not required 
        return dp[n];
}


int main(){

        cin>>k>>n;

        for(int i=1; i<=n; i++)
        {
                dp[i] = -1;
        }

        cout<<fib(k, n)<<endl;

        return 0;

}