






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
QS =   8  ||    A. Adding Digits    ||     https://codeforces.com/problemset/problem/260/A
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

const int MAX = 1e6 + 5;
int i, j, a, b, n, sum;
int ans[MAX];


void solve()
{
        cin>>a>>b>>n;
        sum = a % b;

        for(i=1; i<=n; i++)
        {
                sum = (sum * 10) % b;
                for(j = 0; j<=9; j++)
                {
                        if((sum + j) % b == 0)
                        {
                                break;
                        }
                }

                if(j > 9)
                {
                        break;
                }

                sum = (sum + j) % b;
                ans[i] = j;
        }

        if(i<=n)
        {
                no_ans;  // print -1 
        }
        else 
        {
                cout<<a;
                for(i=1; i<=n; i++)
                {
                        cout<<ans[i];
                }
                cout<<en;
        }

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





	