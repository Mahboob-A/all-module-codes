





/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 06 : 190223, Sunday 
Time : 07.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 4  || A. Even Odds || https://codeforces.com/problemset/problem/318/A
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

  

*/

int main(){


        long long n, k;
        cin>>n>>k;

        if(n % 2 ==0)
        {
                long long mid = n / 2;
                if(k > mid)
                {
                        cout<<(k - mid) * 2;
                }
                else 
                {
                        cout<<(k * 2) - 1;
                }
        }
        else
        {
                long long mid = n / 2 + 1;
                if(k > mid)
                {
                        cout<<(k - mid) * 2;
                }
                else 
                {
                        cout<<(k * 2) - 1;
                }
        }



        return 0;
}


