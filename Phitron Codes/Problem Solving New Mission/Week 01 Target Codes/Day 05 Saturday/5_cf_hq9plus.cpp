

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 10.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 05  || A. HQ9+ || https://codeforces.com/problemset/problem/133/A
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
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

we will be given a string of consinsting 1<=s<=100 between 33 <=> 126 ascii characters 
if the char is H || Q || 9 print yes else no 

"H" prints "Hello, World!",
"Q" prints the source code of the program itself,
"9" prints the lyrics of "99 Bottles of Beer" song,
"+" increments the value stored in the internal accumulator.

*/

int main(){

        string s;
        cin>>s;
        bool ans = false;
        for(int i=0; i<s.size(); i++)
        {
                if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
                {
                        ans = true;
                        break;
                }
        }       

        if(ans)
        {
                cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }

        return 0;
}


