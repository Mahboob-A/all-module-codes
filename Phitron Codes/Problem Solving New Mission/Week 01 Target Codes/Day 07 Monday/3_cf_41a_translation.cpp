



/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 06 : 200223, Monday
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 3  || A. Translation || https://codeforces.com/problemset/problem/41/A
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

we will be given two strings. we have to check if 2nd is same to 1st string from reverse order. 
i.e code is 1st string and edoc is 2nd string then print yes else no 

*/

int main(){

        string s1, s2;

        cin>>s1>>s2;

        int sz1 = s1.size();
        int sz2 = s2.size();
        bool ans = false;

        // running loop form beginning os string 1 and end of string 2 
        for(int i=0, j=sz2-1; i<sz1, j>=0; i++, j--)
        {
                if(s1[i] == s2[j])
                {
                        ans = true;
                }
                else 
                {
                        ans = false;   // if the the chars differ, then break 
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

        // we can not do it using sorting the 2nd string, it would give incorrect output. 
        // cout<<endl;
        // sort(s2.begin(), s2.end());
        // cout<<s2<<endl;
        
        return 0;
} 