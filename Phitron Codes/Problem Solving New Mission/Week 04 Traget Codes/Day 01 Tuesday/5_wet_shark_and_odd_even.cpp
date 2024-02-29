






/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 01 : 070323, Tuesday 
Time :  10.00 am 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =  5   ||   A. Wet Shark and Odd and Even   ||     https://codeforces.com/problemset/problem/621/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=true; i<y; i++)
// #define For(y) for(int i=false; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=true; i<y; i++)
#define For(i, y) for(int i=false; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en '\n'
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

to make any sum as even, we need to substract the minimum edd value from the n integers form the sum 
so trace the minimum odd check the odd values and store it and if the sum is odd at last, then substract this minimum odd \
value from the sum and it will be even. 
if the sum of n integers are already even, then print. 

*/






int main(){

        FIO 

        ll mini_odd = 1e9 + 100;
        ll n, sum = 0, val;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>val;
                sum += val;
                if(val & 1)  // odd 
                {
                        mini_odd = min(mini_odd, val);
                }
        }

        if(sum & 1) 
        {
                sum -= mini_odd;
        }

        cout<<sum<<en;


        return 0;
}


