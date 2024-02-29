







/*  
===========
YCPC by Phitron | 1st Round : Contest 2 | 2023
===========
060323, Monday 
Time : 07.30 pm 
===========

===========
QS =  B
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
        string s;
        getline(cin, s);

        // int idx = s.find("Ratul");   

        bool ans = false;
        for(int i=0; i<s.size()-4; i++)
        {
                if(s[i] != ' ')
                {
                        if(s[i] == 'R' && s[i + 1] == 'a' && s[i + 2] == 't' && s[i + 3] == 'u' && s[i + 4] == 'l')
                        {
                                ans = true;
                        }
                }
        }

        if(ans) yes;
        else no;

        // if(s.find("Ratul") != string :: npos)
        // {
        //         yes;
        // }
        // else
        // {
        //         no;
        // }


        // python version 
        /*  
        


        s = input()  

        if 'Ratul' in s.split():   
        print('YES')
        else:
        print('NO')

        
        */

        return 0;
}




