










/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 06 : 260223, Sunday
Time : 10.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 4 || B. Sereja and Suffixes || https://codeforces.com/problemset/problem/368/B
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

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
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
#define ll long long
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 
n and m will be given and n elements are given. 
then m number of queries L are given, our task is to tell
how many distinct numbers are in the array from L to n(n as number of size of the array)

logic: 

- take two MAX size aray to input and to store the ans 
- take a set 
        - take input in the array 1 to <=n 
        - run reverse loop from n to <= 1 
                - insert arr[i] value in set 
                - ans[i] = set.size 

- run while loop of m 
        - take input of L 
        - cout ans[L]

as we are taking set, so it will eliminate the dupes and store the size found in ans. 

*/


const int MAX = 1e5 + 1;
int inp[MAX], ans[MAX];
set<int>s;

int main(){

        FIO 
        int n, m, l;
        cin>>n>>m;

        for(int i=1; i<=n; i++)
        {
                cin>>inp[i];
        }

        for(int i=n; i>0; i--)
        {
                s.insert(inp[i]);
                ans[i] = s.size();
        }   

        while(m--)
        {
                cin>>l;
                cout<<ans[l]<<"\n";
        }

        // debug 
        // while(m--)
        // {
        //         cin>>l;
        //         cout<<"ans: L"<<l<<" "<<ans[l]<<"\n";
        // }

        // cout<<endl<<endl;
        // for(int i=n; i>0; i--)
        // {
        //         cout<<i<<" "<<ans[i]<<endl;
        // }

        // cout<<endl<<endl;

        // for(auto x : s)
        // {
        //         cout<<x<<endl;
        // }
        
        return 0;
}





