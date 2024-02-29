


/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 02 : 150223, Wednesday 
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 01 || A. Beautiful Year || https://codeforces.com/problemset/problem/271/A
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

we will be given a year with distinct value. we have to 
print the strictly grater year with distinct value 
*/

bool is_distinct_year(int y)
{
        string y_str = to_string(y);
        // sorting the string 
        sort(y_str.begin(), y_str.end());

        // as year wil have only 4 char. 
        // and we are checking [i+1], when i = 2 then we will check i+1 = 3 which is the bound of the str 
        // or i<y_str.size() - 1  
        for(int i=0; i<=2; i++)
        {
                if(y_str[i] == y_str[i+1])
                {
                        return true;
                }
        }
        return false;
}


int main(){

        int y;   // initial distinct year 
        cin>>y;
        y++; // incrementing as we need greater year than y 
        while(is_distinct_year(y))
        {
                y++;// if the func returns true then the year value has dupe then increment by one 
        }

        // if while loop receives false, then the loop breaks and print the year 
        cout<<y<<endl;

}