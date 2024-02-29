










/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 09.30 pm  
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =   14  ||    A. Dragons   ||    https://codeforces.com/problemset/problem/230/A
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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en "\n"
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

s as initial strength of hero and n as total number of dragons are given. 

then n number of x and y given where x is the strength of i'th dragon. 
we need to check if the s > x, if so, the hero will get the y strength to its s strength
and if s < x then hero dyes and ans is no. 

the hero can fight in any order, so sort the container, so that he only fights to the less strength 
dragons first and gain enough strength before he fights bigger dragons. 

*/



void solve()
{
        int s, n, x, y;
        cin>>s>>n;

        vecPii v(n);

        for(int i=0; i<n; i++)
        {
                // cin>>x>>y;
                // v[i].f = x;
                // v[i].s = y;
                cin>>v[i].f>>v[i].s;
        }

        sort(v.begin(), v.end());

        bool ans = true;
        for(int i=0; i<n; i++)
        {
                if(s > v[i].f)
                {
                        s += v[i].s;
                }
                else if(s <= v[i].f)
                {
                        ans = false;
                        break;
                }
        } 
        //
        if(ans)
                // cout<<"YES"<<en;
                yes;
        else 
                // cout<<"NO"<<en;
                no;

}


int main(){

        FIO 

        int t = 1;
        while(t--)
        {
                solve();
        }


        return 0;
}





	
