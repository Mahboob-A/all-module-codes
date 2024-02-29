




/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
cafe_time : 07.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =   2  ||    A. Free Cash    ||     https://codeforces.com/problemset/problem/237/A
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

this is a problem of 2D array counter concept. 
hours and mints are given, the problem needs to output how many same hour and 
minutes are given input. 


*/




int cafe_time[25][61];

int main(){

        FIO 

        int n, hr, mint, free_cash = -1;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>hr>>mint;
                cafe_time[hr][mint]++;

                if(cafe_time[hr][mint] > free_cash)
                        free_cash = cafe_time[hr][mint];
        }

        cout<<free_cash<<"\n";


        return 0;
}





