

// // // // // // // #include <bits/stdc++.h>
// // // // // // // using namespace std;

// // // // // // // bool isPalindrome(string s) {
// // // // // // //     int n = s.length();
// // // // // // //     for (int i = 0; i < n / 2; i++) {
// // // // // // //         if (s[i] != s[n - i - 1])
// // // // // // //             return false;
// // // // // // //     }
// // // // // // //     return true;
// // // // // // // }

// // // // // // // int main() {
// // // // // // //     int t;
// // // // // // //     cin >> t;
// // // // // // //     while (t--) {
// // // // // // //         int n;
// // // // // // //         cin >> n;
// // // // // // //         string s;
// // // // // // //         for (int i = 0; i < 2*n-2; i++) {
// // // // // // //             string temp;
// // // // // // //             cin >> temp;
// // // // // // //             if (temp.length() == n - 1)
// // // // // // //                 s = temp;
// // // // // // //         }
// // // // // // //         string prefix = s.substr(0, n - 2);
// // // // // // //         string suffix = s.substr(1, n - 2);
// // // // // // //         if (prefix + suffix == s && !isPalindrome(prefix) && !isPalindrome(suffix))
// // // // // // //             cout << "YES" << endl;
// // // // // // //         else if (prefix + suffix == s && isPalindrome(prefix) && isPalindrome(suffix))
// // // // // // //             cout << "YES" << endl;
// // // // // // //         else
// // // // // // //             cout << "NO" << endl;
// // // // // // //     }
// // // // // // //     return 0;
// // // // // // // }


#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = "";
        for (int i = 0; i < 2 * n - 2; i++) {
            string p;
            cin >> p;
            if (p.length() == n - 1) {
                s = p;
            }
        }
        string p1 = s.substr(0, n - 2) + s.substr(n - 1);
        string p2 = s.substr(1, n - 2) + s.substr(n - 1);
        if (is_palindrome(p1) || is_palindrome(p2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

void solve()
{
        int n;
        cin >> n;
        string s = "";
        for (int i = 0; i < 2 * n - 2; i++) {
            string p;
            cin >> p;
            if (p.length() == n - 1) {
                s = p;
            }
        }
        string p1 = s.substr(0, n - 2) + s.substr(n - 1);
        string p2 = s.substr(1, n - 2) + s.substr(n - 1);
        if (is_palindrome(p1) || is_palindrome(p2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}

int main(){

        int t;
        cin>>t;
        while(t--)
        {
                solve();
        }

}


// #include <bits/stdc++.h>
// using namespace std;

// bool is_palindrome(string s) {
//     int n = s.length();
//     for (int i = 0; i < n / 2; i++) {
//         if (s[i] != s[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         for (int i = 0; i < 2 * n - 2; i++) {
//             string prefix_or_suffix;
//             cin >> prefix_or_suffix;
//             if (prefix_or_suffix.length() == n - 1) {
//                 s = prefix_or_suffix;
//             }
//         }
//         string s1 = s.substr(0, n - 2);
//         string s2 = s.substr(1, n - 2);
//         string s3 = s1 + s2;
//         if (is_palindrome(s3)) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool is_palindrome(string s) {
//     int n = s.length();
//     for (int i = 0; i < n / 2; i++) {
//         if (s[i] != s[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<string> prefixes_suffixes(2*n);
//         for (int i = 0; i < 2 * n - 2; i++) {
//         //     string s;
//         //     cin >> s;
//         //     prefixes_suffixes.push_back(s);
//         cin>>prefixes_suffixes[i];
//         cout<<prefixes_suffixes[i]<<endl;
//         }
//         sort(prefixes_suffixes.begin(), prefixes_suffixes.end(), [](const string& a, const string& b) {
//             return a.length() > b.length();
//         });
//         string s1 = prefixes_suffixes[0], s2 = prefixes_suffixes[1];
//         string first = s1 + s2.back(), second = s2 + s1.back();
//         if (is_palindrome(first)) {
//             cout << "YES" << endl;
//         } else if (is_palindrome(second)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool is_palindrome(string s) {
//     return s == string(s.rbegin(), s.rend());
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<string> prefixes_suffixes(2*n - 2);

//         for (int i = 0; i < 2*n - 2; i++) {
//             cin >> prefixes_suffixes[i];
//             cout<<prefixes_suffixes[i]<<endl;
//         }

//         sort(prefixes_suffixes.begin(), prefixes_suffixes.end(), [](string a, string b) {
//             return a.length() < b.length();
//         });

//         string candidate1 = prefixes_suffixes.back();
//         string candidate2 = prefixes_suffixes[prefixes_suffixes.size() - 2];

//         string s = candidate1 + candidate2.back();

//         if (is_palindrome(s)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string s) {
//     int l = 0, r = s.length() - 1;
//     while (l < r) {
//         if (s[l] != s[r])
//             return false;
//         l++;
//         r--;
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s = "";
//         for (int i = 0; i < 2 * n - 2; i++) {
//             string x;
//             cin >> x;
//             if (x.length() == n - 1) {
//                 s = x;
//             }
//         }
//         string prefix = s.substr(0, n - 2);
//         string suffix = s.substr(1, n - 2);
//         if (isPalindrome(prefix + suffix))
//             cout << "YES\n";
//         else if (isPalindrome(suffix + prefix))
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool isPalindrome(string s) {
//     int n = s.length();
//     for (int i = 0; i < n/2; i++) {
//         if (s[i] != s[n-i-1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string s = "";
//         for (int i = 0; i < 2*n-2; i++) {
//             string temp;
//             cin >> temp;
//             if (temp.length() == n-1) {
//                 s = temp;
//             }
//         }

//         string prefix = "", suffix = "";
//         for (int i = 0; i < 2*n-2; i++) {
//             if (s.substr(0, i) == s.substr(2*n-2-i)) {
//                 prefix = s.substr(0, i);
//             }
//             if (s.substr(n-i) == s.substr(n-2*n+2+i)) {
//                 suffix = s.substr(n-i);
//             }
//         }

//         string candidate = prefix + suffix;
//         if (isPalindrome(candidate)) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool is_palindrome(string s) {
//     int n = s.length();
//     for (int i = 0; i < n / 2; i++) {
//         if (s[i] != s[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<string> prefixes, suffixes;
//         for (int i = 0; i < 2 * n - 2; i++) {
//             string s;
//             cin >> s;

//             if (s.length() == n - 1) {
//                 prefixes.push_back(s);
//             } else {
//                 suffixes.push_back(s);
//             }
//         }

//         // string s1 = prefixes[0] + suffixes[0][n - 2];
//         // string s2 = suffixes[0] + prefixes[0][n - 2];
//         string s1 = prefixes[0] + suffixes[0].substr(n - 2);
//         string s2 = suffixes[0] + prefixes[0].substr(n - 2);

//         if (is_palindrome(s1)) {
//             cout << "YES\n";
//         } else if (is_palindrome(s2)) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }

