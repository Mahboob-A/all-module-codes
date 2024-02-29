




/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 02 : 150223, Wednesday 
Time : 10.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 01 || A. Word Capitalization || https://codeforces.com/problemset/problem/281/A
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

a string will be given. we have to make the s[0] as capital. 
*/

int main(){

        string s;
        cin>>s;
        // if the 0th char is in small letter, then make it capital 
        if(s[0] >= 97 && s[0] <= 122)
        {
                s[0] = s[0] - 32;
        }

        cout<<s<<endl;

        return 0;
}
