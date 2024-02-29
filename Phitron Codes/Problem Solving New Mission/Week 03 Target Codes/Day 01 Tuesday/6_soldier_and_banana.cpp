






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
QS =  06   ||    A. Soldier and Bananas  ||     https://codeforces.com/problemset/problem/546/A
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

        ll k, n, w;
        cin>>k>>n>>w;

        ll ans = k * w*(w+1) / 2;
        // ans *= k;
        if(n>=ans)
        {
                cout<<0<<endl;
        }
        else 
        {
                cout<<ans-n<<endl;
        }


        // int ans = 0;
        // int k, n, w;
        // cin>>k>>n>>w;
        // for(int i=1; i<=w; i++)
        // {
        //         ans += k * i;
        // }

        // if(n>=ans)
        // {
        //         cout<<0<<endl;
        // }
        // else 
        // {
        //         cout<<ans-n<<endl;
        // }


        // cout<<k<<endl;



        return 0;
}




