




/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 12.30 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 4 || A. Shooshuns and Sequence || https://codeforces.com/problemset/problem/222/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=0; i<y; i++)
// #define For(y) for(int i=1; i<=y; i++)

#define loop(i, y) for(int i=0; i<y; i++)
#define For(i, y) for(int i=1; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 



*/
const int N = 1e5 + 100;
int arr[N];

int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n, k;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
                cin>>arr[i];
        }

        int indx = 0;

        for(int i=n-1; i>0; i--)
        {
                if(arr[i]  !=  arr[n])
                {
                        indx = i;
                        break;
                }
        }

        // cout<<indx<<endl;

        if(indx < k)    
        {
                cout<<indx<<endl;
        }
        else 
        {
                cout<<-1<<endl;
        }


        return 0;
}       