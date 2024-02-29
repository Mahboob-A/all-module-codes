











/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 10.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 3 || A. Yaroslav and Permutations || https://codeforces.com/problemset/problem/296/A
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

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
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

we will be given n and n elemets. 
we have to determine if we could arrange the array elements in such a way that no two adjacent elements 
are same, i.e an array where any two neighboring elements would be distinct. 

so, to be distinct any two adjacent elements, we need to check which element 
has max input in the array. if the number of occurance of that element is t, then 
to be distinct any two adjacent element, t <= n + 1 / 2 this condition must be true, or 
the sequence could not be made. 

*/

const int N = 1010;
vec V(N);

int main(){

        FIO 
        
        int n; 
        cin>>n;
        for(int i=0; i<n; i++)
        {
                int x;
                cin>>x;
                V[x]++;
        }

        int mx = *max_element(V.begin(), V.end());

        if(mx <= (n + 1) / 2)
        {
                cout<<"YES"<<endl;
        }
        else 
        {
                cout<<"NO"<<endl;
        }



        return 0;
}