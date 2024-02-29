

/*  
Week 06 : Lab class 06 
Frog 02 and 2D dp 
Module date: 240123, Tuesday
Watch date: 160223, Thursday, 11.30 am 

22-3: Code ( code of frog 2 memoization)
*/

/*  
DP Steps: 

dp state : stone_2(n) -> cost of reaching n'th stone from stone 1 
recurrence relation : stone_2(n) = for i=1 to <=k: 
                                                        - ans = min(stone_2(n-i)   +    abs(height[n] - height[n-i]))
base case: 
        - stone_2(1) = 0

// tabulation method 
*/

/*
General Idea : 

in this problem, we have to jump k steps. in the previous question, 
we were jumping constant steps i.e i+1 and i+2 but now 
we have to jump 1, 2, 3, 4, ... i+k steps. for this we will run a loop
till i=1 to i<=k and call recuscively with n-i. 
but stone begins from 1, so when we will se that n-i becomes <=0, then we will
break the loop for that n. because there are np stones before stone 1. 

the general idea is that as in the problem 1, we could come to n stone from n-1 and n-2 stone,
in this problem we could come to n stone from n-1, n-2, n-3 ... n-k stone. so, we have to take 
a loop and call all the behind state as to calculate the any n state, we need to know the answer of all 
prevous k states. and we will take the minimum of all the previous k state's value for the answer of n'th state. 
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int dp[N], height[N];   // n could go to 1e5 and height could go to 1e4, and k is 1<= k <= 100 
const int INF = 2e9;    // taking a large inf value to calculate the minimum of jumps 
int n, k;

int main(){

        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
                cin>>height[i];
        }

        // 1. base case : dp[1] = 0
        dp[1] = 0;

        //2. run loop for all the states 
        for(int i=2; i<=n; i++)  // as we have computed the dist of stone 1 from stone 1 is 0 previously 
        {
                // make the dist of dp[i] to INF so that we could calculate the min dist of dp[i]
                dp[i] = INF;
                //2.1 calculate the answer form the smaller sub-problems 
                // as we can move k steps, so run a loop of k times 
                for(int j=1; j<=k; j++) // as the stone begins from 1 described in the problem statement 
                {
                        // int from_stone = i-j 
                        // int to_stone = i 
                        // as there are no stone like 0, -1, -2
                        // so when i(the current state we are calculating) - j(the previous states as jump) becomes <=0
                        // that means we have reached the 1st stone, and there are no behind or previous stone, 
                        // so, in this case, break the calculation for this i state k of particular j jump calculation
                        if(i-j <=  0)
                        {
                                break;
                        }
                        // taking the minimum of k-i stone(previous stone) + height of abs current stone (height[i] - height[from_stone])
                        int candidate_ans = dp[i-j] + abs(height[i] - height[i-j]);
                        dp[i] = min(dp[i], candidate_ans);
                }
        }

        cout<<dp[n]<<endl;


        return 0;
}