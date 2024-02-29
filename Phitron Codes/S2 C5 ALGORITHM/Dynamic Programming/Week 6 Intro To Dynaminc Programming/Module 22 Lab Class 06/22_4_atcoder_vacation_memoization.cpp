



/*  
Week 06 : Lab class 06 
Frog 02 and 2D dp 
Module date: 240123, Tuesday
Watch date: 170223, Friday, 08.00 am 

22- 4 and 22 - 5 : Solving dp with 2 dimension and code 
// memoization method 
*/

/*  
DP Steps: 

dp state : fun(n, x) -> maximum happines till day n if we pick task x on day n.  
recurrence relation : fun(n, x) = max (fun(n-1, y)) + happines[n][x] -> where x !+ y 
base case: fun(1, x) = return happines[1][x]
       

// memoization method 
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


int fun(int day, int curr_task)
{
        // 1. base case 
        if(day == 1)
        {
                return happines[day][curr_task];
        }
        
        // 2. if answer is already computed, then return the answer 
        if(dp[day][curr_task] != -1)
        {
                return dp[day][curr_task];
        }

        // 3. compute the result from the smaller sub-problems 
        int max_gain = -1;
        for(int task=1; task<=3; task++)
        {
                if(task != curr_task)
                {
                        int candidate_gain = fun(day-1, task) + happines[day][curr_task];
                        max_gain = max(max_gain, candidate_gain); 
                }
        }
        dp[day][curr_task] = max_gain;
        return max_gain;
}

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

        // memset(dp, -1, sizeof dp);
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=3; j++)
                {
                        dp[i][j] = -1; 
                }
        }

        int ans1 = fun(n, 1);
        int ans2 = fun(n, 2);
        int ans3 = fun(n, 3);

        cout<<max({ans1, ans2, ans3})<<endl;

        return 0;
}

/*  
max(): 
max(a, b) -> this max gives max between two elements
max({a, b, c, d, .....n}) -> using a curly braces inside first bracket in max can produce max between n elements. 
 
*/
