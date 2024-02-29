
/*  
Week 06 : Intro To Dynamic Programming 
Module 20: Intro To Dynamic Programming
Mod date: 210123, Satuerday
Watch date: 120223, Sunday, 04.00 pm 

20-3 : back to fibonacci 
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
#define INT_INF 1e9 
const int N = 1e5+100;
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;


int fib(int n)
{
        if(n==1 || n==2)
        {
                return 1;
        }

        // if(n<=2)
        // {
        //         return 1;
        // }

        return fib(n-1) + fib(n-2);

        // why the below metod won't work 
        // int a = fib(n-1);   // this one returns 1 in the base case
        // int b = fib(n-2);   // this one also returns 1 in the base case 
        // return fib(a + b);  // so, 1 + 1 is 2, and when a + b is called again, we basically passed 2 in the parameter
        //                                 // and it returns 1 in the parameter, hense in this way, we can not find fib of any value 
}

int main(){

        n = 48;
        m = fib(n);
        cout<<m<<endl;


        return 0;
}