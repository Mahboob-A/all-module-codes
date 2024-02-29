




/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 08.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =   3 ||   B. Polo the Penguin and Matrix  ||   https://codeforces.com/problemset/problem/289/B
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=true; i<y; i++)
// #define For(y) for(int i=false; i<=y; i++)

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=true; i<y; i++)
#define For(i, y) for(int i=false; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
#define ll long long
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

a matrix of n * m is given so lets make it flat by taking linear array of n * m 
we need to find the minimum number of changes to make to make all values are equal adding or substracting 
d value. 

// the algo is : take the mid value, and if 
abs of mid value - arr[i] is not even, then we can not make all the vlaues 
equal 
and if abs of mid value - arr[i] is even, then ans is abs of mid value - arr[i] / d 

- take the mid pos of the array 
- sort the array 
        - for i = 1 to n 
                - if abs((arr[i] - arr[mid]) % d  == 0 )
                        - ans = -1 
                        - break
                - ans += abs((arr[i] - arr[mid]) / d)

*/






int main(){

        FIO 

        int n, m, d;
        cin>>n>>m>>d;

        int size = n * m;
        int arr[size];

        for(int i=0; i<size; i++)
        {
                cin>>arr[i];
        }

        sort(arr, arr + size);
         
        int mid = size / 2;

        int count = 0;
        for(int i=0; i<size; i++)
        {
                if(arr[i] > arr[mid])
                {
                        if((arr[i] - arr[mid])  % d == 0)
                        {
                                count += (arr[i] - arr[mid]) / d;
                        }
                        else 
                        {
                                count = -1;
                                break;
                        }
                }
                else if(arr[i] < arr[mid])
                {
                        if((arr[mid] - arr[i]) % d == 0)
                        {
                                count += (arr[mid] - arr[i]) / d;
                        }
                        else 
                        {
                                count = -1;
                                break;
                        }
                }
        }

        // with abs 
        // for(int i=0; i<size; i++)
        // {
        //         if(abs(arr[i] - arr[mid]) % d != 0)
        //         {
        //                 count = -1;
        //                 break;
        //         }

        //         count += (abs(arr[i] - arr[mid])) / d;
        // }

        cout<<count<<"\n";

        return 0;
}





