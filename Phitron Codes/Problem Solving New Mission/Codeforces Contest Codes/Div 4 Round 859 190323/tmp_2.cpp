










// /*  
// ===========
// Codeforces Contest 
// ===========
// 190323, Sunday
// Time : 08.00 pm 
// ===========
// Div 4 || Round 859
// ===========
// QS =  tmp code 2 
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
// #define forn(y) for(int i=0; i<y; i++)
// #define Forn(y) for(int i=1; i<=y; i++)
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






// int main(){

//         FIO 

//         int t;
//         cin>>t;
//         while(t--)
//         {
//                 solve();
//         }


//         return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int cnt = 0; // count of odd numbers in array a
        for (int i = 1; i <= n; i++) {
            cnt += a[i] % 2;
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int len = r - l + 1;
            int odd_cnt = len - (r-l+1)/2;
            int even_cnt = len - odd_cnt;
            if (k % 2 == 0) {
                if (odd_cnt <= cnt && even_cnt <= n-cnt) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            } else {
                if (odd_cnt <= n-cnt && even_cnt <= cnt) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}




