


/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 03 : 160223, Thursday  
Time : 11.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 02 || A. Insomnia cure || https://codeforces.com/problemset/problem/148/A
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

we will be given k, l, m, n and d. d is 1<=d<=10^5. 
we just have to check how many i of d loop we could devide with k, l, m, n. 
*/




#include <iostream>
using namespace std;

int main() {

        int k, l, m, n, d;
        cin>>k>>l>>m>>n>>d;

        int count = 0;
        for(int i=1; i<=d; i++)
        {
                if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
                {
                        count++;
                }
        }

        cout<<count<<endl;

    return 0;
}
