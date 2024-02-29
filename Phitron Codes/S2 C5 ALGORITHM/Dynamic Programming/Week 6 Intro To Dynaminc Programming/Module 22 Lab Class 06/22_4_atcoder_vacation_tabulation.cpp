



/*  
Week 06 : Lab class 06 
Frog 02 and 2D dp 
Module date: 240123, Tuesday
Watch date: 170223, Friday, 10.00 am 

22- 4 and 22 - 5 : Solving dp with 2 dimension and code 
// memoization method 
*/

/*  
DP Steps: 

dp state : fun(n, x) -> maximum happines till day n if we pick task x on day n.  
recurrence relation : fun(n, x) = max (fun(n-1, y)) + happines[n][x] -> where x !+ y 
base case: fun(1, x) = return happines[1][x]
       

// tabulation method 
*/

/*
General Idea : 

in this problem, 
we will be given a matrix row size of n as day and col size as 3 as task 
for any row, we can take any 1, 2, 3, task and in the i+1 row, we can not take the task we choose in i-1 row. 

and we have to find the max value we can take like this

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int happines[N][4], dp[N][4];
int n;



int main(){

        cin>>n;
        for(int i=1; i<=n; i++)
        {
                // int a, b, c;
                // cin>>a>>b>>c;
                // happines[i][1] = a;
                // happines[i][2] = b;
                // happines[i][3] = c;

                for(int j=1; j<=3; j++)
                {
                        cin>>happines[i][j];
                }
        }       

        // 1. base case 
        for(int task = 1; task<=3; task++)
        {
                dp[1][task] = happines[1][task];
        }

        // 2. loop over all the states 
        for(int day = 1; day<=n; day++)
        {
                for(int curr_task = 1; curr_task <= 3; curr_task++)
                {
                        // 2.1. calculate the answer form smaller sub-problems
                        int max_gain = -1;
                        for(int last_task = 1; last_task<=3; last_task++)
                        {
                                if(last_task != curr_task)
                                {
                                        int curr_gain = dp[day-1][last_task] + happines[day][curr_task];
                                        max_gain = max(max_gain, curr_gain);
                                }
                        }
                        dp[day][curr_task] = max_gain;
                }
        }

        int ans = max({dp[n][1], dp[n][2], dp[n][3]});
        cout<<ans<<endl;



        return 0;
}