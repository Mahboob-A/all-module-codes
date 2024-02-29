



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

we will be given n as the number of total pages of a book, and 1 to 7 lines of input as 1 to 7 represents 
7 days of a week, this 7 input represents how many pages he can read each day. 
we have to determine when he reads the total_page that has given input first, we have to 
determine on which day he completes reading all the pages. 

*/

const int N = 1010;
int main(){


        int total_page, max_read_per_day[N];
        cin>>total_page;

        // 7 days of a week 
        int max_day = 7;

        // taking input of max_read_per_day 
        for(int i=1; i<=max_day; i++)
        {
                cin>>max_read_per_day[i];
        }

        int curr_page = 0, day = 1;
        while(1)
        {
                // just adding the value stored in each day 
                curr_page += max_read_per_day[day];
                // if we have reached to total page then break 
                if(curr_page >= total_page)
                {
                        break;
                }

                // if day become 7, then make day to 1 else add 1 to day 
                if(day == 7)
                {
                        day = 1;
                }
                else 
                {
                        day += 1;
                }
        }

        // print the day on which day he will complete reading all n pages 
        cout<<day<<endl;



        return 0;
}


