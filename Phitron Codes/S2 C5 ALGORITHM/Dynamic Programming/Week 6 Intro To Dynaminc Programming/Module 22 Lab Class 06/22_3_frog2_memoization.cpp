
/*  
Week 06 : Lab class 06 
Frog 02 and 2D dp 
Module date: 240123, Tuesday
Watch date: 160223, Thursday, 08.30 am 

22-3: Code ( code of frog 2 memoization)
*/

/*  
DP Steps: 

dp state : stone_2(n) -> cost of reaching n'th stone from stone 1 
recurrence relation : stone_2(n) = for i=1 to <=k: 
                                                        - ans = min(stone_2(n-i)   +    abs(height[n] - height[n-i]))
base case: 
        - stone_2(1) = 0

// memoization method 
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

int stone_2(int n)
{
        // 1. base case 
        if(n==1)
        {
                return 0;
        }

        // 2. if the answer of current state n is already computed, return the answer 
        if(dp[n] != -1)
        {
                return dp[n];
        }

        // 3. calculate the answer for n state from the smaller sub-problems  
        int ans = INF;

        // running k times loop to calculate the previous k states to calculate the current n'th state 
        for(int i=1; i<=k; i++)
        {
                // corner case : if n-i becomes <=0, then break the calculation of the curr_state
                // from this i'th k iteration, because there are no stone like 0, -1, -2 
                if(n-i <= 0)
                {
                        break;
                }
                int candidate_ans = stone_2(n-i) + abs(height[n] - height[n-i]);
                ans = min(ans, candidate_ans);
        }
        dp[n] = ans;
        return dp[n];


}


int main(){

        cin>>n>>k;
        // taking input of height 
        for(int i=1; i<=n; i++)
        {
                cin>> height[i];
        }

        // making dp array fill with - 1
        for(int i=1; i<=n; i++)
        {
                dp[i] = -1;
        }

        cout<<stone_2(n)<<endl;



        return 0;
}
