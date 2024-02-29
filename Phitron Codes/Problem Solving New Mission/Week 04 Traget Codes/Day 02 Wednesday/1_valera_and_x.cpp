








/*  
===========
Problem Solving New Mission 
===========
Week 04 - 070323, Tuesday to 130323, Monday 
Day 02 : 080323, Wednesday
Time :  02.30 pm 
===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========
QS = 1   ||   A. Valera and X   ||     https://codeforces.com/problemset/problem/404/A
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
the problem is that in both diagonal => the value should be same and all the rest indexes => the values 
should be same. 

so, taking the diagonal and other index vlaue and checking left diagonal as i==j 
and right diagonal as i + j == n-1 != the saved diagonal value then ans is false
else 
in any index other than diagonal if the value is not saved non diagonal vlaue then ans is false 


*/



const int MAXN = 305;
char paper[MAXN][MAXN];


// 0 based index 
void solve()
{
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        cin>>paper[i][j];
                }
        }

        bool possible = true;
        // taking the 0,0 diagonal value and next to it vlaue 
        char c1 = paper[0][0], c2 = paper[0][1];

        if(c1 == c2) 
        {
                possible = false;
        }

        for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {       
                        // left diagonal || right diagonal 
                        if((i == j)  || (i + j == n - 1 ))
                        {
                                if(paper[i][j] != c1)
                                {
                                        possible = false;
                                }
                        }
                        else 
                        {
                                if(paper[i][j] != c2)
                                        possible = false;
                        }
                }
        }

        if(possible)
                yes;
        else 
                no;

}

// 1 based index 
void solve2()
{
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        cin>>paper[i][j];
                }
        }

        bool possible = true;
        char c1 = paper[1][1], c2 = paper[1][2];

        if(c1 == c2) 
        {
                possible = false;
        }

        for(int i=1; i<=n; i++)
        {
                for(int j=1; j<=n; j++)
                {
                        // left diagonal || right diagonal 
                        if((i == j)  || (i + j == n + 1 ))
                        {
                                if(paper[i][j] != c1)
                                {
                                        possible = false;
                                }
                        }
                        else 
                        {
                                if(paper[i][j] != c2)
                                        possible = false;
                        }
                }
        }

        if(possible)
                yes;
        else 
                no;

}


int main(){

        // FIO 
        int t = 1;
        while(t--)
        {
                solve();
        }



        return 0;       
}


