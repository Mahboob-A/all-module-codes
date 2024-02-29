



/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 02 : 150223, Wednesday 
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 01 || A. Beautiful Year || https://codeforces.com/problemset/problem/271/A
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

a string will be given with mixed cases. if num of lower case == num of upper case
then make the str to lower case. if num of lower case > upper case -> make str to lower case 
if num of low case < num of upper case -> make the str to upper case  
*/

int upper = 0, lower = 0;
string s;

void make_changes()
{
        // if upper and lower case equal or lower case > upper case => make lower case 
        if(upper == lower || lower > upper)
        {
                for(int i=0; i<s.size(); i++)
                {
                        if(s[i] >= 65 && s[i] <= 90)   // only changing the upper case char to lower case 
                        {
                                s[i] = s[i] + 32;
                        }
                        // s[i] = tolower(s[i]);
                }
        }
        else   // if upper case > lower case => make upper case 
        {
                for(int i=0; i<s.size(); i++)
                {  
                        // need to make upper case, so only changing the lower case char to upper cases 
                        if(s[i] >= 97 && s[i] <= 122)
                        {
                                s[i] -= 32; 
                        }
                        // s[i] = toupper(s[i]);
                }
        }
}

int main(){

        
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
                if(s[i] >= 65 && s[i] <= 90)   // if char is in upper case 
                {
                        upper++;
                }
                else if(s[i] >= 97 && s[i] <= 122)   // if char is in lower case 
                {
                        lower++;
                }
        }

        make_changes();
        cout<<s<<endl;

        return 0;
}
