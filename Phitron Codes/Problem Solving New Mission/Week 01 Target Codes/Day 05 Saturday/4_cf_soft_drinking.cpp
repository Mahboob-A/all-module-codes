

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 03.30 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 04  || A. Soft Drinking || https://codeforces.com/problemset/problem/151/A
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

the formula is given in the question : 
for this input : 
3 4 5 10 8 100 3 1
output:
2

Overall the friends have 4 * 5 = 20 milliliters of the drink, 
it is enough to make 20 / 3 = 6 toasts. The limes are enough for 10 * 8 = 80 toasts and 
the salt is enough for 100 / 1 = 100 toasts. However, there are 3 friends in the group, 
so the answer is min(6, 80, 100) / 3 = 2.

*/

int main(){

        int n, k, l, c, d, p, nl, np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;

        int total_drint = k * l;

        int drink_toast = total_drint / nl;
        int total_lime_slice = c * d;
        int total_salt = p / np;

        int ans = min({drink_toast, total_lime_slice, total_salt}) / n;

        cout<<ans<<endl;


        return 0;
}


