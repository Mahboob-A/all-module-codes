


/*  
Week 06 : Intro To Dynamic Programming 
Module 20: Intro To Dynamic Programming
Mod date: 210123, Satuerday
Watch date: 120223, Sunday,10.00 pm 

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

long long arr[101];
long long fib(long long n)
{
        // base case
        if(n==1 || n==2)
        {
                return 1;
        }

        // check if n is already computed, then return its value 
        if(arr[n] != 0)
        {
                return arr[n];
        }

        // if value of fib(n) is not computed, then compute the value, store it in arr[n], and then return the value 
        arr[n] = fib(n-1) + fib(n-2);
        return arr[n];

}

int main(){

        cout<<fib(5)<<endl;
        cout<<fib(10)<<endl;
        cout<<fib(50)<<endl;
        return 0;
}