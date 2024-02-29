

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 02 : 150223, Wednesday 
Time : 10.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 08 || A. Perfect Permutation || https://codeforces.com/problemset/problem/233/A
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


/* ================================================================ */

/*  
Understanding: 

we will be given an integer, n. we have to print the n times 1, 2, 3, ... n values 
swapping i to i + 1 index. 
if n is odd, it is not possible to swap all the 1, 2, 3, n values because the n'th element 
would not have any i+1 element to be swapped, in this case print -1 

here's the condition: 
A perfect permutation is such permutation p that for any i (1 ≤ i ≤ n) (n is the permutation size) 
the following equations hold => ppi = i and pi ≠ i.  (it means they will be swapped)
Nickolas asks you to print any perfect permutation of size n for the given n.
*/

int main(){

        int n;
        cin>>n;
        if(n%2 == 1)
        {
                cout<<-1<<endl;
        }
        else 
        {
                // running loop form 1 as because the problem tell n starts from positive integer 
                // for(int i=1; i<n-1; i++)
                // {
                //         // printing the next element first then i'th element, 
                //         // this way the printing will be in swapped behavoiur of i and i+1 element
                //         cout<<i+1<<" "<<i<<" ";
                //         i++;  // incrementing i as i+1 element is processed 
                // }
                // or this one 
                for(int i=1; i<=n; i+=2)   // i+=2, incrementing i here 
                {
                        cout<<i+1<<" "<<i<<" ";
                }
        }


        return 0;
}