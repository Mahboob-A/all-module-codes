






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
QS = 5 || A. Chat room || https://codeforces.com/problemset/problem/58/A
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

we will be given a string of " ahhellllloou " this type. and we have to tell if we could make 
" hello " form the string. remember, the ordering of the characters can not be altered i.e if 
we get any string like this :  " hlelo " we can not make " hello " from it because the 
character ordering is altered in hlelo string. 

so given a string which hello characters are not altered, we have to detect if we could make 
hello out of it. 
so we just iterate over the given string and check with hello string's char.
if we find both of them true, so we then check the next char of hello string with the given string's char 
and increment count and pos of hello string. 
if the count is 5, then we can tell that we suxccessfully have genenrated the string hello form the 
given string.



*/

int main(){

        string s, t = "hello";

        cin>>s;

        if(s.size() < 5)
        {
                cout<<  " NO"<<endl;
                return 0;
        }


        int pos = 0, count = 0;
        for(int i=0; i<s.size(); i++)
        {
                // check the i'th char of given string with the pos'th char of hello string 
                if(s[i]  == t[pos])
                {
                        count++;
                        pos++;
                }
        }

        // if count is 5, then we can tell that we have made hello string out of the given string 
        if(count == 5)
        {
                cout<<"YES"<<endl;
        }
        else 
        {
                cout<<"NO"<<endl;
        }


        return 0;
}

