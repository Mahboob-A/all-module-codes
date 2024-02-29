


#include <bits/stdc++.h>
using namespace std;

bool is_powerful(string s) {
    int n = s.length();
    for (int k = 2; k <= n; k++) {
        if (n % k != 0) {
            continue;
        }
        int len = n / k;
        string t = s.substr(0, len);
        bool flag = true;
        for (int i = len; i < n; i += len) {
            if (s.substr(i, len) != t) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return true;
        }
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    for (int mask = 1; mask < (1 << n); mask++) {
        string t;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                t += s[i];
            }
        }
        if (is_powerful(t) && t.length() > ans) {
            ans = t.length();
        }
    }
    cout << ans << endl;
    return 0;
}
