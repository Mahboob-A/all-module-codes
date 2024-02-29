

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
QS =  1   ||  A. Flipping Game  ||   https://codeforces.com/problemset/problem/327/A
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
vector<int>ans;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 


*/



const int MAX = 105;
int arr[MAX];

int main(){

        FIO 

        int n, i, j, k;
        cin>>n;
        for(i=0; i<n; i++)
        {
                cin>>arr[i];
        }

        int ans = 0;

        for(i=0; i<n; i++)
        {
                for(j=i; j<n; j++)
                {
                        for(k=i; k<=j; k++)
                        {
                                arr[k] = 1 - arr[k];
                        }

                        int count=0;

                        for(k=0; k<n; k++)
                        {
                                count += arr[k];
                        }

                        for(k=i; k<=j; k++)
                        {
                                arr[k] = 1 - arr[k];
                        }

                        if(count > ans) 
                                ans= count;
                }
        }

        cout<<ans<<"\n";

        return 0;
}





