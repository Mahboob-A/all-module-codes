





/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 01 : 280223, Tuesday
Time : 03.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  01   ||    A. Crazy Computer    ||     https://codeforces.com/problemset/problem/716/A
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

        // FIO
        string s, t;
        cin>>s>>t;

        int pos = 0;
        for(int i=0; i<t.size(); i++)
        {
                if(s[pos] == t[i])
                {
                        pos++;
                }
        }

        cout<<pos+1<<en; // as 1 based index is needed 


        return 0;
}



