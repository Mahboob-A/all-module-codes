












/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 03 : 090323, Thursday
Time :  07.30 am 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =  9    ||   A. Pasha and Stick  ||   https://codeforces.com/problemset/problem/610/A
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
#define forn(y) for(int i=0; i<y; i++)
#define For(y) for(int i=1; i<=y; i++)
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


*/






int main(){

        FIO 

        ll n;
        cin>>n;
        if(n & 1) // if odd 
        {
                cout<<0<<en;
        }
        else 
        {
                cout<<(n - 2) / 4<<en;
        }



        return 0;
}