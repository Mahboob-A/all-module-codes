







/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 01 : 210223, Tuesday
Time : 10.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 8 || B. Pashmak and Flowers || https://codeforces.com/problemset/problem/459/B
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=0; i<y; i++)
// #define For(y) for(int i=1; i<=y; i++)

#define loop(i, y) for(int i=0; i<y; i++)
#define For(i, y) for(int i=1; i<=y; i++)
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

the concept of this problem is that we will be given n and n elements. 
we have to print the difference of max and min of n elements in the array as the beauty_difference.
and we then need to count how many pair we get in the array i and j, whose 
substract would equal to beauty_difference. 

*/
const int N = 2e5 + 100;
long long arr[N];

int main(){

        long long n;
        cin>>n;

        long long mn_cnt = 0, mx_cnt = 0;
        
        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
        }       

        // sort the array 
        sort(arr, arr + n);

       long long beauty_diff = arr[n-1] - arr[0];

        // cout<<mx_cnt<<" "<<mn_cnt<<endl;

        // if the array input n values are all same, so arr[0] and arr[n-1] will be same, 
        // here beauty_diff will be zero, and the maximum of we can make pair of n * (n-1) / 2 times 
        if(arr[0] == arr[n-1])
        {
                cout<<beauty_diff<<" "<<n*(n-1)/2<<endl;
        }
        else  // else the maximum of pari could be mx count * mn count 
        {
                // count the number of max and min elements, as arr[0] will be minimum and arr[n-1] will always be the maximum 
                for(int i=0; i<n; i++)
                {
                        if(arr[i] == arr[n-1])
                        {
                                mx_cnt++;
                        }
                        else if(arr[i] == arr[0])
                        {
                                mn_cnt++;
                        }
                }
                cout<<beauty_diff << " "<<mx_cnt * mn_cnt <<endl;
        }


        return 0;
}

// this code is correct but gets tle as it takes O(n^2) but I need to give ans in o(1) as dataset is huge 
/*  
        long long mx = -1, mn = 1e18;
        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
                if(mx < arr[i]) mx = arr[i];  // getting the max and min 
                if(mn > arr[i]) mn = arr[i];
        }

        int beauty_diff = mx - mn;
        int count = 0;
        // checking each pair to check if difference of i and j equal to beauty_diff so that they could be a pair 
        for(int i=0; i<n; i++)
        {
                for(int j=i+1; j<n; j++)
                {
                        if(abs(arr[i] - arr[j])  == beauty_diff)
                        {
                                count++;
                        }
                }
        }

        cout<<beauty_diff<<" "<<count<<endl;

*/