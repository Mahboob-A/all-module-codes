





/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 04 : 100323, Friday 
Time : 10.00 am 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =   01  ||   A. Arrays   ||     https://codeforces.com/problemset/problem/572/A
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




const int MAXN = 1e5 + 100;
int a[MAXN], b[MAXN];
int k, m, n1, n2;

int main(){

        // FIO 
        cin>>n1>>n2>>k>>m;

        forn(n1) cin>>a[i];
        forn(n2) cin>>b[i];     

        // cout<<a[k - 1]<<en;
        // cout<<b[n2  - m]<<en;

        // as both the array are sorted in non decreasing order, so take the last element of array a 
        // and size of 2nd array - m index of array b || if arry a is   less in this condition then yes else no 
        if(a[k - 1]   <  b[n2 - m]) yes;
        else no;


        return 0;
}


