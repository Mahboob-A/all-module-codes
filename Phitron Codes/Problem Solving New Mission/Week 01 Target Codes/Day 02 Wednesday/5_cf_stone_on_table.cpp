

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
QS = 05 || A. Stones on the Table || https://codeforces.com/problemset/problem/266/A
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


/* ================================================================ */

/*  
Understanding: 

we will be given an n, size of string and s, the string. 
we need to check minimum number of changes to the sring so that 
no same char is adjacent to each other 
*/

int main(){

        // checking the i-1 char 
        // int n, count = 0;
        // string s; 
        // cin>>n>>s;
        // for(int i=1; i<n; i++)
        // {
        //         if(s[i] == s[i-1])
        //         {
        //                 count++;
        //         }
        // }

        // cout<<count<<endl;

        // checking the i+1 char 
        int n, count = 0;
        string s; 
        cin>>n>>s;
        for(int i=0; i<n-1; i++)
        {
                if(s[i] == s[i+1])   // if equal, we need to remove this char in order to make it unique 
                {
                        count++;
                }
        }

        cout<<count<<endl;

        return 0;
}