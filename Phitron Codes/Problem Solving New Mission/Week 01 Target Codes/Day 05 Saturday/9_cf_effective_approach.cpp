


/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 05.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 09  || B. Effective Approach || https://codeforces.com/problemset/problem/227/B
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
we will be given a array and some query, q1, q2, q3...qn 
we have to tell, in which position we would find qn value if 
the search the array from i=1 i<=n and i=n i>=1 ===> for this both traversal, 
we just have to tell in which position we would get the value for both traversal 

*/

// another Approach : https://codeforces.com/contest/227/submission/23723284 (same Approach but uses extra space)

const int N = 1e5 + 5;
int n, q, arr[N];


/* checking in this way gets TLE as it calculatses each time 
int find1(int search_val)
{
        int comparison = 0;
        for(int i=1; i<=n; i++)
        {
                if(arr[i] == search_val)
                {
                        comparison++;
                        break;
                }
                comparison++;
        }
        return comparison;
}

int find2(int search_val)
{
        int comparison = 0;
        for(int i=n; i>=1; i--)
        {
                if(arr[i] == search_val)
                {
                        comparison++;
                        break;
                }
                comparison++;
        }
        return comparison;
}

*/



int main(){

        cin>>n;

        /*  
        I am taking the value to input, and I am taking the value as index of the array, 
        I am assigning the i'th position. if we take int pos arr[5] we will get the 
        5 value's i'th pos if we iterate from 1 to n. 

        */
        for(int position=1; position<=n; position++)
        {
                int value;
                cin>>value;
                arr[value] = position;
        }

        cin>>q;

        long long ans1 = 0, ans2 = 0;
        for(int i=0; i<q; i++)
        {
                int search_val;
                cin>>search_val;
                // as arr stores the left to right positions of any value, directly assigning it, taking O(1) tc 
                ans1 += arr[search_val];
                // to get the i=n, i>=1 (reverse traversal) pos of any value, we first substract the value stored in the array from n 
                // and then add 1 to it as we want from n = 1. (i=n, i>=1; i--) (if index was stared from zero, 
                // we then needed calculate to n - arr[search_val] - 1 to get the position form reverse order) 
                // takes O(1) tc 
                ans2 += n - arr[search_val] + 1; 
        }

        cout<<ans1<<" "<<ans2<<endl;

        return 0;
}


