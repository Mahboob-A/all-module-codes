/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 03 : 230223, Wednesday
Time : 11.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 7 || A. Two Bags of Potatoes || https://codeforces.com/problemset/problem/239/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=0; i<y; i++)
// #define For(y) for(int i=1; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=0; i<y; i++)
#define For(i, y) for(int i=1; i<=y; i++)
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

	FIO 


        int n, y, k;
        cin>>y>>k>>n;
        // cout<<(k - y % k)<<endl;

        int first_bag = k - y % k;

        int remain = n - y;

        if(first_bag <= remain)
        {
                while(first_bag <= remain)
                {
                        cout<<first_bag<<" ";
                        first_bag += k;
                }
        }
        else 
        {
                cout<<-1<<endl;
        }
        

        
        return 0;
}