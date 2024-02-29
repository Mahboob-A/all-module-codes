






/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 01 : 280223, Tuesday
Time : 03.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  05   ||   A. Kyoya and Photobooks   || https://codeforces.com/problemset/problem/554/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

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

/*  
Understanding: 


*/






int main(){

        // FIO 
        string s;
        cin>>s;
        int sz = s.size();
        cout<<(sz + 1) * 25 + 1<<endl;


        return 0;
}









// // logical approach 

// int main()
// {
//    // I will always use scanf and printf
//    // May be i won't be a good programmer but i will be a good human being
//    string inp , tmp  ;
//    cin >> inp ;
//    set < string > ans ;
//    int sz = inp.size();
//    int i , j , k;
//    for ( i = 0 ; i <= sz ; i++ )
//    {
//        for ( k = 'a' ; k <= 'z' ; k++ )
//        {
//            tmp = "";
//            for ( j = 0 ; j < i ; j++ )
//            {
//                tmp += inp[j];
//            }
//            tmp += ( char ) k ;
//            for ( j = i ; j < sz ; j++ ) tmp += inp[j];
//            ans.insert(tmp);
//        }
//    }
//    cout<<tmp<<endl;
//    cout << ans.size() << endl ;
 
 
 
//     return 0;
// }
