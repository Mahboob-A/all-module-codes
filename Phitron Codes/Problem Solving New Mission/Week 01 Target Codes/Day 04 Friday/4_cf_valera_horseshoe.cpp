


/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 04 : 170223, Friday  
Time : 08.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 04 || A. Is your horseshoe on the other hoof? || https://codeforces.com/problemset/problem/155/A
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

we will be given 4 elements. 
we have to tell the the minimum number of extra elements we need 
to make all the four elements distinct 
*/

int main(){

        // as 4 elements would be given
        set<int>st;

        for(int i=0; i<4; i++)
        {
                int val;
                cin>>val;
                st.insert(val);
        }

        // as set only contains original elements, no dupes, so, 
        // set will remove any dupes from the four elements. 
        // now set has all the distinct elements, and as we need 4 distinct colors,
        // substract the size of set with 4, this is the minimum number of extra distinct color is 
        // needed to make all the four colors distinct
        cout<< 4 - st.size()<<endl;

        return 0;
}