







/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 03.00 pm  
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =   9  ||    A. Lights Out    ||     https://codeforces.com/problemset/problem/275/A
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



int lights[3][3];
bool ans[3][3];

void solve()
{


        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cin>>lights[i][j];
                        ans[i][j] = 1;
                }
        }

        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        if(lights[i][j] % 2 != 0)
                        {
                                ans[i][j] = !ans[i][j];
                                if ( i-1 >= 0 )
                                        ans[i-1][j] = !ans[i-1][j];
                                if ( j-1 >= 0 )
                                        ans[i][j-1] = ! ans[i][j-1];
                                if ( i+1 < 3 )
                                        ans[i+1][j] = !ans[i+1][j];
                                if ( j+1 < 3 )
                                        ans[i][j+1] = !ans[i][j+1];
                        }
                }
        }

        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<ans[i][j];
                }
                cout<<endl;
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





	
