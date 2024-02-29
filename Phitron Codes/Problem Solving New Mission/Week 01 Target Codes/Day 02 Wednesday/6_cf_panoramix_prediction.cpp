

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
QS = 06 || A. Panoramix's Prediction || https://codeforces.com/problemset/problem/80/A
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

we will be given n and m. (<=nm<=50) and we have to tell if m is immediate greater 
prime of n 
*/

bool is_prime(int val)
{
        if(val < 2)
        {
                return false;
        }

        for(int i=2; i * i <=val; i++)
        {
                if(val % i == 0)
                {
                        return false;
                }
        }
        return true;


} 

int prime[15];

int main(){

        // ac code 
        int n, m;
        cin>>n>>m;
        // bool is_next_prime = false;
        int pos = -1;
        for(int i=n+1; i<=m; i++)
        {
                if(is_prime(i))   // checking the val if it is prime, 
                {
                        // if i is prime, we need to check if the prime val is exactly m,  
                        // if m, then print yes, if the prime is not m, then there must be more that one prime except m 
                        // in this case, m would not be immediate greater prime of n, so print no in this case 
                        // if(i==m) 
                        // {
                        //         // is_next_prime = true;
                        //         // break;
                        //         cout<<"YES"
                        // }
                        // else
                        // {
                        //         is_next_prime = false;
                        //         // break;
                        // }
                        pos = i;
                        break;
                }
        }       

        // if(is_next_prime)
        // {
        //         cout<<"YES"<<endl;
        // }
        // else 
        // {
        //         cout<<"NO"<<endl;
        // }

        if(pos == m)
        {
                cout<<"YES"<<endl;
        }
        else 
        {
                cout<<"NO"<<endl;
        }


        // ac code 
        /* 
        prime[0] = 2;
        int pos = 1; 
        for(int i=3; i<=50; i+=2)   // calculating of the prime till 50 
        {
                if(is_prime(i))
                {
                        prime[pos++] = i;
                }
        }

        int n_prime = -1;
        for(int i=0; i<15; i++)
        {
                // cout<<prime[i]<<endl;
                if(prime[i] == n)
                {
                        n_prime = i;    // getting the index of n 
                }
        }

        // cout<<n_prime<<endl;
        if(prime[n_prime+1] == m)
        {
                cout<<"YES"<<endl;
        }
        else 
        {
                cout<<"NO"<<endl;
        }

        */
        return 0;
}
