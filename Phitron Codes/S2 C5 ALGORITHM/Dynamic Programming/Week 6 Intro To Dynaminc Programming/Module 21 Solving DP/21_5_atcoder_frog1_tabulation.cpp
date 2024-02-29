

/*  

Week 06 : Introduction to Dynamic Programming 
Module 21: Solving dp problems  
Module date: 220123, Sunday
Watch date: 130223, Monday, 10.00 pm 
Mod: 21-3: Tabulation and Memoization in Code 

// this code is in the Tabulation / iterative method 
*/



#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;   
int dp[N], heigh[N];
int n;


int main(){


        cin>>n;

        for(int i=1; i<=n; i++)
        {
                cin>>heigh[i];
        }
        
        // step 01 : base case 
        dp[1] = 0; // as we are beginning from 1 number stone and its distance is 0. 

        // step 02 : loop through all the states 
        for(int i=2; i<=n; i++)
        {
                // step 03 : and calculate the answer form the smaller sub problems 
                int ans1 = dp[i-1] + abs(heigh[i] - heigh[i-1]);

                // corner case : as if i == 2, i-2 will be 0, and there are no stone state of 0
                // and if i = 2, it menas we already have the answer of i-1 - the answer of state 1, 
                // we will simply put this answer to state 2. 
                if(i==2)
                {
                        dp[i] = ans1;
                        continue;
                }

                // calculates ans for i-2 state 
                int ans2 = dp[i-2] + abs(heigh[i] - heigh[i-2]);
                
                dp[i] = min(ans1, ans2);

        }

        cout<<dp[n]<<endl; 

        return 0;
}