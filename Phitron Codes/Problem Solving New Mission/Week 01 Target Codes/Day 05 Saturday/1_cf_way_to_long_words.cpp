




/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 09.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 01 || A. Way Too Long Words || https://codeforces.com/problemset/problem/71/A
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

we will be given n and n number strings. 
if the size of the string is greater than 10, then we have to output the s[0]+size_s_-2+s[last_char] in 
this format. else just print the string. 
ex : Localization = L10n 
*/

int main(){

        int n;
        cin>>n; 
        for(int i=0; i<n; i++)
        {
                string s, ans = "";
                cin>>s;
                int size = s.size();
                if(size > 10)
                {
                        ans += s[0];
                        ans += to_string(size-2);
                        ans += s[size-1];
                        cout<<ans<<endl;
                }
                else 
                {
                        cout<<s<<endl;
                }
        }

        return 0;
}
