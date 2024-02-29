

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 06 : 190223, Sunday 
Time : 07.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 6  || A. Hexadecimal's theorem || https://codeforces.com/problemset/problem/199/A
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

fib series problem 
*/

const int N = 1e5 + 10;
int n, k, arr[N];

int main(){


        cin>>n;
        if(n <= 2)
        {
                cout<<"0 0 "<<n<<endl;
                return 0;
        }

        arr[0] = 0;
        arr[1]  = 1;
        k = 1;

        while(1)
        {
                if(arr[k] + arr[k-1] == n)
                {
                        break;
                }

                k++;

                arr[k] = arr[k-1] + arr[k-2];

        }

        cout<<arr[k]<<" "<<arr[k-2]<<" "<<arr[k-3]<<endl;
        return 0;
}

