







/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 07 : 270223, Monday 
Time : 09.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS =     ||   B. Sort the Array     ||     https://codeforces.com/problemset/problem/451/B
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
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define no_ans cout<<-1<<"\n";
#define en '\n';
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

a array of n distinct element is given. the task is if it is poosible to sort the array with only one 
swap and if yes then print the incedex else no. 

so, running from the 0 to n - 1 , get in which index arr[i] became greater than arr[i + 1] and store it in left variable 
and running a loop from the reverse, take the index from which index the arr[i] became smaller than its previous element 
i.e arr[i] < arr[i - 1] and store it in right variable

after then reverse(arr + left, arr + right + 1);
run loop again from 0 to n - 1, if arr[i] is still > arr[i + 1]  then answer is no else yes  



*/




const int MAX = 1e5 + 5;
int arr[MAX];

int main(){

        FIO     

        int n, left = 1, right = 1;    // as if left and right are same then print 1 1 
        cin>>n;
        for(int i=1; i<=n; i++)
        {
                cin>>arr[i];
        }

        for(int i=1; i<n; i++)
        {
                if(arr[i] > arr[i+1])
                {
                        left = i;
                        break;
                }
        }

        for(int i=n; i>0; i--)
        {
                if(arr[i] < arr[i - 1])
                {
                        right = i;
                        break;
                }
        }

        reverse(arr + left, arr + right + 1);
        
        // swap wont work 
        // swap(arr[left], arr[right] );

        // for(int i=1; i<=n; i++)
        // {
        //         cout<<arr[i]<<" ";
        // }
        // cout<<en;

        bool flag = true;
        for(int i=1; i<n; i++)
        {
                if(arr[i] > arr[i + 1])
                {
                        flag = false;
                        break;
                }
        }

        if(flag)
        {
                cout<<"yes"<<en;
                cout<<left<<" "<<right<<en;
        }      
        else   
        {
                cout<<"no"<<en;
        }


        //  0 based but 0 based answer will not be accespted i
        // int n, left = 0, right = 0;
        // cin>>n;
        // for(int i=0; i<n; i++)
        // {
        //         cin>>arr[i];
        // }

        // for(int i=0; i<n-1; i++)
        // {
        //         if(arr[i] > arr[i+1])
        //         {
        //                 left = i;
        //                 break;
        //         }
        // }

        // for(int i=n-1; i>=0; i--)
        // {
        //         if(arr[i] < arr[i - 1])
        //         {
        //                 right = i;
        //                 break;
        //         }
        // }

        // // reverse(arr + left, arr + right + 1 );
        
        // swap(arr[left], arr[right] );

        // for(int i=0; i<n; i++)
        // {
        //         cout<<arr[i]<<" ";
        // }
        // cout<<en;

        // bool flag = true;
        // for(int i=0; i<n-1; i++)
        // {
        //         if(arr[i] > arr[i + 1])
        //         {
        //                 flag = false;
        //                 break;
        //         }
        // }

        // if(flag)
        // {
        //         cout<<"yes"<<en;
        //         cout<<left<<" "<<right<<en;
        // }      
        // else   
        // {
        //         cout<<"no"<<en;
        // }
        return 0;
}





	