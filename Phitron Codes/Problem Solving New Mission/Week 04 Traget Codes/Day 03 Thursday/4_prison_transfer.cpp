











/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 03 : 090323, Thursday
Time :  07.30 am 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS =  4    ||  B. Prison Transfer   ||     https://codeforces.com/problemset/problem/427/B
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
int arr[MAXN];
int n, t, c;


int main(){

        FIO 

        cin>>n>>t>>c;
        // forn(n)
        //         cin>>arr[i];
        
        int a, ans =  0, tmp = 0;
        forn(n)
        {
                cin>>a;
                if(a <= t)
                {
                        tmp++;
                }
                else 
                {
                        tmp = 0;
                }

                if(tmp >= c)
                {
                        ans++;
                }
        }

        cout<<ans<<en;



        return 0;
}       
