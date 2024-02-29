












/*  
===========
Self Learning 
===========
Topic :       Math 
Basic Number theory, Moudlar arithmatic, Basic combinotarics 

Part 1 : number of divisors / factors of a value 
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
int n;
int cnt;
// number of divisors / factors of a value 
void naive_approach()
{
        for(int i=1; i<=n; i++)
        {
                if(n % i == 0)
                {
                        cnt++;
                }
        }

        cout<<cnt<<en;
}

// square root of n time 
void efficient_approach()
{
        for(int i=1; i * i <=n; i++)
        {
                if(n % i == 0)
                {
                        // cout<<i<<en;
                        cnt++;
                }

                if(i != n / i)
                {
                        // cout<<"i !- n/i   "<<n/i<<"   i "<<i<<en;
                        // cout<<" ... "<<i<<" ";
                        cnt++;
                }

        }

        cout<<en<<cnt<<en;
}

int main(){

        // FIO 

        // number of divisors / factors of a value 

        cin>>n;

        // naive_approach();
        efficient_approach();





        return 0;
}
