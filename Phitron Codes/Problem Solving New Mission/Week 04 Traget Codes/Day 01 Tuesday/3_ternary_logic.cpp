



/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 01 : 070323, Tuesday 
Time :  04.00 pm 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =  3  ||  B. Ternary Logic    ||     http://codeforces.com/problemset/problem/136/B
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

        ll a, c, b = 0, tmp1, tmp2, tmp3 = 1;
        cin>>a>>c;

        while(a || c)
        {
                tmp1 = a % 3;
                tmp2 = c % 3;
                b += tmp3 * ((tmp2 - tmp1 + 3)  %  3);
                tmp3 *= 3;
                a /= 3;
                c /= 3;
        }

        cout<<b<<endl;


        return 0;
}


