







/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 10.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 2 || A. Little Elephant and Bits || https://codeforces.com/problemset/problem/258/A
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
A string will be given consisting of 1 and 0, without leading 0. 
we just have to omit one 0 and print the rest of the string or if there are no zero, the print the string 
of (size - 1 ) size. 


*/

int main(){

        FIO 

        string s;
        cin>>s;
        bool found = false;
        string ans = "";
        for(int i=0; i<s.size(); i++)
        {
                if(s[i] == '0' && !found)
                {
                        found = true;
                }
                else 
                {
                        ans += s[i];
                }
        }

        if(found)
        {
                cout<<ans<<endl;
        }
        else 
        {
                for(int i=0; i<s.size()  - 1; i++)
                {
                                cout<<s[i];
                }
                cout<<endl;
        }

        



        return 0;
}