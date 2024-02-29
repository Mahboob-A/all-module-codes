







/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 01 : 210223, Tuesday
Time : 02.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 7 | |A. DZY Loves Chessboard || https://codeforces.com/problemset/problem/445/A
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
#define inp second
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
the idea is that we will be given n and m of a matrix. 
we will be given n times string of m size. we have to add B or W to ans if the inp[i] == '.'
and if inp[i] == '-' then add '-' to ans. 
remember, we can not add w and b sequentially if inp[i] and inp[i+1] both are dot, 
in this case we have to put bw. 
and in the second line if the first line ans[0] was B, then in the 2nd line ans[0] should be W 
and vice versa. this is all about the problem. 
 
*/


int main(){

        int n, m;
        cin>>n>>m;

        char mx[105][105];

        for(int i=0; i<n; i++)
        {
                for(int j=0; j<m; j++)
                {
                        cin>>mx[i][j];
                        if(mx[i][j] == '.') 
                        {
                                if((j + i) % 2 == 0)
                                {
                                        mx[i][j] = 'B';
                                }
                                else 
                                {
                                        mx[i][j] = 'W';
                                }
                        }
                }
        }

        for(int i=0; i<n; i++)
        {
                for(int j=0; j<m; j++)
                {
                        cout<<mx[i][j];
                }
                cout<<endl;
        }

        return 0;
}


/* wa on tc 5 
int main(){


        int n, m;
        cin>>n>>m;
        


        int pos = 0;
        string st = "BW";
        for(int i=0; i<n; i++)
        {
                string inp, ans = "";
                cin>>inp;
                // if input is 1 
                if(n == 1 && m == 1)
                {
                        if(inp[0] == '.')
                        {
                                cout<< 'B'<<endl;
                                return 0; 
                        }
                        else if(inp[0] == '-')
                        {
                                cout<<'-'<<endl;
                                return 0;
                        }
                }

                for(int j=0; j<m; j++)
                {
                        if(inp[j] == '.')
                        {       
                                ans += st[pos];
                                pos = (pos +1) % 2; // getting the pos clockwise 
                        }
                        else if(inp[j] == '-')
                        {
                                ans += '-';
                                if(ans[j] == '-')
                                {
                                        pos = 1;
                                }
                                else 
                                {
                                        pos = 0;
                                }
                                
                        }
                }
                // reverse the pos for i + 1 answer so that ans[0] remains w or b not both same  
                if(ans[0] == 'B')
                {
                        pos = 1;
                }
                else 
                {
                        pos = 0;
                }
                cout<<ans<<endl;
        }


        return 0;
}
*/
