
/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 01 : 140223, Tuesday 
Time : 08.00 pm 
===========

===========
QS = 02 || A. Beautiful Matrix || https://codeforces.com/problemset/problem/263/A
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

a matrix of 5x5 will be given all 0's and only one index as 1. 
we need to move the 1 to center of the matrix i.e at (3, 3)
we just need to trace the 1 pos and abs(i-3) + abs(j-3) is the answer 

*/

int matrix[5][5];
int n, m;
int main(){

        // pii src;
        int x, y;
        for(int i=0; i<5; i++)
        {
                for(int j=0; j<5; j++)
                {
                        cin>>matrix[i][j];
                        if(matrix[i][j] == 1)
                        {
                                // src = {i, j};
                                x = i;
                                y = j;
                        }
                }
        }

        // int move = abs(src.f - 3) + abs(src.s - 3);
        int move = abs(x - 3) + abs(y - 3);
        cout<<move<<endl;

        return 0;
}