








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
QS = 1  || A. Petr and Book || https://codeforces.com/problemset/problem/139/A
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

we will be given n solders and n number of heights of all n soldiers. 
the soldiers are positoned in circular fashion, i.e if n = 5, then n-1 'th solder is 4 and he's left soldiers is 
solder 0. so, we have to go round. int j = (i+1) % n, does this. 

and while checking we are just updating the height of i and j solders min height and storing their pos. 
and as the soldiers are positoned form 1 in question, we are just adding extra 1 to the answer.  
  

*/

int main(){


        // sliding window technique 
        int n, height[1010];

        cin>>n;
        for(int i=0; i<n; i++)
        {
                cin>>height[i];
        }

        int left = 0, right = 1;
        int mn = abs(height[left] - height[right]);
        int left_min = left, right_min = right;
        
        for(int i=0; i<n; i++)
        {
                int j = (i+1) % n;
                if(mn > abs(height[i] - height[j]))
                {
                        mn = abs(height[i] - height[j]);
                        left_min = i;
                        right_min = j;
                }
        }

        cout<<left_min+1<<" "<<right_min+1<<endl;


        return 0;
}

