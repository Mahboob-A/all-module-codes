

/*  

Week 06 : Introduction to Dynamic Programming 
Module 21: Solving dp problems  
Module date: 220123, Sunday
Watch date: 130223, Monday, 04.30 pm 
Mod: 21-3: Tabulation and Memoization in Code 

// this code is in the memoization / recursive method 
*/
        

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int dp[N], heigh[N];
int n;


int stone(int n)
{
        //1. base case 
        if(n==1)
        {
                return 0;
        }

        // 2. if state is already solved, return the answer 
        if(dp[n] != -1)
        {
                return dp[n];
        }

        // 3. calculate the answer form the smaller sub problems 
        // dp[n] = min(stone(n-1) + abs(heigh[n] - heigh[n-1]), stone(n-2) + abs(heigh[n] - heigh[n-2]));
        // return dp[n];   

        int ans1 = stone(n-1) + abs(heigh[n] - heigh[n-1]);   // if n = 2 : n-1 = 1 and n - 2 = 0; 1 will return 0, and if 

        // as if n is 2, 
        /*  
        if n = 2 then n-1 will be 1 and n-2 will be 0. but there are no stone as 0. so, when we see that n is 2, so we can not go 
        any in state n-2. in this case, if we n is 2 then we know that we have returned 0 from n==1, and now we are at n=2 state. 
        in this case, we will simply put the value to 2 and return as there are no store like stone(0) so we do not need to calculate 
        stone(0) state  
        */
        if(n==2)
        {
                dp[n] = ans1;
                return ans1;
        }

        int ans2 = stone(n-2) + abs(heigh[n] - heigh[n-2]);

        int ans = min(ans1, ans2);
        dp[n] = ans;
        return ans;

}

int main(){

        cin>>n;
        for(int i=1; i<=n; i++)
        {
                cin>>heigh[i];
        }

        for(int i=1; i<=n; i++)
        {
                dp[i] = -1;
        }

        cout<<stone(n)<<endl;

        return 0;

}