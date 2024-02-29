





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
QS =  07   ||    A. GukiZ and Contest   ||  https://codeforces.com/problemset/problem/551/A
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

        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; i++)
        {
                cin>>arr[i];
        }

        for(int i=1; i<=n; i++)
        {
                int ans = 1;
                for(int j=1; j<=n; j++)
                {
                        if(arr[i] < arr[j])
                        {
                                ans++;
                        }
                }
                cout<<ans<<" ";
        }

        cout<<en;



        return 0;
}




