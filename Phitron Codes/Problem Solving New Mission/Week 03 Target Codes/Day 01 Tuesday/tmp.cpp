#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        string s;
        cin >> k >> s;
        bool found = false;
        int f_count = 0, b_count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'F') {
                f_count++;
                if (f_count % 2 == 1 && b_count % 2 == 0) {
                    found = true;
                }
            } else {
                b_count++;
                if (b_count % 2 == 1 && f_count % 2 == 1 && i == s.length() - 1) {
                    found = true;
                }
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
