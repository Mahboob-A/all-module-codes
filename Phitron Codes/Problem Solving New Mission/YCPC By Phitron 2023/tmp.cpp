// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     string ans = "";
//     for(int i=0; i<s.length(); i++) {
//         if(isdigit(s[i])) {
//             int num = s[i] - '0';
//             int j = i+1;
//             while(isalpha(s[j])) j++;
//             string sub = s.substr(i+1, j-i-1);
//             for(int k=0; k<num; k++) ans += sub;
//             i = j-1;
//         }
//         else ans += s[i];
//     }
//     cout << ans << endl;
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         sort(arr, arr + n);
//         bool possible = false;
//         for (int i = 0; i < n - 1; i++) {
//             if (arr[i] % 2 != arr[i+1] % 2 && arr[i] <= arr[i+1]) {
//                 possible = true;
//                 break;
//             }
//         }
//         if (possible) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
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
        int min_odd = MAXN, min_even = MAXN;
        for (int i = 0; i < n; i++) 
        {
                cin >> arr[i];
                
                if (arr[i] % 2 == 0 && arr[i] < min_even) 
                {
                        min_even = arr[i];
                }
                if (arr[i] % 2 != 0 && arr[i] < min_odd) 
                {
                        min_odd = arr[i];
                }
        }

        if (min_odd != MAXN && min_even != MAXN) 
        {
               yes;
        } 
        else 
        {
                no;
        }
}

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
