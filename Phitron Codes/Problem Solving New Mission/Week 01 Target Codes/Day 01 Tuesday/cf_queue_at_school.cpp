
/// link info not updated 
/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 01 : 150223, Wednesday
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 05 || B. Queue at the school || https://codeforces.com/problemset/problem/266/B
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

we wil be given n, the size of string ans t, an integer as second. 
we need to iterate over the t times and swap the string inputStr only if 
inputStr[i] == B ans inputStr[i+1] == G. so, run inputStr loop inputStr.sieze - 2 times to exempt out of bound error 

*/

int n, t;
string inputStr;

int main(){

        cin>>n>>t>>inputStr;
        for(int i=0; i<t; i++)  // t is second 
        {
                for(int j=0; j<n-1; j++)  // running the input str loop till n-2  to access j+1 pos 
                {
                        if(inputStr[j] == 'B' && inputStr[j+1] == 'G')
                        {
                                inputStr[j] = 'G';
                                inputStr[j+1] = 'B';
                                // swap(inputStr[i], inputStr[i+1]);
                                j++;  // now skip the i+1 pos as it is already considered 
                        }
                }
        }

        cout<<inputStr<<endl;


        return 0;
}