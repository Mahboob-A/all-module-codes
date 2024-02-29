

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
QS = 01 || A. I_love_%username% || https://codeforces.com/problemset/problem/155/A
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

we will an arry of n size. 
we have to check the number of max and min till i'th position from index 1. 
i.e if we are in index 5, then how many strictly gearter of smaller number till ith pos. 
*/

int main(){

        int n;
        cin>>n;
        vec scores(n, 0);
        for(int i=0; i<n; i++)
                cin>>scores[i];

        // initially taking the 0'th pos as the best and worst score and then updating them 
        int best_score = scores[0];  // scores[0] will not be included as question specified 
        int worst_score = scores[0];
        int amazing_score = 0;

        for(int i=1; i<n; i++)
        {
                if(scores[i] > best_score)
                {
                        best_score = scores[i];
                        amazing_score++;
                }
                else if(scores[i] < worst_score)
                {
                        worst_score = scores[i];
                        amazing_score++;
                }
        }

        cout<<amazing_score<<endl;

        return 0;
}
