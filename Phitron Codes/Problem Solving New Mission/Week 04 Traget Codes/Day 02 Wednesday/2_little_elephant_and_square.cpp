







/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 02 : 080323, Wednesday
Time :  02.30 pm 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =  02    ||  B. Little Elephant and Magic Square    ||     https://codeforces.com/problemset/problem/259/B
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

        ll x,y,z,a,b,c,d,e,f;
        cin>>x>>a>>b>>c>>y>>d>>e>>f>>z;
        
        z=((c+d)+(a+b)-(e+f))/2;
        x=(z+(e+f)-(a+b));
        y=(a+b)-z;
        
        cout<<x<<" "<<a<<" "<<b<<endl;
        cout<<c<<" "<<y<<" "<<d<<endl;
        cout<<e<<" "<<f<<" "<<z<<endl;

        return 0;
}
