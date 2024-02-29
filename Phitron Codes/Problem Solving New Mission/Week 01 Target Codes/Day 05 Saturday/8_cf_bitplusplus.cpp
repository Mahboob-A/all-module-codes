

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 04.30 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 08  || A. Bit++ || https://codeforces.com/problemset/problem/282/A
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 
we would be given n and n number of string 
the string s would be like this  : 
        ++X or X++ => then increment ans by 1 
        --X or X-- => then decrement ans  by 1 
*/

int ans = 0;

void find_result(string s)
{
        /*  
        string s would be like this  : 
        ++X or X++ => then increment ans 
        --X or X-- => then decrement ans 
        */
        if(s[0] == '+' || s[2] == '+')
        {
                ans++;
        }
        else if(s[0] == '-' || s[2] == '-')
        {
                ans--;
        }

}

int main(){

        int n;
        cin>>n;

        for(int i=0; i<n; i++)
        {
                string s;
                cin>>s;
                find_result(s);
        }

        cout<<ans<<endl;

        return 0;
}


