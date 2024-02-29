







/*  
===========
YCPC by Phitron | 1st Round : Contest 2 | 2023
===========
060323, Monday 
Time : 07.30 pm 
===========

===========
QS =  C
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





int main(){

        // FIO 


        string s, ans = "";
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
                if(s[i] >= 49 && s[i] <= 57)
                {
                        int val = s[i] - 48;
                        int idx = i + 1;
                        while(isalpha(s[idx]))
                        {
                                idx++;
                        }

                        string tmp = s.substr(i + 1, idx - i - 1);

                        for(int j=0; j<val; j++)
                        {
                                ans += tmp;
                        }
                        i = idx - 1;
                }
                else 
                {
                        ans += s[i];
                }
        }

        // for(int i=0; i<s.size(); i++)
        // {
        //         if(s[i] >= '1' && s[i] <= '9')
        //         {
        //                 int val = s[i] - 48;
        //                 process(val, i + 1);
        //                 ans += s[idx];
        //         }
        // }


        cout<<ans<<en;


        return 0;
}




