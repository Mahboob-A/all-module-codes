











// /*  
// ===========
// Codeforces Contest 
// ===========
// 190323, Sunday
// Time : 08.00 pm 
// ===========
// Div 4 || Round 859
// ===========
// QS =  tmp code 1 
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




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, i1, j1, i2, j2;
//         string d;
//         cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;

//         int x = i1, y = j1, bounces = 0;
//         while (true) {
//             if (x == i2 && y == j2) {
//                 cout << bounces << "\n";
//                 break;
//             }
//             if (x < 1 || x > n || y < 1 || y > m) {
//                 cout << "-1\n";
//                 break;
//             }
//             if (d == "DR") {
//                 int dx = min(n - x, m - y);
//                 x += dx, y += dx, bounces += dx > 0;
//                 if (x == n && y == m) d = "UL";
//                 else if (x == n) d = "DL";
//                 else if (y == m) d = "UR";
//             } else if (d == "DL") {
//                 int dx = min(n - x, y - 1);
//                 x += dx, y -= dx, bounces += dx > 0;
//                 if (x == n && y == 1) d = "UR";
//                 else if (x == n) d = "DR";
//                 else if (y == 1) d = "DL";
//             } else if (d == "UR") {
//                 int dx = min(x - 1, m - y);
//                 x -= dx, y += dx, bounces += dx > 0;
//                 if (x == 1 && y == m) d = "DL";
//                 else if (x == 1) d = "UR";
//                 else if (y == m) d = "UL";
//             } else if (d == "UL") {
//                 int dx = min(x - 1, y - 1);
//                 x -= dx, y -= dx, bounces += dx > 0;
//                 if (x == 1 && y == 1) d = "DR";
//                 else if (x == 1) d = "UL";
//                 else if (y == 1) d = "UR";
//             }
//         }
//     }
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i1, j1, i2, j2, bounces = 0;
        string d;
        cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;
        bool impossible = false;
        while (i1 != i2 || j1 != j2) {
            if (d == "DR") {
                if (i1 == n && j1 == m) { // bottom-right corner
                    impossible = true;
                    break;
                } else if (i1 == n) {
                    d = "UL";
                    bounces++;
                } else if (j1 == m) {
                    d = "DL";
                    bounces++;
                } else {
                    i1++;
                    j1++;
                }
            } else if (d == "DL") {
                if (i1 == n && j1 == 1) { // bottom-left corner
                    impossible = true;
                    break;
                } else if (i1 == n) {
                    d = "UR";
                    bounces++;
                } else if (j1 == 1) {
                    d = "DR";
                    bounces++;
                } else {
                    i1++;
                    j1--;
                }
            } else if (d == "UR") {
                if (i1 == 1 && j1 == m) { // top-right corner
                    impossible = true;
                    break;
                } else if (i1 == 1) {
                    d = "DR";
                    bounces++;
                } else if (j1 == m) {
                    d = "UL";
                    bounces++;
                } else {
                    i1--;
                    j1++;
                }
            } else { // d == "UL"
                if (i1 == 1 && j1 == 1) { // top-left corner
                    impossible = true;
                    break;
                } else if (i1 == 1) {
                    d = "DL";
                    bounces++;
                } else if (j1 == 1) {
                    d = "UR";
                    bounces++;
                } else {
                    i1--;
                    j1--;
                }
            }
        }
        if (impossible) {
            cout << "-1\n";
        } else {
            cout << bounces << "\n";
        }
    }
    return 0;
}
