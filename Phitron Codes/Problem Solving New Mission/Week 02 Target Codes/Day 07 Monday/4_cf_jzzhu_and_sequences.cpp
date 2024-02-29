




/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 07.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =  4   ||    B. Jzzhu and Sequences    ||     https://codeforces.com/problemset/problem/450/B
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
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define no_ans cout<<-1<<"\n";
#define en '\n';
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 


*/

 


const ll mod = 1e9 + 7;

void solve()
{
        ll x, y, n;
        cin>>x>>y>>n;

        if(n % 6 == 1)
                cout<<(x + 2 * mod) % mod << endl;
        else if(n % 6 == 2)
                cout<<(y + 2 * mod) % mod << endl;
        else if(n % 6 == 3)
                cout<<(y - x + 2 * mod) % mod << endl;
        else if(n % 6 == 4)
                cout<<(2 * mod - x) % mod << endl;
        else if(n % 6 == 5)
                cout<<(2 * mod - y) % mod << endl;
        else 
                cout<<(x - y + 2 * mod) % mod << endl;
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





