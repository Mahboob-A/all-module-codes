

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 07 : 200223, Monday
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 1  || B. Xenia and Ringroad || https://codeforces.com/problemset/problem/339/B
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

we will be given n, and m value, and m number of elements. 
pos = 1 
for (int i=0; i<m; i++)
{
        in house _ no ;
        cin>> house _ no ;
}

we have to check the pos  and the house_no is given input. 
if the pos in less than the house inut, then we need to go back to that i'th positon. 
and count that stept how much we needed to go 

*/

int main(){

        int total_house, total_work;
        cin>>total_house>>total_work;

        long long curr_pos = 1, minimum_work_needed = 0;
        for(int i=0; i<total_work; i++)
        {
                int house_no;
                cin>>house_no;

                if(curr_pos <= house_no)
                {
                        // if the curr_position is less than the house no then we need to ho the house, 
                        // and the numbre of steps will be our minimum_work_needed, so, count the houese no 
                        // and substract the curr_position as we are heading to that houese from this curr_position
                        // and make that house as our new curr_position
                        minimum_work_needed += house_no - curr_pos;
                        curr_pos = house_no;
                }
                else if(curr_pos > house_no)
                {
                        // if curr_position is greater than the house no, we need to go back to the house, 
                        // so as it is cloclwise, substract total_house number from the curr_position, 
                        // then we will be at the beginning of all houses, then add the house no we need to go,
                        // and make this house as our new curr_position 
                        minimum_work_needed += (total_house - curr_pos) + house_no;
                        curr_pos = house_no;
                }
        }

        cout<<minimum_work_needed<<endl;



        return 0;
}