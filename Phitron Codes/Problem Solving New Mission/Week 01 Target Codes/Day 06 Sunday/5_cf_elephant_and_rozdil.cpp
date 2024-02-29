






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
QS = 5 || A. Little Elephant and Rozdil || https://codeforces.com/problemset/problem/205/A
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

we will be given n and n elements. we have to check the min element in the array. 
if there are only one min value, then print the index of the value based on 1 index, and 
if there are more than 1 same minimum value, then print Still Rozdil.

so, basically, I am taking a variable to store the previous minimum value before updating the current minimum value. 
and whenever I see the min value, I am storing the index of the value. 

and if last_min and curr_min does not equal, then there are only one min value, in this case, print its index and if 
both are equal, then there must be more than one min value, so do not print its index. 

*/

const int N = 1e5 + 10;
int n, arr[N];

int main(){

        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
        }

        long long mn = 1e18;
        int last_min = -1;
        int indx = -1;
        for(int i=0; i<n; i++)
        {
                
                if(mn >= arr[i])
                {
                        last_min = mn;  // storing the last_min before updating curr_min 
                        mn = arr[i];
                        indx = i;
                }
        }

        if(last_min != mn)  // if they are not equal, then there must be single min value. 
        {
                cout<<indx + 1<<endl;
        }
        else 
        {
                cout<<"Still Rozdil"<<endl;
        }


        return 0;
}


