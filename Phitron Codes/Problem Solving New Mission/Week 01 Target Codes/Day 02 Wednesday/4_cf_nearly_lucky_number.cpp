

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
QS = 04 || A. Nearly Lucky Number || https://codeforces.com/problemset/problem/110/A
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

we will be given an integer, n. the lucky numbers are 7 and 4. 
we have to check how many lucky numbers are in the n, and if the count of the 
lucky numbers in n is itselt 7 or 4, then it is nearly lucky number 
*/

int main(){

        /* 
        int count = 0;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
                if(s[i] == '7' || s[i] == '4')
                {
                        count++;
                }
        }
        if(count == 7 || count == 4)
        {
                cout<<"YES"<<endl;
        }
        else 
        {
                cout<<"NO"<<endl;
        }

        */

        
        long long n;
        cin>>n;

        int count = 0;
        while(n!=0)
        {
                // if(n%10 == 7 || n%10 == 4)
                long long x = n%10;
                if(x==7 || x == 4)
                {
                        count++;
                }
                n/=10;
        }

        if(count == 7 || count == 4)
        {
                cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }
        



        return 0;
}
