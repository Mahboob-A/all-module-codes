

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
QS = 07 || A. Ultra-Fast Mathematician|| https://codeforces.com/problemset/problem/61/A
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

we will be given two numbers of equal length. if num1 of i is same as num2 of i, 
then add 0 to the answer and if they differ, then add 1 in the answer 
*/

int main(){

        string s1, s2, ans = "";
        cin>>s1>>s2;
        for(int i=0; i<s1.size(); i++)
        {
                if(s1[i] == s2[i])
                {
                        ans += '0';
                }
                else 
                {
                        ans += '1';
                }
        }

        cout<<ans<<endl;

        return 0;
}

