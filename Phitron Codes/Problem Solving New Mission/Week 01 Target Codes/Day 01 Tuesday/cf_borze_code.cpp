




/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 01 : 140223, Tuesday 
Time : 08.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 04 || B. Borze || https://codeforces.com/problemset/problem/32/B
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
const int N = 1e3+100;
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;

int dist[N][N];
/* ================================================================ */

/*  
Understanding: 

. is 0, -. is 1 and -- is 2. we have to ptint the numeric equavalent value 
check the i and the i+1 pos char and i++ because we need to skip that char as 
we already have considered it. 

*/

int main(){

        string input;
        cin>>input;
        string ans = "";
        for(int i=0; i<input.size(); i++)
        {
                if(input[i] == '.')
                {
                        ans+= "0";
                }
                if(input[i] == '-' && input[i+1] == '.')
                {
                        ans+= "1";
                        i++;
                }
                if(input[i] == '-' && input[i+1] == '-')
                {
                        ans+= "2";
                        i++;
                }
        }
        // comment 
        cout<<ans<<endl;

        return 0;
}