









/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 07.30 pm  
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =   12  ||    A. Puzzles   ||  https://codeforces.com/problemset/problem/337/A
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

const int MAX = 1010;
int arr[MAX];


int main(){

        FIO     

        int n, m;
        cin>>n>>m;
        for(int i=1; i<=m; i++)
        {
                cin>>arr[i];
        }

        sort(arr + 1, arr+m + 1);
        int ans = 10000;
        int start, end, tmp_ans;
        for(int i=1; i<=m; i++)
        {       
                start = i;
                end = start + n - 1;
                if(end > m)
                {
                        break;
                }
                tmp_ans = arr[end] - arr[start];
                // ans = min(ans, tmp_ans);
                if(tmp_ans < ans)
                {
                        ans = tmp_ans;
                }

        }

        cout<<ans<<en;


        return 0;
}





	
