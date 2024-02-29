







/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 01 : 280223, Tuesday
Time : 9.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  08   ||    A. Greg's Workout   ||   https://codeforces.com/problemset/problem/255/A
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
basic clockwise inplementation 

*/






int main(){

        // FIO 
        int chest, bicep, back;
        chest = bicep = back = 0;

        int n, inp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>inp;
                int v = i % 3;  // clock wise counter for 3 clocks 
                if(v == 0)
                {
                        chest += inp;
                }
                else if(v == 1)
                {
                        bicep += inp;
                }
                else // v == 2
                {
                        back += inp;
                }
        }


        int mx = max({chest, bicep, back});

        if(mx == chest)
        {
                cout<<"chest"<<en;
        }
        else if(mx == bicep)
        {
                cout<<"biceps"<<en;
        }
        else
        {
                cout<<"back"<<en;
        }

        return 0;
}




