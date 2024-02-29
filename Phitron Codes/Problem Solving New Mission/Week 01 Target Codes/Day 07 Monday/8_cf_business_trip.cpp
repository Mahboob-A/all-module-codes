







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
QS = 8 || A. Business tripl || https://codeforces.com/problemset/problem/149/A
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

we will be given k, and 12 elements. 
k represents the minimum height (in cm) the flower plant needs to grow by watering, 
and the 12 1 <= i <= 12 represents the 12 months and each i 'th value of 12 months 
represents how much cm the plant would grow if petya waters in this month.

so we need in how many minimum of months, petya could water the plant and it would grow 
k cm. 

so, we just sort the vector or array in descending order. and if sum += arr[i] >= k the break and cout sum 
or sort the array in ascending order and iterate from the n-1 pos of the array and 
count the sum. 


*/

int main(){


        int k, arr[20];

        cin>>k;

        if(k == 0)
        {
                cout<<0<<endl;
                return 0;
        }

        for(int i=1; i<=12; i++)
        {
                cin>>arr[i];
        }

        // sorting the array in descending order, arr + 1 and arr + 13 as i have taken inmput from 1 index of array 
        sort(arr + 1, arr + 13, greater<>());

        int sum = 0, months = 0;
        bool found = false;

        for(int i=1; i<=12; i++)
        {
                sum += arr[i];
                months++;
                // cout<<"i "<<i<<" "<<sum<<endl;
                if(sum >= k)
                {
                        found = true;
                        break;
                }
        }

        if(found)
                cout<<months<<endl;
        else 
                cout<<-1<<endl;
        return 0;
}