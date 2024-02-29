

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 03 : 160223, Thursday  
Time : 11.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 03 || A. Cupboards || https://codeforces.com/problemset/problem/248/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

we will be given n - num of Cupboards. 
and we will be given val1 and val2 for n times 
5
0 1
1 0
0 1
1 1
0 1

we have to calculate  the minimum number of changes we need to do to make each pair 
same value with the greater value. 
in the example, in the left line, 0 are twice and in the right line, zero is once, 
so, if we change these zeroes, we can make the rest as same like 1. so we need 
minimum of 3 changes, but if we try to change 1, then we need more than 3 changes. thus 3 is answer. 
*/

int main(){

        int n, left_zero = 0, left_one = 0, right_zero = 0, right_one = 0;
        
        cin>>n;

        for(int i=0; i<n; i++)
        {
                int val1, val2;
                cin>>val1>>val2;
                if(val1 == 0)
                {
                        left_zero++;
                }
                else 
                {
                        left_one++;
                }

                if(val2 == 0)
                {
                        right_zero++;
                }
                else 
                {
                        right_one++;
                }
        }

        int ans = min(left_zero, left_one) + min(right_zero, right_one);

        cout<<ans<<endl;

        return 0;
}






