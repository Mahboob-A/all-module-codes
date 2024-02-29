











/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 05 : 250223, Saturday
Time : 03.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 4 || A. IQ Test || https://codeforces.com/problemset/problem/287/A
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 



*/

char matrix[4][4];

int main(){

        FIO 
        
        for(int i=0; i<4; i++)
        {
                for(int j=0; j<4; j++)
                {
                        cin>>matrix[i][j];
                }
        }
        

        bool ans = true;
        int count = 0;
        for(int i=0; i<4 - 1 && ans ; i++)
        {
                for(int j=0; j<4 - 1 && ans; j++)
                {
                        int sum = 0;
                        if(matrix[i][j] == '#')
                                sum ++;
                        if(matrix[i+1][j] == '#')
                                sum++;
                        if(matrix[i][j+1] == '#')
                                sum++;
                        if(matrix[i+1][j+1] == '#')
                                sum++;
                        if(sum != 2)
                        {
                                ans = false;
                                break;
                        }
                }
        }
        
        if(ans)
                cout<<"NO"<<endl;
        else 
                cout<<"YES"<<endl;

        return 0;
}





