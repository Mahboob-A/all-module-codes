










/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 07 : 060323, Monday 
Time : 05.00 pm 
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  06  ||  A. Games  ||  https://codeforces.com/problemset/problem/268/A
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



int ar[150], br[150];


int main(){

        // FIO

        int n, ans = 0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>ar[i]>>br[i];
        }
        
        /*  

        3
        1 2
        2 4
        3 4

        ar = 1 2 3 
        br = 2 4 4
        */
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(i != j && ar[i] == br[j])
                        {
                                ans++;
                        }
                }
        }

        cout<<ans<<en;

        return 0;
}




