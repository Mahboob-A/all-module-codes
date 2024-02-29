















/*  
===========
Self Learning 
===========
Topic :       Math 
Basic Number theory, Moudlar arithmatic, Basic combinotarics 

part 2 : num of divisors / factors of 1 to n numbers  
===========
Time : 
090323, Thursday 
===========
Link : 
Maths for DSA/CP : All You Need To Know || Utkarsh Gupta || https://youtu.be/tDM6lT-qjys
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
#define forn(y) for(int i=0; i<y; i++)
#define For(y) for(int i=1; i<=y; i++)
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

/*  
Understanding: 


*/


// square root of n time || naive approach for counting 
// all factors from 1 to n 
// almost n root n tc 
void naive_approach(int n)
{
        int cnt = 0;
        for(int i=1; i * i <=n; i++)
        {
                if(n % i == 0)
                {
                        cnt++;
                }

                if(i != n / i)
                {
                        cnt++;
                }

        }

        // why it is not efficient for checking factors for n numbers of values //  
        /*  
        this approach is checking redundantly. if n = 49, then checking 1, 2, 3, 4, 5, are redundant as none of them are factors of 49 
        so, if we could eliminate these redundant checking, we could make it faster 
        */

        cout<<"n : "<<n<<"  factors :  "<<cnt<<en;
}

void efficient_approach(int n)
{
        /*  
        to make the algorithm efficient, we can find the multiple values of least factors to n. 
        in the below for loop, i is the divisor of all j values. (divisr == vajok)
        */

        int cnt = 0;
        vec div(n + 1, 0);

        for(int i=1; i<=n; i++)
        {
                for(int j=i; j<=n; j+=i)
                {
                        div[j]++;
                }
        }

        for(int i=1; i<=n; i++)
        {
                cout<<"n: "<<i<<" factors : "<<div[i]<<en;
        }
}


int main(){

        // FIO 

        int n; 
        cin>>n;

        // naive approach 
        // for(int i=1; i<=n; i++)
        // {
        //         naive_approach(i);
        // }

        // cout<<endl<<endl;
        // efficient approach for finding number of factors of all n values 
        efficient_approach(n);






        return 0;
}
