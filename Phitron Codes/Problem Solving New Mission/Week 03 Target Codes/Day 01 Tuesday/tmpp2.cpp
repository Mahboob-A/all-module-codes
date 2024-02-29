





#include <bits/stdc++.h>
 
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }           
        // 3
        // 1 3 3
 
    for (int i = 0; i < n; ++i) 
    {
        int ans = 1;
        for (int j = 0; j < n; ++j) 
        {
            ans += (a[i] < a[j]);
                
        }   
        cout << ans << ' ';
    }   
    cout << '\n';
 
    return 0;
}  

// #include <iostream>
// #include <string>

// using namespace std;

// bool is_substring(string s) {
//     string fb = "";
//     for (int i = 1; fb.length() < s.length(); i++) {
//         if (i % 15 == 0) {
//             fb += "FB";
//         } else if (i % 3 == 0) {
//             fb += "F";
//         } else if (i % 5 == 0) {
//             fb += "B";
//         }
//     }

//     for (int i = 0; i < fb.length() - s.length() + 1; i++) {
//         bool match = true;
//         for (int j = 0; j < s.length(); j++) {
//             if (fb[i+j] != s[j]) {
//                 match = false;
//                 break;
//             }
//         }
//         if (match) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int k;
//         string s;
//         cin >> k >> s;
//         if (is_substring(s)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
