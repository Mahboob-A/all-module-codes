

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 04 : 170223, Friday  
Time : 08.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 02 || A. Tram || https://codeforces.com/problemset/problem/116/A
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

we will be given n and n line of ai and bi input. 
the ai is the passenger those are left the tram and bi is the those are who 
stepped in the tram at that i'th position. 

we have to calculate the maximum number that we may find that is available till any i'th position 


*/


int main() {

        int n;
        cin>>n;
        int total_passenger = 0;
        int max_passenger = 0;

        for(int i=0; i<n; i++)
        {
                int  passenger_out, passenger_in;
                cin>>passenger_out>>passenger_in;  // taking input of passenger that in out and then the passenger stepped in the tram 

                // total passenger is the total passenger - passenger those left the tram + those who stepped in the tram 
                total_passenger = (total_passenger - passenger_out) + passenger_in;  
                max_passenger = max(max_passenger, total_passenger);  // now taking the maximum total_passenger encountered in any i'th case 


        }

        // outputting the max_passenger that is the minimum capacity of the tram 
        cout<<max_passenger<<endl;

    return 0;
}