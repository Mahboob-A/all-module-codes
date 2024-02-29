


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
QS = 06  || A. Petya and Strings || https://codeforces.com/problemset/problem/112/A
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

we will be given tw string of mixed cases of same size, upper and lower. but cases does not count here. 
we have to check lexicographically both string. 
if both are same irrespective of their cases, print 0, if string one is less than string 2, 
then print -1, if string 2 is less that string 1, then print 1. 


*/

int main(){

        string s1, s2;
        cin>>s1>>s2;

        // both string size is same 
        for(int i=0; i<s1.size(); i++)  // as case does not matter, making the both string to lower case 
        {
                s1[i] = tolower(s1[i]);
                s2[i] = tolower(s2[i]);
        }

        for(int i=0; i<s1.size(); i++)
        {
                if(s1[i] == s2[i])
                {
                        continue;
                }
                else if(s1[i] < s2[i])
                {
                        cout<<-1<<endl;
                        return 0;
                }
                else if(s1[i] > s2[i])
                {
                        cout<<1<<endl;
                        return 0;
                }
        }

        cout<<0<<endl;

        return 0;
}


