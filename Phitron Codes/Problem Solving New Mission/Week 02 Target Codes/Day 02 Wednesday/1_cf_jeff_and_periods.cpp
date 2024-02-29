


/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 12.30 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 1 || B. Jeff and Periods || https://codeforces.com/problemset/problem/352/B
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

// #define loop(index, x, y) for(int index=x; index<y; index++)
// #define Loop(index, x, y) for(int index=x; index<=y; index++)
// #define loop(y) for(int index=0; index<y; index++)
// #define For(y) for(int index=1; index<=y; index++)

#define loop(index, y) for(int index=0; index<y; index++)
#define For(index, y) for(int index=1; index<=y; index++)
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

we will be given n and n input. 
same kind akadhkik input thakbe. akhn amader bolte hobe oi same j value gulo input deowa hoyeche, tader input er majhe same gap 
ache kina. mane 1 jodi 2 no index e input hoy, then 5 no index e, then 8 no index e 1 ache kina. 
ai vabe 1 asche 3 ta gap dhore dhore, thik ai tai answer e bolte hobe j 1 output dite hobe and 1 er gap koto 
ta seta dite hobe, kintu jodi gap thik na thake tahole seta ignore kore dite hobe, 
and ai sothik gap ache amon koi ta value ache tader size bolte hobe.

jodi kono value 1 bar matro ase, then tar gap er ans holo 0. 

so, approach: 

ekta array of vector neowa holo and value gulo input niye, setake array of vec er index 
dhore, oi value je je  index e input  hocche, sei index take oi value er vector e push_back kore rakha holo. 

jeno kon kon value kon kon index e ache, seta sei value er indx thekee tar vector check korlei jana jai. 

next, N porjonto loop cause n er value hisebe N porjonto input hote pare. 
then oi i er size ta niye check kora jodi size 1 theke boro hoy, then tader input position index er difference ta ber kora.
V[i][1] - V[i][0] = i er 1 theke 0 er value bad hocche karon 0 always 1st e asbe, and 0 index er value 1 er theke choto hobe. 

akhn oi i array index er vector theke pos gulo check korte hobe and tader diff ager ber kora diff er songle mila kina. jodi na kile then break, 
and sob mile gele ans e i and diff ke push_back kora and size of ans cout and print ans 


*/

const int N = 1e5 + 1;
vec V[N];
vecPii ans;


int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n; 
        cin>>n;         

        // taking the values and storing their index to that value 
        for(int index=0; index<n; index++)
        {
                int value; 
                cin>>value;
                V[value].pb(index);
        }

        for(int i = 1; i<N; i++)
        {
                int size = V[i].size(); // 1st diff

                if(size == 0)
                {
                        continue;
                }
                else if(size == 1)
                {
                        ans.pb({i, 0});
                }
                else if(size > 1)   // if any i th vector size if > 1 then check their diff is equal to 1st dff
                {
                        bool flag = true;
                        int diff = V[i][1] - V[i][0];

                        for(int j=1; j<size; j++)
                        {
                                if(V[i][j]  -  V[i][j-1]    !=    diff)
                                {
                                        flag = false;
                                        break;
                                }
                        }
                        if(flag)  // if all diffs are same then add to ans 
                        {
                                ans.pb({i, diff});
                        }
                }
        }

        cout<<ans.size()<<endl;  

        for(auto x : ans)
        {
                cout<<x.f << " " << x.s<<endl;
        }


        return 0;
}

