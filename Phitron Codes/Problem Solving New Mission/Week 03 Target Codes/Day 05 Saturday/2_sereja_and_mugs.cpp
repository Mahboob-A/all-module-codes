











/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 05 : 040323, Saturday 
Time : 04.30 pm 
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  02   ||   A. Sereja and Mugs  ||  https://codeforces.com/problemset/problem/426/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

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



*/






int main(){

        FIO 

        int n, max_volume_of_cup, max_water;    // n = number of total mugs 
        cin>>n>>max_volume_of_cup;
        bool ans = true;
        int sum = 0, mx = -1;
        for(int i=0; i<n; i++)
        {
                cin>>max_water;
                sum += max_water;
                if(mx < max_water)
                {
                        mx = max_water;
                }
        } 


        if((sum - mx) <= max_volume_of_cup)
        {
                yes;
        }
        else 
        {
                no;
        }


        return 0;
}




