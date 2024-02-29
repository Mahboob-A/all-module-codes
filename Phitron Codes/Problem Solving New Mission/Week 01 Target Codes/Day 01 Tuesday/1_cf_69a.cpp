

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 01 : 140223, Tuesday 
Time : 08.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 01 || A. Young Physicist || https://codeforces.com/problemset/problem/69/A
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

we need to take an array of 3 size with 0. 
we then cin x, y, z value of n times keep adding  them in arr[i] pos.
the values will be -100<=val<=100 so at last if all the indexes are 0, then it is equilibrium else no  
*/

int n, m;

int arr[] = {0, 0, 0};

int main(){

        int n, plus =0,  minus = 0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                int x, y, z;
                cin>>x>>y>>z;
                arr[0] += x;
                arr[1] += y;
                arr[2] += z;
        }

        if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
        {
                cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }

        // // cout<<plus<<" "<<minus<<endl;

        // if(-plus == minus)
        // {
                
        // }
        // else
        // {
        //         cout<<"NO"<<endl;
        // }


        return 0;
}