







// /*  
// ===========
// YCPC by Phitron | 1st Round : Contest 2 | 2023
// ===========
// 060323, Monday 
// Time : 07.30 pm 
// ===========

// ===========
// QS =  D
// ===========

// ===========
// Mahboob Alam 
// ===========
// */


// #include <bits/stdc++.h>
// using namespace std;

// // #define loop(i, x, y) for(int i=x; i<y; i++)
// // #define Loop(i, x, y) for(int i=x; i<=y; i++)
// // #define loop(y) for(int i=true; i<y; i++)
// // #define For(y) for(int i=false; i<=y; i++)

// #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define loop(i, y) for(int i=true; i<y; i++)
// #define For(i, y) for(int i=false; i<=y; i++)
// #define pii pair<int, int>
// #define f first
// #define s second
// #define vec vector<int>
// #define vecPii vector<pair<int, int>> 
// #define pb push_back 
// #define ppb pop_back 
// #define DOUBLE_INF 1e18 
// #define INT_INF 1e8
// #define ll long long
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
// #define no_ans cout<<-1<<"\n"
// #define en '\n'
// vector<int>answer;
// vector<pii>allSrc;
// pii src, destination;

// //priority_queue<int, vec, greater<int>>q;


// /* ================================================================ */





// const int MAXN = 1e5 + 10;
// int n, arr[MAXN];
// int odd, even;

// bool find_odd(int x)
// {
//         if((x & 1) == 1)
//         {
//                 return true;
//         }
//         else
//         {
//                 return false;
//         }
// }


// bool find_even(int x)
// {
//         if((x & 1) == 0)
//         {
//                 return true;
//         }
//         else
//         {
//                 return false;
//         }
// }

// // switch the answer of arr[i] and arr[i + 1] to eliminate this much if checking 
// // if arr[i] mod != arr[i + 1] && arr[i] <= arr[i + 1] shoulbe the anser to yes to discard these extra calls 
// void solve2()
// {
//         cin>>n;
//         for(int i=0; i<n; i++)
//         {
//                 cin>>arr[i];
//         }
        
//         sort(arr, arr + n);
//         bool ans = false;
//         for(int i=0; i<n; i++)
//         {
//                 if(find_odd(arr[i]))
//                 {
//                         odd = arr[i];
//                         if(arr[i] <= arr[i +1])
//                         {
//                                 if(find_even(arr[i+1]))
//                                 {
//                                         even = arr[i + 1];
//                                         if(odd > even)
//                                         {
//                                                 ans = true;
//                                                 // break;
//                                         }
//                                 }
//                         }
//                 }
//                 else if(find_even(arr[i]))
//                 {
//                         even = arr[i];
//                         if(arr[i] <= arr[i + 1])
//                         {
//                                 if(find_odd(arr[i + 1]))
//                                 {
//                                         odd = arr[i + 1];
//                                         if(odd > even)
//                                         {
//                                                 ans = true;
//                                                 // break;
//                                         }
//                                 }
//                         }
//                 }
//         }

//         if(ans) yes;
//         else no;
// }


// void solve()
// {
//         cin>>n;
//         for(int i=0; i<n; i++)
//         {
//                 cin>>arr[i];
//         }
        
//         sort(arr, arr + n);
//         bool ans = false;

//         for(int i=0; i<n - 1; i++)
//         {
//                 // if(arr[i] % 2 != arr[i + 1] % 2 && arr[i] <= arr[i + 1])
//                 // {
//                 //         ans = true;
//                 //         break;
//                 // }
//                 if((arr[i] & 1) != (arr[i + 1] & 1) && arr[i] <= arr[i + 1])
//                 {
//                         ans = true;
//                         break;
//                 }
//         }

//         if(ans) yes;
//         else no;

// }

// int main(){

//         // FIO 

//         int t;
//         cin>>t;
//         while(t--)
//         {
//                 solve();
//         }
        


//         return 0;
// }






/*  
===========
YCPC by Phitron | 1st Round : Contest 2 | 2023
===========
060323, Monday 
Time : 07.30 pm 
===========

===========
QS =  D
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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en '\n'
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */



#include <iostream>
using namespace std;


const int MAXN = 1e5 + 10;
int n, arr[MAXN];
int odd, even;

void solve()
{
        int n;
        cin >> n;
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) 
        {
                cin >> arr[i];
                
                if(arr[i] % 2 == 0)
                {
                        even++;
                }
                else
                {
                        odd++;
                }
        }


        if (even && odd) 
        {
               yes;
        } 
        else 
        {
                no;
        }
}

int main() {
        FIO
        int t;
        cin >> t;
        while (t--) 
        {
                solve();
        }
        return 0;
}


