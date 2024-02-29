
/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 10.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 07  || A. Team || https://codeforces.com/problemset/problem/231/A
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

we will be given n number and n lines of input 
each n line has 3 input, say a, b, and c. if any 2 of a, b and c  input as 1, 
then increment 1 to final answer. 

*/

int main(){

        int n;
        cin>>n;

        int attemp_questions = 0;
        int count;
        for(int i=0; i<n; i++)
        {
                count = 0;
                int a, b, c;
                cin>>a>>b>>c;
                if(a == 1)
                        count++;
                if(b == 1)
                        count++;
                if(c == 1)
                        count++;

                if(count >= 2)
                {
                        attemp_questions++;
                }
        }

        cout<<attemp_questions<<endl;


        return 0;
}


